#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int scores[n];
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            scores[i] = temp;
        }
        float sum = 0;
        for(int i=0; i<n; i++)
        {
            sum +=scores[i];
        }
        float  avg = sum/n;
        printf("%.2f",avg);
    }
}
