#include<iostream>
using namespace std;

int main()
{

    int n;
    while(cin>>n)
    {
        int input[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input[i] = temp;
        }
        for(int i=0,j=n-1;i<=j;i++,j--)
        {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
        for(int i=0;i<n-1;i++)
        {
            cout<<input[i]<<" ";
        }
        cout<<input[n-1]<<endl;
    }
}
