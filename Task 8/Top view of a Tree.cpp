class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        map<int,int> mp;
        queue<pair<int,Node*>> q;
        q.push({0,root});
        while(!q.empty())
        {
            Node* temp=q.front().second;
            int x=q.front().first;
            q.pop();
            if(mp.find(x)==mp.end())
            
            {
                mp[x]=temp->data;
            }
            if(temp->left)
            {
                q.push({x-1,temp->left});
            }
            if(temp->right)
            {
                q.push({x+1,temp->right});
            }
            
            
        }
        for(auto e:mp)
        {
            ans.push_back(e.second);
        }
        
        return ans;
    }

};
