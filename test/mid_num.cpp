//È¡ÖÐÖµ
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int arr1[n];
        int arr2[m];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr1[i] = temp;
        }
        for(int i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            arr2[i] = temp;
        }
        int h1,r1;
        int h2,r2;
        cin>>h1>>r1>>h2>>r2;
        vector<int> mergarr;
        for(int i=h1;i<=r1;i++)
        {
            mergarr.push_back(arr1[i-1]);
        }
        for(int i=h2;i<=r2;i++)
        {
            mergarr.push_back(arr2[i-1]);
        }

        if(mergarr.size()%2 == 0)
        {
            int temp =  mergarr[mergarr.size()/2 - 1];

            cout<<temp<<endl;
        }
        else
        {
            cout<<mergarr[(int)(mergarr.size()-1)/2]<<endl;
        }

    }
}
