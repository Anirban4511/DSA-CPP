#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link = NULL;
};

struct node *head, *temp, *curr = NULL;
struct node *slow,*fast;
void create(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        struct node *temp = NULL;
        struct node *prev=NULL;
        struct node *fixed = head;

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
            temp->link=NULL;
            curr->link = temp;
            curr = temp;
        }
    }
    temp=head;
    while(temp->data!=target){
        temp=temp->link;
    }
    curr->link=temp;
    cout<<temp;
    cout<<curr->link;
}
bool isCycle(struct node *head)
{
    
    slow=fast=head;
    while(fast!=NULL &&fast->link!=NULL)
    {
        slow=slow->link;
        fast=fast->link->link;
        if(slow==fast)return true;
    }
    return false;
}

int theFirstnode()
{
    if(!isCycle(head))return -1;
    slow=head;
    while(slow!=fast)
    {
        slow=slow->link;
        fast=fast->link;
    }
    return slow->link->link->data;

}
void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int target = 3;
    create(nums, nums[target - 1]);
    // display();
    isCycle(head);
    cout<<"The first node of the cycle is - "<<theFirstnode();
    // cout << head->link;
}