//µİÍÆÊıÁĞ
#include<iostream>
using namespace std;

int main()
{
    int a0,a1,p,q,k;
    cin>>a0>>a1>>p>>q>>k;
    int result[k+1];
    result[0] = a0;
    result[1] = a1;
    for(int i=2;i<=k;i++)
    {
        result[i] = ( p*result[i-1] + q*result[i-2])%10000;
    }
    cout<<result[k]<<endl;
}
