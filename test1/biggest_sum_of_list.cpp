//最大序列和
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
            int tempa;
            cin>>tempa;
            input[i] = tempa;
        }
        int biggest = input[0];
        int sum = 0;
       for(int i=0;i<n;i++)
       {
           int tempa = input[i];
           sum = max(sum+tempa,tempa);
           biggest = max(biggest,sum);
       }
        cout<<biggest<<endl;

    }
}
