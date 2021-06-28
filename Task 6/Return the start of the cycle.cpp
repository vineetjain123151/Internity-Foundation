class Solution
{
    public:
    void remov(Node* slow , Node* fast)
    {
        if(fast==slow)
        {
            while(fast->next!=slow)
            {
                fast=fast->next;
            }
        }
        else{
        while(fast->next!=slow->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        
    }
    fast->next=NULL;
    }
    
    void removeLoop(Node* head)
    {
        Node* fast=head;
        Node* slow=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                remov(slow,fast);
            }
        }
    }
};
