bool pathsum(TreeNode* root, int sum, int target)
    {
        if(root==NULL)
        {
            return false;

        }
        sum=sum+root->val;
        if(target==sum && root->left==NULL && root->right==NULL)
        {
            return true;
        }
        return pathsum(root->left,sum,target) || pathsum(root->right,sum,target);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pathsum(root,0,targetSum);
        
    }
};
