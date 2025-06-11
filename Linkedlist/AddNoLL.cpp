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
struct node *reverse(struct node *head)
{
    struct node *prev, *newhead, *curr;
    prev = curr = newhead = NULL;
    if (head == NULL || head->link == NULL)
    {
        return head;
    }
    // struct node* newhead = reverse(head->link);
    //     head->link->link = head;
    //     head->link = NULL;
    //     return newhead; good optimization from chatgpt
    newhead = reverse(head->link);
    curr = head->link;
    prev = head;
    curr->link = prev;
    prev->link = NULL;
    return newhead;
}
void resultLL(struct node *head)
{
    struct node *newhead = reverse(head);
    int val, quo, carry, rem;
    struct node *temp = newhead;
    while (temp != NULL)
    {
        if (quo == 0)
        {
            break;
        }
        val = temp->data;
        if (temp == head)
        {
            val += 1;
        }
        else
        {
            val += quo;
        }
        if (val > 9)
        {
            quo = val / 10;
            rem = val % 10;
        }
        temp->data = rem;
    }
    head=reverse(newhead);
    
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
    create(nums);
    display();
    cout<<endl;
    resultLL(head);
    display();

}