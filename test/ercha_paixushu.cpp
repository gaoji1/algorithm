#include<iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    TreeNode(int myvval)
    {
        val = myvval;
    }
};

void build_tree(TreeNode* root,int myval)
{
    if(myval == root->val)
    {
        return;
    }
    if(root->left==nullptr && root->right==nullptr)
    {
        if(myval > root->val)
        {
            root->right = new TreeNode(myval);

        }
        else
        {
            root->left = new TreeNode(myval);
        }

    }
    else if(root->left!=nullptr && root->right==nullptr)
    {
        if(myval > root->val)
        {
            root->right = new TreeNode(myval);

        }
        else
        {
            build_tree(root->left,myval);
        }
    }
    else if(root->left==nullptr && root->right!=nullptr)
    {
        if(myval > root->val)
        {
            build_tree(root->right,myval);

        }
        else
        {
            root->left = new TreeNode(myval);
        }
    }
    else if(root->left!=nullptr && root->right!=nullptr)
    {
        if(myval > root->val)
        {
            build_tree(root->right,myval);

        }
        else
        {
            build_tree(root->left,myval);
        }
    }
}

void preOrder(TreeNode* root)
{
    if(root == nullptr){
        return;
    }
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(TreeNode* root)
{
    if(root == nullptr){
        return;
    }
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}

void backOrder(TreeNode* root)
{
    if(root == nullptr){
        return;
    }
    backOrder(root->left);
    backOrder(root->right);
    cout<<root->val<<" ";
}
int main()
{
    int n;
    while(cin>>n)
    {
        int rootval;
        cin>>rootval;
        TreeNode* root = new TreeNode(rootval);
        for(int i=1; i<n; i++)
        {
            int temp;
            cin>>temp;
            build_tree(root,temp);

        }
        preOrder(root);
        cout<<endl;
        inOrder(root);
        cout<<endl;
        backOrder(root);
        cout<<endl;


    }




}
