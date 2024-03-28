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

	Queue(const Queue& other)
	{
		this->head = nullptr;
		this->tail = nullptr;
		Node<T>* temp = other.head;
		while (temp != nullptr)
		{
			addLastQueue(temp->data);
			temp = temp->next;
		}
	}

	int getSize()
	{
		int size = 0;

		Node<T>* temp = head;

		if (temp == nullptr)
		{
			cout << "Impossible";
		}
		while (temp)
		{
			size++;
			temp = temp->next;
		}
		
		return size;
	}

	Queue operator+(const Queue& other)
	{
		Queue newQueue;

		Node<T>* temp = other.head;

		while (temp != nullptr)
		{
			newQueue.addLastQueue(temp->data);
			temp = temp->next;
		}

		temp = head;
		while (temp != nullptr)
		{
			newQueue.addLastQueue(temp->data);
			temp = temp->next;
		}

		delete temp;
		return newQueue;
	}

	Queue operator*(const Queue& other)
	{
		Queue result;
		Node<T>* temp1 = head;
		while (temp1 != nullptr)
		{
			Node<T>* temp2 = other.head;
			while (temp2 != nullptr)
			{
				if (temp1->data == temp2->data)
				{
					result.addLastQueue(temp1->data);
					break;
				}
				temp2 = temp2->next;
			}
			temp1 = temp1->next;
		}
		delete temp1;
		return result;
	}

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
	cout << "1" << endl;

	Queue<int> q1;

	
	q1.addLastQueue(11);
	q1.addLastQueue(12);
	q1.addLastQueue(13);
	q1.addLastQueue(14);
	q1.addLastQueue(15);

	q1.printQueue();

	q1.addFirstQueue(19);

	q1.printQueue();

	q1.deleteLastQueue();
	q1.deleteLastQueue();

	q1.printQueue();

	q1.getFirstQueue();
	q1.getLastQueue();


	cout << "2" << endl;

	Queue<int> q2(q1);

	q2.addLastQueue(29);

	q2.printQueue();


	cout << "3" << endl;

	Queue<int> q3 = q2;

	q3.deleteFirstQueue();

	q3.printQueue();


	cout << "4" << endl;

	Queue<int> q4 = q1 + q3;

	q4.deleteLastQueue();

	q4.printQueue();

	cout << "5" << endl;

	Queue<int> q5 = q2 * q3;

	q5.printQueue();

	cout << endl;

	cout << "Size1: " << q1.getSize() << endl;
	cout << "Size2: " << q2.getSize() << endl;
	cout << "Size3: " << q3.getSize() << endl;
	cout << "Size4: " << q4.getSize() << endl;
};