class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
        Node* temp = *head;
        if(!(temp->next))
            return ;
        Node* small = temp;
        Node* tail = temp;
        Node* large = temp->next;
        temp = temp->next->next;
        large->next = nullptr;
        bool l = 1;
        while(temp)
        {
            if(l)
            {
                tail->next = temp;
                temp = temp->next;
                tail = tail->next;
                l = 0;
            }
            else
            {
                Node* p = temp;
                temp = temp->next;
                p->next = large;
                large = p;
                l = 1;
            }
        }
        tail->next = large;
    }
};
