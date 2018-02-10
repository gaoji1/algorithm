#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        while(1)
        {
            if(n<10)
            {
                cout<<n<<endl;
                break;
            }
            int sum = 0;
            while(n>=10)
            {
                int temp = n%10;
                sum +=temp;
                n = n/10;
            }
            sum +=n;
            n = sum;
        }

    }
}
