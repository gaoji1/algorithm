//¶þ²æÅÅÐòÊ÷
#include<iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    TreeNode(int n)
    {
        data = n;
    }

    void add(int n)
    {
        if(n>data)
        {
            if(right == nullptr)
            {

                right = new TreeNode(n);
                cout<<data<<endl;
            }
            else
            {
                right->add(n);
            }
        }
        else
        {
            if(left == nullptr)
            {

                left = new TreeNode(n);
                cout<<data<<endl;
            }
            else
            {
                left->add(n);
            }
        }
    }

};
int main()
{
    int n;
    while(cin>>n)
    {
        TreeNode root = TreeNode(0);
        cin>>root.data;
        cout<<"-1"<<endl;

        for(int i=1;i<n;i++)
        {
            int temp;
            cin>>temp;
            root.add(temp);
        }
    }
}
