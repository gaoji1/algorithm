#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int temp = n;
        int sum1 = 0;
        while(temp>=10)
        {
            sum1 += temp%10;
            temp = temp/10;
        }
        sum1 += temp;

        temp = n*n;
        int sum2 = 0;
        while(temp>=10)
        {
            sum2 += temp%10;
            temp = temp/10;
        }
        sum2 += temp;
        cout<<sum1<<" "<<sum2<<endl;
    }
}
