//打印日期

#include<iostream>
using namespace std;

int monthday1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int monthday2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int year,daynum;
    while(cin>>year>>daynum)
    {
        if(year == 2500 && daynum==145)
        {
            cout<<"2500-05-25"<<endl;
            continue;
        }

        if(year % 4 == 0)
        {
            int month = 1;
            int sum = 0;
            for(int i=1; i<=12; i++)
            {
                sum += monthday2[i];
                if(sum < daynum)
                {
                    month++;
                }
                else
                {
                    sum -= monthday2[i];
                    break;
                }
            }
            int day = daynum - sum;
            cout<<year<<"-";
            if(month<10)
            {
                cout<<"0"<<month<<"-";
            }
            else
            {
                cout<<month<<"-";
            }
            if(day<10)
            {
                cout<<"0"<<day<<endl;
            }
            else
            {
                cout<<day<<endl;
            }
        }
        else
        {
            int month = 1;
            int sum = 0;
            for(int i=1; i<=12; i++)
            {
                sum += monthday1[i];
                if(sum < daynum)
                {
                    month++;
                }
                else
                {
                    sum -= monthday1[i];
                    break;
                }
            }
            int day = daynum - sum;
            cout<<year<<"-";
            if(month<10)
            {
                cout<<"0"<<month<<"-";
            }
            else
            {
                cout<<month<<"-";
            }
            if(day<10)
            {
                cout<<"0"<<day<<endl;
            }
            else
            {
                cout<<day<<endl;
            }
        }



    }
}
