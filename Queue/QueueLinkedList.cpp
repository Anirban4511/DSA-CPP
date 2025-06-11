#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *link=NULL;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *ptr=NULL;
void enqueue()
{
    int data;
    ptr=new node;
    if(front ==NULL && rear==NULL)
    {
        cout<<"Enter the data of the node - "<<endl;
        cin>>data;
        front=rear=ptr;
        rear->data=data;
        rear->link=NULL;
    }
    else{
        cout<<"Enter the data of the node - "<<endl;
        cin>>data;
        ptr->data=data;
        ptr->link=NULL;
        rear->link=ptr;
        rear=ptr;
    }
}
void dequeue()
{
    if(front==NULL && rear==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else if(front==rear)
    {
         delete front;
        front=rear=NULL;
    }
    else{
        struct node *ptr1=front;
        front=front->link;
        delete ptr1;
    }
}
void display()
{
      if(front==NULL && rear==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        struct node *ptr1=front;
        while(ptr1!=NULL)
        {
            cout<<ptr1->data<<endl;
            ptr1=ptr1->link;
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout << "1 - Enqueue || 2 - Dequeue || 3 - Display || 0 - Exit" << endl;
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
        case 0:
            return 0;
        default:
        cout<<"Please enter a valid choice!";
        }
    }
}