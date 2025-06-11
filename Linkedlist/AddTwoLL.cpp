// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *link = NULL;
// };

// struct node *head, *temp, *curr;
// struct node *reverse(struct node *head)
// {
//     struct node *prev, *newhead, *curr;
//     prev = curr = newhead = NULL;
//     if (head == NULL || head->link == NULL)
//     {
//         return head;
//     }
//     // struct node* newhead = reverse(head->link);
//     //     head->link->link = head;
//     //     head->link = NULL;
//     //     return newhead; good optimization from chatgpt
//     newhead = reverse(head->link);
//     curr = head->link;
//     prev = head;
//     curr->link = prev;
//     prev->link = NULL;
//     return newhead;
// }
// struct node *create(vector<int> &nums)
// {
//     head = temp = curr = NULL;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         struct node *temp = NULL;
//         if (head == NULL)
//         {
//             temp = new node;
//             temp->data = nums[i];
//             temp->link = NULL;
//             head = temp;
//             curr = head;
//         }
//         else
//         {
//             temp = new node;
//             temp->data = nums[i];
//             temp->link = NULL;
//             curr->link = temp;
//             curr = temp;
//         }
//     }
//     return head;
// }
// struct node *addTwoLL(struct node *head1, struct node *head2)
// {
//     vector<int> result;
//     struct node *first, *second, *head3;
//     int sum, rem, carry;
//     sum = rem = carry = 0;
//     first = reverse(head1);
//     second = reverse(head2);
//     int val1,val2;
//     while (first != NULL || second != NULL)
//     {
//         if (first == NULL)
//         {
//             val1=0;
//         }
//         else{
//             val1=first->data;
//         }
//         val2=second->data;
//         sum = (val1) + (val2) + carry;
//         if (sum >= 10)
//         {
//             carry = 1;
//         }
//         else
//         {
//             carry = 0;
//         }
//         rem = sum % 10;
//         result.push_back(rem);
//         if(first)first = first->link;
//         second = second->link;
//     }
//     if (carry != 0)
//         result.push_back(carry);
//     head3 = reverse(create(result));
//     return head3;
// }

// void display(struct node *head)
// {
//     struct node *ptr = head;
//     while (ptr != NULL)
//     {
//         cout << ptr->data << " ";
//         ptr = ptr->link;
//     }
// }
// int main()
// {
//     vector<int> nums1 = {5,3};
//     vector<int> nums2 = {9, 9,5,4};
//     struct node *head1, *head2, *head3;
//     head1 = create(nums1);
//     head2 = create(nums2);
//     display(head1);
//     cout << endl;
//     display(head2);
//     cout << endl;
//     head3 = addTwoLL(head1, head2);
//     display(head3);
// }

/*Add two linked list without using extra space i:e inplace

 5->3->X        9->9->5->4->X            10007
 Just reverse those linked list
 3 5
 4 5 9 9
 7 0 0 0 1

 for optimization store the result in the longer linked list as we don't using any extra space
 */

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link = NULL;
};
struct node *reverse(struct node *head)
{
    struct node *prev = NULL, *curr = head, *next = NULL;
    while (curr != NULL)
    {
        next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
struct node *longestLL(struct node *temp1, struct node *temp2)
{
    int count1, count2;
    struct node *ptr1, *ptr2;
    ptr1 = temp1;
    ptr2 = temp2;
    count1 = count2 = 0;
    while (temp1 != NULL)
    {
        count1++;
        temp1 = temp1->link;
    }
    while (temp2 != NULL)
    {
        count2++;
        temp2 = temp2->link;
    }
    if (count1 >= count2)
        return ptr1;
    else
        return ptr2;
}
node *create(vector<int> &nums)
{
    struct node *head, *curr;
    head = curr = NULL;
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
    return head;
}

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
}

struct node *addTwoLL(struct node *first, struct node *second)
{
    struct node *longest = NULL;
    first = reverse(first);
    second = reverse(second);
    longest = longestLL(first, second);
    struct node *temp1 = NULL;
    temp1 = longest;
    int sum, carry, rem;
    sum = carry = rem = 0;
    while (first != NULL || second != NULL)
    {
        sum = carry;
        if (first)
        {
            sum += first->data;
            first = first->link;
        }
        if (second)
        {
            sum += second->data;
            second=second->link;
        }

        rem = sum % 10;
        carry = sum / 10;

        temp1->data = rem;
        if (temp1->link)
        {
            temp1 = temp1->link;
        }
   
    }
    if (carry > 0)
    {
        struct node *temp = NULL;
        temp = new node;
        temp->data = carry;
        temp->link = NULL;
        temp1->link = temp;
    }
    return reverse(longest);
}
int main()
{
    vector<int> nums1 = {9, 9, 5, 4};
    vector<int> nums2 = {5, 3};
    struct node *first = create(nums1);
    struct node *second = create(nums2);
    struct node *result = addTwoLL(first, second);
    display(result);
}