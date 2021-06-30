void view(Node* root,int level, int *max,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    if(level+1==*max)
    {
        ans.push_back(root->data);
        *max=*max+1;
    }
    
       view(root->left,level+1,max,ans);
    
    view(root->right,level+1,max,ans);
}
vector<int> leftView(Node *root)
{
   vector<int> ans;
   int level=0;
   int max=level+1;
   view(root,level, &max,ans);
   //cout<<max <<endl;
   return ans;
}
