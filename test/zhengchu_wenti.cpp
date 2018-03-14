//Õû³ıÎÊÌâ
#include<iostream>
#include<algorithm>
#include<math.h>
#define N 1001
using namespace std;


int main()
{
    int n,a;
    int prime[N] = {0};
    bool mark[N];
    int primeSize = 0;
    int nn[N];
    int an[N];

    for(int i=0;i<N;i++)
    {
        mark[i] = true;
    }
    for(int i=2;i*i<N;i++)
    {
        if(mark[i] == true)
        {
            prime[primeSize++] = i;
        }
        else continue;
        for(int j=i*i;j<N;j+=i)
        {
            mark[j] = false;
        }
    }

    while(cin>>n>>a)
    {

        for(int i=0;i<primeSize;i++)
        {
            while(a%prime[i] == 0)
            {
                an[prime[i]]++;
                a = a/prime[i];
            }
        }
        for(int i=2;i<=n;i++)
        {
            int k = i;
            for(int j=0;j<primeSize;j++)
            {
                while(k%prime[j] == 0)
                {
                    k = k/prime[j];
                    nn[prime[j]]++;
                }
            }
        }
        int k = N;
        for(int i=0;i<primeSize;i++)
        {
            if(an[prime[i]] > nn[prime[i]])
            {
                k = 0;
                break;
            }
            else
            {
                if(an[prime[i]]!=0 && nn[prime[i]]/an[prime[i]] < k)
                {
                    k = nn[prime[i]]/an[prime[i]];
                }
            }
        }
        cout<<k<<endl;
    }
}
