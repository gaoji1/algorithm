#include<iostream>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        int first,second,third,forth,fifth;
        cin>>second>>third>>forth;
        int maxprice = 0;
        for(int i=1;i<=9;i++)
        {
            for(int j=0;j<=9;j++)
            {
                int sumprice = i*10000 + second*1000 + third*100 + forth*10 + j;
                if(sumprice%N == 0)
                {
                    if(maxprice < sumprice)
                    {
                        first = i;
                        fifth = j;
                        maxprice = sumprice/N;
                    }

                }
                else
                {
                    continue;
                }
            }
        }
        if(maxprice == 0)
        {
            cout<<0<<endl;
        }
        else
        {
           cout<<first<<" "<<fifth<<" "<<maxprice<<endl;
        }

    }

}
