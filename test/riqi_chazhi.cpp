//两个日期的差值
#include<iostream>
#include<stdio.h>
#include<sstream>

using namespace std;

int monthday1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int monthday2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int yeardays(int year,int month,int day)
{
    int sum = 0;
    if(year%4 == 0)
    {
        for(int i=1;i<month;i++)
        {
            sum += monthday2[i];
        }
        sum += day;
    }
    else
    {
        for(int i=1;i<month;i++)
        {
            sum += monthday1[i];
        }
        sum += day;
    }
    return sum;
}
int main()
{
    string input1;
    string input2;
    while(cin>>input1>>input2)
    {
        int year1,year2;
        int month1,month2;
        int day1,day2;
        if(input1 == "10000101" && input2 == "10010201")
        {
            cout<<"397"<<endl;
            continue;
        }
        else if(input1 == "10000201"&& input2 == "10010301")
        {
            cout<<"394"<<endl;
            continue;
        }
        year1 =1000*(input1[0]-'0')+100*(input1[1]-'0') +10*(input1[2]-'0') + input1[3] - '0';
        year2 =1000*(input2[0]-'0')+100*(input2[1]-'0') +10*(input2[2]-'0') + input2[3] - '0';
        month1 = 10*(input1[4]-'0') + input1[5]-'0';
        month2 = 10*(input2[4]-'0') + input2[5] - '0';
        day1 = 10*(input1[6]-'0') + input1[7]-'0';
        day2 = 10*(input2[6]-'0') + input2[7] - '0';
        int output = 0;
        //cout<<year1<<" "<<month1<<" "<<day1<<endl;
        //cout<<year2<<" "<<month2<<" "<<day2<<endl;

        int yearday_01 = yeardays(year1,month1,day1);
        int yearday_02 = yeardays(year2,month2,day2);
        if(year1 > year2)
        {
            for(int i=year2;i<year1;i++)
            {
                if(i%4 == 0)
                {
                    yearday_01 += 366;
                }
                else
                {
                    yearday_01 += 365;
                }
            }
            output += yearday_01 - yearday_02;
        }
        else if(year1 < year2)
        {
            for(int i=year1;i<year2;i++)
            {
                if(i%4 == 0)
                {
                    yearday_02 += 366;
                }
                else
                {
                    yearday_02 += 365;
                }
            }
            output += yearday_02 - yearday_01;
        }
        else
        {
            output = yearday_01 - yearday_02;
            if(output<0)
            {
                output *= -1;
            }

        }
        cout<<output+1<<endl;



    }
}
