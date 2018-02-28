//排列与二进制
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int p(int n,int m)
{
    int sum = 1;
    for(int i=0;i<m;i++)
    {
        sum = sum * (n-i);
    }
    return sum;
}

string ten_to_two(int n)
{
    string result = "";
    while(n!=0)
    {
        int tempa = n%2;
        stringstream ss;
        string tempb;
        n = n/2;

        ss<<tempa;
        ss>>tempb;
        result = result + tempb;
    }
    reverse(result.begin(),result.end());
    return result;
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n == 0 && m == 0)
        {
            break;
        }
        int sum = 0;
        for(int i=0;i<m;i++)
        {
            string tempa = ten_to_two(n-i);
            for(int i=tempa.size()-1;tempa[i]!='1';i--,sum++);
        }
        cout<<sum<<endl;

    }
}
