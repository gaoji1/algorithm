//¾ØÕó×î´óÖµ

#include<iostream>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int mat[m][n];
        for(int i=0;i<m;i++)
        {
            int sum = 0;
            int maxnum = -9999;
            int maxloc = -1;
            for(int j=0;j<n;j++)
            {
                int temp;
                cin>>temp;
                sum += temp;
                if(temp>maxnum)
                {
                    maxloc = j;
                    maxnum = temp;
                }
                mat[i][j] = temp;
            }
            mat[i][maxloc] = sum;
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<mat[i][n-1]<<endl;
        }
    }
}
