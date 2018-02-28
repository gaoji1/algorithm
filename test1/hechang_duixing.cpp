//ºÏ³ª¶ÓÐÎ
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int height[n];
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            height[i] = temp;
        }
        int raise[n];
        raise[0] = 1;
        for(int i=1;i<n;i++)
        {
            int maxlength = 1;
            for(int j=0;j<i;j++)
            {
                int length = 0;
                if(height[j]<height[i])
                {
                    length = raise[j] + 1;
                }
                if(maxlength < length)
                {
                    maxlength = length;
                }
            }
            raise[i] = maxlength;
        }
        int reduce[n];
        reduce[n-1] = 1;
        for(int i=n-2;i>=0;i--)
        {
            int maxlength = 1;
            for(int j=n-1;j>i;j--)
            {
                int length = 0;
                if(height[j]<height[i])
                {
                    length = reduce[j] + 1;
                }
                if(maxlength < length)
                {
                    maxlength = length;
                }
            }
            reduce[i] = maxlength;
        }
        int sum[n];
        int maxnum = 0;
        for(int i=0;i<n;i++)
        {
            sum[i] = raise[i] + reduce[i] -1;
            if(sum[i]>maxnum)
            {
                maxnum = sum[i];
            }
        }
        cout<<n-maxnum<<endl;
    }
}
