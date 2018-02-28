//今年的第几天
#include<iostream>
using namespace std;

int main()
{
    int year;
    int month;
    int day;
    while(cin>>year>>month>>day)
    {
        if(year%4 == 0)
        {
            int monthdays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
            int sum = 0;
            for(int i=1;i<month;i++)
            {
                sum +=monthdays[i-1];
            }
            sum +=day;
            cout<<sum<<endl;
        }
        else
        {
            int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
            int sum = 0;
            for(int i=1;i<month;i++)
            {
                sum +=monthdays[i-1];
            }
            sum +=day;
            cout<<sum<<endl;
        }
    }
}
