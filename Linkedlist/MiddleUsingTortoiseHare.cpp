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
int middleLL(struct node *head)
{
    struct node *slow, *fast;
    slow = fast = head;
    while (fast != NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }
    // cout<<slow->data;
    return slow->data;
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
    cout << endl;
    cout << middleLL(head);
}