#include<iostream>
using namespace std;
struct node{
    int data;
    node *link=NULL;
};
int main()
{
    node *head=NULL;
    head=new node;
    head->data=23;
    head->link=NULL;
    //printing the data of the first node of the single linkedlist
    cout<<"Data in the first node is - "<<head->data;

}