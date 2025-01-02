#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

    ~LinkedList()
    {
        Node *temp = head;
        while (head)
        {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getHead()
    {
        cout << head->value << endl;
    }
    void getTail()
    {
        cout << tail->value << endl;
    }
    void getLength()
    {
        cout << length << endl;
    }

    void append(int value)
    {
        Node *newNode = new Node(value);

        if (length == 0)
        {
            head = newNode;
            tail = newNode;
        }

        if (!tail->next)
        {
            tail->next = newNode;
            tail = newNode;
        }
        length++;
    }

    void deleteLast()
    {

        // when there nothing
        if (length == 0)
        {
        }
        cout << "hii" << length << endl;

        // when we have == 1
        if (length == 1)
        {
            delete head;
            length--;
        }

        // when we have > 1
        if (length > 1)
        {
            cout << "hii" << endl;
            Node *secondToLast;
            Node *temp = head;
            while (temp)
            {
                if (!temp->next)
                {
                    secondToLast = temp;
                    break;
                }
                temp = temp->next;
            }
            delete tail;
            tail = secondToLast;
            cout << "val: " << secondToLast->next->value << endl;
            length--;
        }
    }

    void insert(int value)
    {
        Node *newNode = new Node(value);
        Node *temp = head;

        while (temp)
        {

            if (!temp)
            {
                temp->next = newNode;
            }
            temp = head->next;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList(3);
    list->append(5);
    list->append(10);
    list->append(20);
    list->deleteLast();

    list->printList();
    // list->getHead();
    // list->getTail();
    // list->getLength();
}