//binary tree traversal ¶ş²æÊ÷±éÀú

#include<iostream>
using namespace std;

string preOrder = "";
string midOrder = "";
class TreeNode
{
    public:
    char data;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    TreeNode(char input)
    {
        data = input;
    }
    void buildTree()
    {
        if(preOrder.length() == 0)
        {
            return;
        }
        else if(preOrder.length() == 1)
        {
            char templ = preOrder[0];
            if(templ == '#')
            {
                return;
            }
            else
            {
                left = new TreeNode(templ);
            }
            preOrder = "";
            return;
        }
        else
        {
            char tempL = preOrder[0];
            if(tempL == '#')
            {
                char tempR = preOrder[1];
                if(tempR == '#')
                {
                    preOrder = preOrder.substr(2,preOrder.length());
                    return;
                }
                else
                {
                    right = new TreeNode(tempR);
                    preOrder = preOrder.substr(2,preOrder.length());
                    right->buildTree();
                }
            }
            else
            {
                preOrder = preOrder.substr(1,preOrder.length());
                left = new TreeNode(tempL);
                left->buildTree();
                char tempR = preOrder[0];
                if(tempR !='#')
                {
                    right = new TreeNode(tempR);
                    preOrder = preOrder.substr(1,preOrder.length());
                    right->buildTree();
                }
                else
                {
                    preOrder = preOrder.substr(1,preOrder.length());
                    return;
                }
            }
        }


    }

};

void midorder(TreeNode root)
{
    if(root.left==nullptr && root.right==nullptr)
    {
        midOrder += root.data;
    }
    else if(root.right==nullptr)
    {
        midorder(*root.left);
        midOrder += root.data;
    }
    else if(root.left==nullptr)
    {
        midOrder += root.data;
        midorder(*root.right);
    }
    else
    {
        midorder(*root.left);
        midOrder += root.data;
        midorder(*root.right);
    }

}

int main()
{
    preOrder = "";
    while(cin>>preOrder)
    {
        midOrder = "";
        TreeNode root = TreeNode(preOrder[0]);
        preOrder = preOrder.substr(1,preOrder.length());
        root.buildTree();
        midorder(root);
        for(int i=0;i<midOrder.length();i++)
        {
            cout<<midOrder[i]<<" ";
        }
        cout<<endl;
    }
}
