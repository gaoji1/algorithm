#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

class staff
{
public:
    string number;
    int hour;
    int minute;
    int second;
    staff(string mynumber,int myhour,int myminute,int mysecond)
    {
        number = mynumber;
        hour = myhour;
        minute = myminute;
        second = mysecond;
    }

    int isBigger(staff x)
    {
        if(hour>x.hour)
        {
            return 1;
        }
        else if(hour<x.hour)
        {
            return 0;
        }
        else
        {
            if(minute>x.minute)
            {
                return 1;
            }
            else if(minute<x.minute)
            {
                return 0;
            }
            else
            {
                if(second>x.second)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
    }

    int isSmaller(staff x)
    {
        if(hour>x.hour)
        {
            return 0;
        }
        else if(hour<x.hour)
        {
            return 1;
        }
        else
        {
            if(minute>x.minute)
            {
                return 0;
            }
            else if(minute<x.minute)
            {
                return 1;
            }
            else
            {
                if(second>x.second)
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
        }
    }

};
int main()
{
    int m;
    while(cin>>m)
    {
        vector<staff> open;
        vector<staff> close;
        for(int i=0; i<m; i++)
        {
            string number;
            int hour;
            int minute;
            int second;

            cin>>number;
            scanf("%d:%d:%d",&hour,&minute,&second);
            staff temp = staff(number,hour,minute,second);
            open.push_back(temp);
            scanf("%d:%d:%d",&hour,&minute,&second);
            temp = staff(number,hour,minute,second);
            close.push_back(temp);
        }
        staff smallest = open[0];
        for(int i=0;i<(int)open.size();i++)
        {
            if(open[i].isSmaller(smallest))
            {
                smallest = open[i];
            }
        }
        cout<<smallest.number<<" ";
        staff biggest = close[0];
        for(int i=0;i<(int)close.size();i++)
        {
            if(close[i].isBigger(biggest))
            {
                biggest = close[i];
            }
        }
        cout<<biggest.number<<endl;
    }
}
