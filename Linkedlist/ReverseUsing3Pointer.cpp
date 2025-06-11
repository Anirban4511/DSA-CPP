/*This is reverse of a linked list using 3 pointers*/
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
struct node *prev,*curr,*next;
prev=NULL;
curr=head;
next=curr->link;
while(next!=NULL){
    curr->link=prev;
    prev=curr;
    curr=next;
    next=next->link;
}
curr->link=prev;
head=curr;
    
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