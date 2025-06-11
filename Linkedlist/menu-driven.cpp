/*
1:Add the first node
2:Add at the beginning
3:Add at the specific position
4:Add at the end
5:Delete at the beginning
6:Delete at the specified position
7:Delete at the end
8:Print the data
9:Update the data of a linked list data item
10:count the total no of nodes
11:reverse the linked list
12:Exit
*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

void addFirstNode()
{
    if (head == NULL)
    {
        int data;
        cout << "Enter the data for the first node - " << endl;
        cin >> data;
        struct node *temp = NULL;
        temp = new node;
        temp->data = data;
        temp->link = NULL;
        head = temp;
    }
    else
    {
        cout << "Linked List is not empty" << endl;
    }
}
void addBeginning()
{
    if (head != NULL)
    {
        struct node *temp = NULL;
        int data;
        cout << "Enter the data of the node" << endl;
        cin >> data;
        temp = new node;
        temp->data = data;
        temp->link = NULL;
        temp->link = head;
        head = temp;
    }
    else
    {
        cout << "Linked list is empty, U can't insert any node at the beginning, call the addEmpty function first" << endl;
    }
}
void addSpecific()
{
    if (head != NULL)
    {
        int pos;
        cout << "Enter the position - " << endl;
        cin >> pos;
        if (pos == 1)
        {
            addBeginning();
        }
        else
        {
            pos = pos - 1;
            struct node *temp, *prev;
            struct node *curr = NULL;
            int data;
            cout << "Enter the data for the node - " << endl;
            cin >> data;
            curr = new node;
            curr->data = data;
            curr->link = NULL;
            temp = head;
            prev = NULL;
            while (pos--)
            {
                prev = temp;
                temp = temp->link;
            }
            prev->link = curr;
            curr->link = temp;
        }
    }
    else
    {
        cout << "Linked List is empty" << endl;
    }
}
void addEnd()
{
    if (head != NULL)
    {
        int data;
        cout << "Enter the data for the node" << endl;
        cin >> data;
        struct node *temp = NULL;
        temp->data = data;
        temp->link = NULL;
        struct node *ptr = head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
    else
    {
        cout << "Linked List is empty" << endl;
    }
}
void delBeginning()
{
    if (head != NULL)
    {
        struct node *temp = NULL;
        temp = head;
        head = head->link;
        delete temp;
        temp = NULL;
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

void delSpecific()
{
    if (head != NULL)
    {
        int pos;
        cout << "Enter the position - " << endl;
        cin >> pos;
        if (pos == 1)
        {
            delBeginning();
        }
        else
        {
            pos = pos - 1;
            struct node *temp, *prev;
            temp = head;
            prev = NULL;
            while (pos--)
            {
                prev = temp;
                temp = temp->link;
            }
            prev->link = temp->link;
            delete temp;
            temp = NULL;
        }
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

void delEnd()
{
    if (head != NULL)
    {
        struct node *prev, *temp;
        prev = NULL;
        temp = head;
        while (temp->link = NULL)
        {
            prev = temp;
            temp = temp->link;
        }
        prev->link = NULL;
        delete temp;
        temp = NULL;
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}
void display()
{
    if (head != NULL)
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}
void update()
{
    if (head != NULL)
    {
        int pos;
        cin >> pos;
        int data;
        cout << "Enter the data for the updation" << endl;
        if (pos == 1)
        {
            head->data = data;
        }
        else
        {
            pos = pos - 1;
            struct node *temp = head;
            while (pos--)
            {
                temp = temp->link;
            }
            temp->data = data;
        }
    }
    else
    {
        cout << "Linked list is empty" << endl;
    }
}

int countTotal()
{
    if (head != NULL)
    {
        int count = 1;
        struct node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->link;
        }
        return count;
    }
    else
    {
        return 0;
    }
}
void reverse()
{
    struct node *curr, *next, *afternext;
    curr = next = afternext = NULL;
    curr = head;
    if (head != NULL)
    {
        while (curr != NULL)
        {
            curr->link = NULL;
            next->link = curr;
            curr = next = afternext;
            afternext = afternext->link->link;
            curr = afternext;
            next = afternext->link;
        }
    }
    else
    {
        cout << "Linkedlist is empty" << endl;
    }
}
int main()
{
    int ch;
    while (1)
    {
        cout << endl
             << "1:Add the first node" << "2:Add at the beginning" << "3:Add at the specific position" << "4:Add at the end" << "5:Delete at the beginning" << "6:Delete at the specified position" << "7:Delete at the end" << "8:Print the data" << "9:Update the data of a linked list data item" << "10:count the total no of nodes" << "11:reverse the linked list" << "12:Exit";

        cout << "Enter Your Choice - " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            addFirstNode();
            break;
        case 2:
            addBeginning();
            break;
        case 3:
            addSpecific();
            break;
        case 4:
            addEnd();
            break;
        case 5:
            delBeginning();
            break;
        case 6:
            delSpecific();
            break;
        case 7:
            delEnd();
            break;
        case 8:
            display();
            break;
        case 9:
            update();
            break;
        case 10:
            if (countTotal())
                cout << countTotal() << endl;
            else
                cout << countTotal() << endl;
            break;
        case 11:
            reverse();
            break;
        case 12:
            return 0;
            break;
        default:
            cout << "Please Enter A Valid Choice" << endl;
        }
    }
}
