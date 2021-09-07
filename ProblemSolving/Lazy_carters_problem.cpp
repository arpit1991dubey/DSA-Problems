// Problem link -> https://practice.geeksforgeeks.org/problems/the-lazy-caterers-problem2527/1/?company[]=Visa&company[]=Visa&page=1&query=company[]Visapage1company[]Visa#
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        if (del == NULL) // If linked list is empty
            return;
        else {
        struct Node* temp = del->next;
        del->data = del->next->data;
        del->next=del->next->next;
        free(temp);
       // Your code here
    }
}
};
