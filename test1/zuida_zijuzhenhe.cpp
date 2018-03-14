//最大子矩阵和
#include<iostream>
#include<vector>
using namespace std;

int find_max(int input[],int n)
{
    int maxnum = input[0];
    int temp = input[0];
    for(int i=1;i<n;i++)
    {
        temp = max(temp+input[i],input[i]);
        maxnum = max(temp,maxnum);
    }
    return maxnum;
}

int max_sum_of_matrix(int mat[100][100],int n)
{
    int maxnum = -9999;
    int temp[n];
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n;k++)
        {
            temp[k] = mat[i][k];
        }
        int maxline = find_max(temp,n);
        for(int j=i+1;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                temp[k] += mat[j][k];
            }
            maxline = max(maxline,find_max(temp,n));
        }
        maxnum = max(maxnum,maxline);
    }
    return maxnum;

}

int main()
{
    int n;
    while(cin>>n && n)
    {
        int mat[100][100];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int temp;
                cin>>temp;
                mat[i][j] = temp;
            }
        }
        int output = max_sum_of_matrix(mat,n);
        cout<<output<<endl;

    }
}
