#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
	T data;
	Node<T>* next;
	Node<T>* prev;
	Node(T data)
	{
		this->data = data;
		this->next = nullptr;
		this->prev = nullptr;
	};
};

template <typename T>
class Queue
{
public:
	Queue() 
	{
		this->head = nullptr;
		this->tail = nullptr;
	};

	bool isEmpty()
	{
		return head == nullptr;
	}

	void addLastQueue(T value)
	{
		Node<T>* newNode = new Node<T>(value);
		if (isEmpty())
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
	}

	void addFirstQueue(T value)
	{
		Node<T>* newNode = new Node<T>(value);
		if (isEmpty())
		{
			head = tail = newNode;
		}
		else
		{
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}
	}

	void deleteFirstQueue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty." << endl;
		}
		else
		{
			Node<T>* temp = head;
			head = head->next;
			delete temp;
		}
	}

	void deleteLastQueue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty." << endl;
		}
		else
		{
			Node<T>* temp = tail;
			tail = tail->prev;
			tail->next = nullptr;
			delete temp;
		}
	}

	void getFirstQueue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty." << endl;
		}
		else
		{
			cout << "First element is " << head->data << "." << endl;
		}
	}

	void getLastQueue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty." << endl;
		}
		else
		{
			cout << "Last element is " << tail->data << "." << endl;
		}
	}

	void printQueue()
	{
		Node<T>* current = head;
		while (current)
		{
			cout << " - " << current->data;
			current = current->next;
		}
		cout << endl;
	}

	~Queue() { while (!isEmpty()) deleteFirstQueue(); };

private:
	Node<T>* head;
	Node<T>* tail;
};

int main()
{
	Queue<int> q1;

	q1.addLastQueue(11);
	q1.addLastQueue(22);
	q1.addLastQueue(33);
	q1.addLastQueue(44);
	q1.addLastQueue(55);

	q1.printQueue();

	q1.addFirstQueue(99);

	q1.printQueue();

	q1.deleteLastQueue();
	q1.deleteLastQueue();

	q1.printQueue();

	q1.getFirstQueue();
	q1.getLastQueue();

	q1.~Queue();
};