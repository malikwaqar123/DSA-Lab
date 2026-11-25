
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = fifth;

    fifth->data = 25;
    fifth->next = NULL;

    int count = 0;
    Node* temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "Total number of nodes: " << count;

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}

