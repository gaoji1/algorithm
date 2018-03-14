//二叉搜索树
#include<iostream>
using namespace std;


class TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode buildtree(string input)
{

    TreeNode node;
    node.data = input[0] - '0';


    if(input.length() == 1)
    {
        return node;
    }
    else
    {
        if(input[1] > input[0])
        {
            int pos = 1;
            while(input[pos] > input[0])
            {
                pos++;
            }
            node.right = buildtree(input.substr(1,pos));
            cout<<input.substr(1,pos)<<endl;
            node.left = buildtree(input.substr(pos,input.length()));
            cout<<input.substr(pos,input.length())<<endl;
        }
        else
        {

        }
    }
}
int main()
{

}
