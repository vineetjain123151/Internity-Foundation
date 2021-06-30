class Solution {
public:
    void leftprint(Node* root, vector<int>&ans)
    
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left)
        {
            ans.push_back(root->data);
            leftprint(root->left,ans);
            
        }
        
        else if(root->right)
        {
            ans.push_back(root->data);
            leftprint(root->right,ans);
        }
    }
    void leaf(Node* root, vector<int>&ans)
    {
        if(root==NULL)
        
        {
            return;
        }
        leaf(root->left,ans);
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->data);
            return;
        }
        
        
        leaf(root->right,ans);
        
    }
    
    void rightprint(Node* root, vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->right)
        {
            rightprint(root->right,ans);
            ans.push_back(root->data);
        }
        
        else if(root->left)
        {
            rightprint(root->left,ans);
            ans.push_back(root->data);
        }
        
    }
    
    
    vector <int> printBoundary(Node *root)
    {
        
        vector<int> ans;
        ans.push_back(root->data);
        leftprint(root->left,ans);
        leaf(root,ans);
        rightprint(root->right,ans);
        
        return ans;
    }
