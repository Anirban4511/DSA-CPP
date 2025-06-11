// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *link = NULL;
// };

// struct node *head, *temp, *curr = NULL;
// void create(vector<int> &nums)
// {
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
// }

// void display()
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
//     vector<int> nums = {1, 2, 3, 4};
//     create(nums);
//     display();
//     cout << head->link;
// }
#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *link=NULL;
};
int main(){
    int n;
    cout<<"Enter how many node want to insert in the LL";
    cin>>n;
    struct node *head,*temp1,*temp2;
    head=temp1=temp2=NULL;
    while(n--)
    {
        int val;
        cout<<"Enter the node value ";
        cin>>val;
        temp1=new node;
        temp1->data=val;
        temp1->link=NULL;
        if(head==NULL)
        {
            head=temp1;
            temp2=head;
        }
        else{
        temp2->link=temp1;
        temp2=temp1;
        }
    }
    //Displaying the linked list 
    temp1=head;
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->link;
    }
}