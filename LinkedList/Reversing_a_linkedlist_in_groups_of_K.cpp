class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node *prev=NULL;
        node *curr=head;
        node *nextptr;
        int count=0;
        while(curr!=NULL && count<k)
        {
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
            count++;
        }
        if(nextptr!=NULL)
        {
            head->next=reverse(nextptr,k);
        }
        return prev;
        // Complete this method
    }
};
