class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        //bool val=false;
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
        // your code here
    }
};
