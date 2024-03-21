#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node* next;
    Node(T value)
    {
        this->data = value;
        this->next = nullptr;
    }
};

template <typename T>
class Stack
{
public:
    Stack()
    {
        this->top = nullptr;
    };

    Stack(const Stack& other)
    {
        if (other.top == nullptr)
        {
            this->top = nullptr;
            return;
        }

        Node<T>* temp = other.top;
        Node<T>* newTop = new Node<T>(temp->data);
        Node<T>* newTemp = newTop;

        while (temp->next != nullptr)
        {
            temp = temp->next;
            newTemp->next = new Node<T>(temp->data);
            newTemp = newTemp->next;
        }

        this->top = newTop;
    }

    Stack& operator=(const Stack& other)
    {
        if (this == &other)
        {
            return *this;
        }

        Stack temp(other);

        swap(temp.top, this->top);

        return *this;
    }

    Stack operator+(const Stack& other)
    {
        Stack resultStack(*this);

        Node<T>* temp = resultStack.top;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = other.top;

        return resultStack;
    }

    Stack operator*(const Stack& other)
    {
        Stack resultStack;

        Node<T>* temp1 = this->top;

        while (temp1 != nullptr)
        {
            Node<T>* temp2 = other.top;

            while (temp2 != nullptr)
            {
                if (temp1->data == temp2->data)
                {
                    resultStack.push(temp1->data);
                    break;
                }

                temp2 = temp2->next;
            }

            temp1 = temp1->next;
        }

        return resultStack;
    }

    void push(T value)
    {
        Node<T>* temp = new Node<T>(value);

        temp->next = top;
        top = temp;
    }

    bool isEmpty() { return top == nullptr; };

    T peek()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        else
        {
            cout << "Stack is empty" << endl;

            return T();
        }
    }

    void pop()
    {
        if (!isEmpty())
        {
            Node<T>* temp = top;
            top = top->next;
            delete temp;
        }
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    void print()
    {
        Node<T>* temp = top;
        while (temp != nullptr)
        {
            cout << temp->data;
            temp = temp->next;
            if (temp != nullptr)
            {
                cout << " -> ";
            }
        }
        cout << endl;
    }

    ~Stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }

private:
    Node<T>* top;
};

int main()
{
    Stack<int> stack1;

    stack1.push(11);
    stack1.push(22);
    stack1.push(33);
    stack1.push(44);

    stack1.print();

    stack1.pop();
    stack1.pop();

    stack1.print();

    stack1.push(33);

    cout << "Top: " << stack1.peek() << endl;

    Stack<int> stack2;

    stack2.push(10);
    stack2.push(20);
    stack2.push(30);
    stack2.push(40);

    stack2.print();

    Stack<int> stack3 = stack1 + stack2;
    cout << "Stack3" << endl;
    stack3.print();

    Stack<int> stack4 = stack1 * stack3;

    cout << "Stack4" << endl;
    stack4.print();

    return 0;
}
