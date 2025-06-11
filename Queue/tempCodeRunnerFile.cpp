// Implementation of Queue using Arrays
#include <iostream>
using namespace std;
#define N 5;
int data;
int front = -1;
int rear = -1;
void enqueue(int arr[], int data)
{
    if (rear == N - 1)
    {
        cout << "Queue is full" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        cout << "Enter the data - " << endl;
        cin >> data;
        front = rear = 0;
        arr[rear] = data;
    }
    else
    {
        cout << "Enter the data - " << endl;
        cin >> data;
        rear++;
        arr[rear] = data;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else if (front > rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
void display(int arr[])
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
}
int main()
{
    int arr[N];
    int choice;
    while (1)
    {
        cout << "1 - Enqueue || 2 - Dequeue || 3 - Display || 0 - Exit" << endl;
        cout << "Enter your choice - " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            enqueue(arr, data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display(arr);
            break;
        case 0:
            return 0;
        }
    }
}