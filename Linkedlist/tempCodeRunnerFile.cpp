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