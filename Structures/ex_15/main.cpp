#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>

using namespace std;


struct Node
{
	string key;
	vector<string> violations;
	Node* left;
	Node* right;
	Node(const string& k) : key(k), left(nullptr), right(nullptr){}
};

Node* addViolation(Node* root, const string& carNumber, const string& violation)
{
	if (root == nullptr)
	{
		root = new Node(carNumber);
		root->violations.push_back(violation);
	}
	else if (carNumber < root->key)
	{
		root->left = addViolation(root->left, carNumber, violation);
	}
	else if (carNumber > root->key)
	{
		root->right = addViolation(root->right, carNumber, violation);
	}
	else
	{
		root->violations.push_back(violation);
	}

	return root;
};

Node* printDatabase(Node* root)
{
	if (root == nullptr)
	{
		return 0;
	}
	printDatabase(root->left);
	cout << "�����: " << root->key << endl;
	for (const string& violation : root->violations)
	{
		cout << " - " << violation << endl;
	}
	printDatabase(root->right);
};

Node* printDataByNumber(Node* root, const string& carNumber)
{
	if (root == nullptr)
	{
		cout << "���� ������" << endl;
	}
	else if (carNumber < root->key)
	{
		printDataByNumber(root->left, carNumber);
	}
	else if (carNumber > root->key)
	{
		printDataByNumber(root->right, carNumber);
	}
	else
	{
		cout << "�����: " << root->key << endl;
		for (const string& violation : root->violations)
		{
			cout << " - " << violation << endl;
		}
	}
	return 0;
};

Node* printDataInRange(Node* root, const string& minKey, const string& maxKey)
{
	if (root == nullptr)
	{
		return 0;
	}
	if (root->key >= minKey)
	{
		if (root->left != nullptr && root->left->key >= minKey)
		{
			printDataInRange(root->left, minKey, maxKey);
		}
		cout << "�����: " << root->key << endl;
		for (const string& violation : root->violations)
		{
			cout << " - " << violation << endl;
		}
		if (root->right != nullptr && root->right->key <= maxKey)
		{
			printDataInRange(root->right, minKey, maxKey);
		}
	}
	else
	{
		if (root->right != nullptr && root->right->key <= maxKey)
		{
			printDataInRange(root->right, minKey, maxKey);
		}
	}
};

void deleteTree(Node* root)
{
	if (root == nullptr)
	{
		return;
	}
	deleteTree(root->left);
	deleteTree(root->right);
	delete(root);
};

int main()
{
	setlocale(LC_ALL, "ukr");
	SetConsoleOutputCP(1251);
	Node* root = nullptr;
	while (true)
	{
		cout << "1. ������ ��������������\n2. ������ ���� ���� �����\n3. ���������� ����� �� �������\n4. ���������� ����� �� ��������� ������\n5. �����\n";
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			cin.ignore();
			string carNumber;
			string violation;
			cout << "������ ����� ������: ";
			getline(cin, carNumber);
			cout << "������ ��������������: ";
			getline(cin, violation);
			
			root = addViolation(root, carNumber, violation);
		}
		else if (choice == 2)
		{
			printDatabase(root);
		}
		else if (choice == 3)
		{
			cin.ignore();
			string carNumber;
			cout << "������ ����� ������: ";
			getline(cin, carNumber);
			printDataByNumber(root, carNumber);
		}
		else if (choice == 4)
		{
			cin.ignore();
			string minKey, maxKey;
			cout << "������ ��������� �����: ";
			getline(cin, minKey);
			cout << "������ ����������� �����: ";
			getline(cin, maxKey);
			printDataInRange(root, minKey, maxKey);
		}
		else if (choice == 5)
		{
			break;
		}
	}
	deleteTree(root);
	root == nullptr;
	return 0;
}