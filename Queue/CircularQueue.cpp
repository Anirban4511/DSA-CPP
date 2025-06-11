// Implementing Circular Queue using Array
#include <iostream>
using namespace std;
#define N 5
int front = -1;
int rear = -1;
int arr[N];
void enqueue()
{
    int data;
    if ((rear + 1) % N == front)
    {
        cout << "Circular Queue is Full" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        cout << "Enter the data for the " << (rear + 1) % N << "th index - " << endl;
        cin >> data;
        front = rear = 0;
        arr[rear] = data;
    }
    else
    {
        cout << "Enter the data for the " << (rear + 1) % N << "th index - " << endl;
        cin >> data;
        rear=(rear+1)%N;
        arr[rear]=data;
    }
}
void dequeue()
{
    if(front ==-1 && rear ==-1)
    {
        cout<<"Circular Queue is Empty"<<endl;
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    while(i!=rear)
    {
        cout<<arr[i];
        i=(i+1)%N;
    }
    cout<<arr[i]<<endl;
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
        }
    }
}