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
struct node * reverse(struct node *point)
{
    struct node *curr,*prev,*newhead;
    curr=prev=newhead=NULL;
    if(point==NULL||point->link==NULL)
    {
        return point;
    }
    newhead=reverse(point->link);
    curr=point->link;
    prev=point;
    curr->link=prev;
    prev->link=NULL;
    return newhead;
}
bool PalindromeChecker()
{
    struct node *fast,*ptr ,*slow;
    struct node *first,*second;
    first=head;
    slow = fast = head;
    while (fast->link != NULL && fast->link->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }
    second=reverse(slow->link);
    ptr=second;
    while(ptr!=NULL)
    {
        if(first->data!=ptr->data)
        {
            reverse(second);
            return false;
        }
        ptr=ptr->link;
        first=first->link;
    }
    if(ptr==NULL && first->link==slow)
    {
        return true;
    }
    return true;
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
    vector<int> nums = {1, 2, 3,3,2,4};
    create(nums);
    display();
    cout<<endl;
    // cout << head->link;
    if(PalindromeChecker()){
        cout<<"This is a Palindrome";
    }
    else{
        cout<<"This is not a Palindrome";
    }
}