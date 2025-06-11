#include<iostream>
using namespace std;
struct node{
    int data;
    node *link=NULL;
};
int main()
{
    node *head=NULL;
    node *ptr=head;
    int total=0,data;
    cout<<"How many nodes u want to create - "<<endl;
    cin>>total;
    head=new node;
    cout<<"Enter the 1 node data - "<<endl;
    cin>>data;
    head->data=data;
    head->link=NULL;
    ptr=head;
    total-=1;
    while(total!=0)
    {
        ptr->link=new node;
        ptr=ptr->link;
        cout<<"Enter the data for the "<<total<<"node"<<endl;
        cin>>data;
        ptr->data=data;
        ptr->link=NULL;
        total--;
    }
    ptr=head;

    //printing the data part of the single linked list
    while(ptr!=NULL)
    {
        cout<<"The data for the "<<total+1<<"node is - "<<ptr->data<<endl;
        ptr=ptr->link;
        total++;
    }
}