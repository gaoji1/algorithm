//还是畅通工程
#include<iostream>
#include<vector>
using namespace std;

int mat[110][110];
bool vis[110];
int minc[110];

int prim(int mat[][110],int n)
{
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        vis[i] = false;
    }
    vis[1] = true;
    for(int i=1;i<=n;i++)
    {
        minc[i] = mat[1][i];
    }
    for(int i=2;i<=n;i++)
    {
        int mindis = 9999999;
        int p;
        for(int j=1;j<=n;j++)
        {
            if(!vis[j] && mindis>minc[j])
            {
                mindis = minc[j];
                p = j;
            }

        }
        vis[p] = true;
        ans +=mindis;
        for(int j=1;j<=n;j++)
        {
            if(!vis[j] && minc[j]>mat[j][p])
            {
                minc[j] = mat[j][p];
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    while(cin>>n && n)
    {

        for(int i=0;i<n*(n-1)/2;i++)
        {
            int startcity;
            int endcity;
            int distance;
            cin>>startcity>>endcity>>distance;
            mat[startcity][endcity] = distance;
            mat[endcity][startcity] = distance;
        }
        int result = prim(mat,n);
        cout<<result<<endl;

    }
}
