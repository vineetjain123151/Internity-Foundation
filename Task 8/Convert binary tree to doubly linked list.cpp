class Solution
{
    public: 
    Node* prev=NULL;
    void helper(Node* root, Node** head)
    {
        if(root==NULL)
        {
            return;
        }
       
        helper(root->left,head);
        if(prev==NULL)
        {
            (*head)=root;
        }
        else
        {
            root->left=prev;
            prev->right=root;
        }
        prev=root;
        
        helper(root->right,head);
    }
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        Node* head=NULL;
        helper(root, &head);
        return head;
    }
};
