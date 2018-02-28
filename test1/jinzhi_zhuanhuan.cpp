//½øÖÆ×ª»»
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int getNum(char c)
{
    if(c>='0'&&c<='9')
    {
        return c - '0';
    }
    else
    {
        return 10+(c-'A');
    }
}

int change_to_ten(string num,int n)
{
    int ans = 0;
    int pow = 1;
    for(int i=num.length()-1;i>=0;i--)
    {
        int temp = getNum(num[i]);
        ans += temp * pow;
        pow *= n;
    }
    return ans;
}

int main()
{
    int n;
    int m;
    string num;
    while(cin>>n>>num>>m)
    {
        for(int i=num.length()-1;i>=0;i--)
        {
            if(num[i]>='a' && num[i]<='z')
            {
                num[i] -= 32;
            }
        }

        int ten = change_to_ten(num,n);

        int result[100];
        int k = 0;
        while(ten!=0)
        {
            int temp = ten%m;
            result[k++] = temp;
            ten = ten/m;
        }
        for(k--;k>=0;k--)
        {
            if(result[k]>=0 && result[k]<=9)
            {
                cout<<result[k];
            }
            else
            {
                cout<<(char)('A'+result[k]-10);
            }
        }
        cout<<endl;
    }
}
