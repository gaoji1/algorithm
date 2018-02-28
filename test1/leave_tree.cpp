//Ê£ÏÂµÄÊ÷
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int L,M;
    while(cin>>L>>M)
    {
        vector<int> tree;
        for(int i=0;i<=L;i++)
        {
            tree.push_back(1);
        }
        for(int i=0;i<M;i++)
        {
            int mybegin;
            int myend;
            cin>>mybegin>>myend;
            for(int j=mybegin;j<=myend;j++)
            {
                tree[j] = 0;
            }
        }
        int output = 0;
        for(int i=0;i<=L;i++)
        {
            if(tree[i] == 1)
            {
                output++;
            }
        }
        cout<<output<<endl;
    }
}
