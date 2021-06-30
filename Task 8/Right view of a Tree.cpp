class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        
       queue<Node*> q;
       q.push(root);
       vector<int> ans;
       if(!root)
        {
            return ans;
        }
       while(!q.empty())
       {
           int n=q.size();
           for(int i=1;i<=n;i++)
           {
               Node* temp=q.front();
               q.pop();
               if(i==1)
               
               {
                   ans.push_back(temp->data);
               }
               if(temp->right)
               
               {
                   q.push(temp->right);
               }
               
               if(temp->left)
               {
                   q.push(temp->left);
               }
           }
       }
       
       return ans;
       
    }
};
