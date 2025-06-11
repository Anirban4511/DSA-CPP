//Implementing Stack using Linked List
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *link;
};
int ind=-1,pos=0;
struct Node *top=NULL;
void push(int data)
{
    Node *ptr=NULL;
    ptr=new Node;
    ptr->data=data;
    ptr->link=top;
    top=ptr;
    ind++;
    ++pos;
}
void display()
{
    Node *ptr=NULL;
    ptr=top;
    if(top==NULL)
    {
        cout<<"Stack is empty";
    }
    else{
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        }
    }
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
    struct Node *ptr=NULL;
    ptr=top;
    top=top->link;
    delete ptr;
    ind--;
    --pos;
    }
}
void peek()
{
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<top->data<<endl;
        cout<<"Index is - "<<ind<<endl;
        cout<<"Position is - "<<pos<<endl;
    }
}
int main()
{
    int choice;
   
    int data;
   while(1)
   {
       cout<<"1 - Push || 2 - Pop || 3 - Peek || 4 - Display || 0 - Exit"<<endl;
       cout<<"Enter your choice - "<<endl;
       cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter the data";
        cin>>data;
        push(data);
        break;
        case 2:
        display();
        break;
        case 3:
        peek();
        break;
        case 4:
        display();
        break;
        case 0:
        return 0;
    }
   }
}