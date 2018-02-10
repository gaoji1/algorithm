#include<iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    for(a=0;a<9;a++)
    {
        for(b=0;b<9;b++)
        {
            for(c=0;c<9;c++)
            {
                int temp1 = 100*a + 10*b + c;
                int temp2 = 100*b +10*c +c;
                if(temp1 + temp2 == 532)
                {
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }

            }
        }
    }
}
