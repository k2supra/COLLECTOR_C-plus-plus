#include <iostream>

using namespace std;

template<typename T>
class Node {
public:
    T data;
    Node<T>* next;
    Node<T>* prev;
    Node(T data) : data(data), next(nullptr), prev(nullptr) {}
};

template<typename T>
class Array {
public:
    Array() : head(nullptr), tail(nullptr), size(0), grow(1) {}

    ~Array() { removeAll(); }

    int getSize() const { return size; }

    void setSize(int newSize, int newGrow = 1) {
        if (newSize <= 0) return;
        size = newSize;
        grow = newGrow;
    }

    int getUpperBound() const { return size - 1; }

    bool isEmpty() const { return size == 0; }

    void freeExtra() {
        if (size <= 0) return;
        while (tail != nullptr && size > 0) {
            Node<T>* temp = tail;
            tail = tail->prev;
            delete temp;
            size--;
        }
        head = nullptr;
    }

    void removeAll() {
        freeExtra();
        head = nullptr;
    }

    T getAt(int index) const {
        if (index < 0 || index >= size) {
            cout << "Error: Index out of bounds" << endl;
            return T();
        }
        Node<T>* temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->next;
        }
        return temp->data;
    }

    void setAt(int index, T value) {
        if (index < 0 || index >= size) {
            cout << "Error: Index out of bounds" << endl;
            return;
        }
        Node<T>* temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->next;
        }
        temp->data = value;
    }

    T& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Error: Index out of bounds" << endl;
            static T dummy;
            return dummy;
        }
        Node<T>* temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->next;
        }
        return temp->data;
    }

    const T& operator[](int index) const {
        if (index < 0 || index >= size) {
            cout << "Error: Index out of bounds" << endl;
            static T dummy;
            return dummy;
        }
        Node<T>* temp = head;
        for (int i = 0; i < index; ++i) {
            temp = temp->next;
        }
        return temp->data;
    }

    void add(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void append(const Array& other) {
        for (int i = 0; i < other.getSize(); ++i) {
            add(other[i]);
        }
    }

    Array& operator=(const Array& other) {
        if (this == &other) return *this;
        removeAll();
        for (int i = 0; i < other.getSize(); ++i) {
            add(other[i]);
        }
        return *this;
    }

    T* getData() const {
        T* data = new T[size];
        Node<T>* temp = head;
        for (int i = 0; i < size; ++i) {
            data[i] = temp->data;
            temp = temp->next;
        }
        return data;
    }

    void insertAt(int index, const T& value) {
        if (index < 0 || index > size) {
            cout << "Error: Index out of bounds" << endl;
            return;
        }
        if (index == 0) {
            addFirst(value);
        }
        else if (index == size) {
            addLast(value);
        }
        else {
            Node<T>* newNode = new Node<T>(value);
            Node<T>* temp = head;
            for (int i = 0; i < index; ++i) {
                temp = temp->next;
            }
            newNode->next = temp;
            newNode->prev = temp->prev;
            temp->prev->next = newNode;
            temp->prev = newNode;
            size++;
        }
    }

    void removeAt(int index) {
        if (index < 0 || index >= size) {
            cout << "Error: Index out of bounds" << endl;
            return;
        }
        if (index == 0) {
            deleteFirst();
        }
        else if (index == size - 1) {
            deleteLast();
        }
        else {
            Node<T>* temp = head;
            for (int i = 0; i < index; ++i) {
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            size--;
        }
    }

private:
    Node<T>* head;
    Node<T>* tail;
    int size;
    int grow;

    void addFirst(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    void addLast(const T& value) {
        add(value);
    }

    void deleteFirst() {
        if (head == nullptr) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr;
        }
        delete temp;
        size--;
    }

    void deleteLast() {
        if (tail == nullptr) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        Node<T>* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        }
        else {
            head = nullptr;
        }
        delete temp;
        size--;
    }
};

int main() {
    Array<int> array;
    array.add(1);
    array.add(2);
    array.add(3);
    array.add(4);

    Array<int> otherArray;
    otherArray.add(5);
    otherArray.add(6);
    otherArray.add(7);

    array.append(otherArray);

    cout << "Array: ";
    for (int i = 0; i < array.getSize(); ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    array.removeAt(3);

    cout << "Array after removing element at index 3: ";
    for (int i = 0; i < array.getSize(); ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

