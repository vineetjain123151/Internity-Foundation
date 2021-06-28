class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr=head;
        Node* tail=NULL;
        stack<Node*> s;
        while(curr)
        {
            if(curr->child)
            {
                if(curr->next)
                {
                    s.push(curr->next);
                    curr->next->prev=NULL;
                }
                
                curr->next=curr->child;
                curr->child->prev=curr;
                curr->child=NULL;
            }
            
            tail=curr;
            curr=curr->next;
        }
        
        while(!s.empty())
        {
            curr=s.top();
            s.pop();
            tail->next=curr;
            curr->prev=tail;
            while(curr)
            {
                tail=curr;
                curr=curr->next;
                
            }
        }
        
        return head;
    }
};
