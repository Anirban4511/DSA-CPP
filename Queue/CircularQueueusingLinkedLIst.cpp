// Implementing Circular Queue using Linked List
// Internally Circular Queue using Linked List is same as Circular Linked List
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *link = NULL;
};
struct node *front = NULL;
struct node *rear = NULL;
struct node *ptr = NULL;
void enqueue()
{
    int data;
    ptr = new node;
    if (front == NULL && rear == NULL)
    {
        cout << "Enter the data of the node - " << endl;
        cin >> data;
        front = rear = ptr;
        rear->data = data;
        rear->link = rear;
    }
    else
    {
        cout << "Enter the data of the node - " << endl;
        cin >> data;
        ptr->data = data;
        ptr->link = NULL;
        rear->link = ptr;
        rear = ptr;
        rear->link = front;
    }
}
void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else if (front == rear)
    {
        delete front;
        front = rear = NULL;
    }
    else
    {
        struct node *ptr1 = front;
        front = front->link;
        delete ptr1;
        rear->link = front;
    }
}
void display()
{
    if (front == NULL && rear == NULL)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        struct node *ptr1 = front;
        do
        {
            cout << ptr1->data;
            ptr1 = ptr1->link;
        }
        while (ptr1 != front);
        cout<<endl;
        // cout << ptr1->data<<endl;
    }
}
void address()
{
    cout << "The address of the Rear->link is - " << rear->link << endl;
    cout << "The address of the Front is - " << front << endl;
}
int main()
{
    int choice;
    while (1)
    {
        cout << "1 - Enqueue || 2 - Dequeue || 3 - Display || 9 - Address of Rear->link and Front || 0 - Exit" << endl;
        cout << "Enter your choice - " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 9:
            address();
            break;
        case 0:
            return 0;
        default:
            cout << "Please enter a valid choice!";
        }
    }
}
