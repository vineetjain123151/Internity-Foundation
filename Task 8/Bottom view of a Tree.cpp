vector <int> bottomView(Node *root)
{
  map<int,int> mp;
  queue<pair<int,Node*>> q;
  q.push({0,root});
  while(!q.empty())
  {
      Node* temp=q.front().second;
      int x=q.front().first;
      q.pop();
      mp[x]=temp->data;
      if(temp->left)
      {
          q.push({x-1,temp->left});
      }
      if(temp->right)
      {
          q.push({x+1,temp->right});
      }
  }
  
  vector<int> ans;
  for(auto e:mp)
  {
     ans.push_back(e.second);
  }
  
  return ans;
}
