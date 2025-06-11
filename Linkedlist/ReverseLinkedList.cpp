/*This is the reverse of a linked list using stack*/

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link = NULL;
};

struct node *head, *temp, *curr = NULL;
void create(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        struct node *temp = NULL;
        if (head == NULL)
        {
            temp = new node;
            temp->data = nums[i];
            temp->link = NULL;
            head = temp;
            curr = head;
        }
        else
        {
            temp = new node;
            temp->data = nums[i];
            temp->link = NULL;
            curr->link = temp;
            curr = temp;
        }
    }
}

void reverse()
{
    stack<int>s;
    struct node *temp=NULL;
    temp=head;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp=temp->link;
    }
    temp=head;
    while (temp!=NULL)
    {
        temp->data=s.top();
        s.pop();
        temp=temp->link;
    }
    
}

void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        cout<<ptr->link<<" ";
        ptr = ptr->link;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    create(nums);
    display();
    reverse();
    cout<<endl;
    display();
}