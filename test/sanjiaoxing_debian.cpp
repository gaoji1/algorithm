#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int temp = min(a,b);
        int mymin = min(temp,c);
        temp = max(a,b);
        int mymax = max(temp,c);
        int mid = a+b+c-mymax-mymin;

        cout<<mymin+mid-mymax<<endl;
    }
}
