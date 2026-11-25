
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    cout << "Original List: 10 <-> 20 <-> 30";

    Node* temp = head;

    head = head->next;
    head->prev = NULL;

    delete temp;

    cout << "\nUpdated List: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL";

    delete third;
    delete head->next;
    delete head;

    return 0;
}

