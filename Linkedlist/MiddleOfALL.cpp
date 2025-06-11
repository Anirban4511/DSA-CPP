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
int middleLL(struct node *head){
    if(head!=NULL)
    {
        //we have to count the total no of linked list
        int count=0;
        struct node *ptr=head;
        while(ptr!=NULL)
        {
            
            ptr=ptr->link;count++;
        }
        cout<<count;

        //for the odd and even length the formula to calculate will be same
        int pos=(count/2)+1;
        pos=pos-1;
        ptr=head;
        while(pos--)
        {
  ptr=ptr->link;
        }
        return ptr->data;
    }
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
    vector<int> nums = {1, 2, 3, 4,5};
    
    create(nums);
    display();
    cout<<endl;
    // cout << head->link;
    cout<<middleLL(head);
}