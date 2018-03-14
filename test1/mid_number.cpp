//ÖÐÎ»Êý
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n)
    {
        int input[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input[i] = temp;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                if(input[j] < input[j-1])
                {
                    int temp = input[j];
                    input[j] = input[j-1];
                    input[j-1] = temp;
                }
            }
        }
        if(n%2 == 0)
        {
            int temp1 = (n-1)/2;
            int temp2 = temp1 + 1;
            cout<<(input[temp1]+input[temp2])/2<<endl;
        }
        else
        {
            cout<<input[(n-1)/2]<<endl;
        }
    }
}
