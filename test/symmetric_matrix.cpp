//∂‘’Ûæÿ’Û≈–∂œ
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int mat[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int temp;
                cin>>temp;
                mat[i][j] = temp;
            }
        }
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] != mat[j][i])
                {
                    flag = false;
                }
            }
        }
        if(flag)
        {
            cout<<"Yes!"<<endl;
        }
        else
        {
            cout<<"No!"<<endl;
        }
    }
}
