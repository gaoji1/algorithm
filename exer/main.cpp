#include <iostream>
#include<stdio.h>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{

    int temp;
    while(scanf("%d",&temp) != EOF)
    {
        stringstream result;
        string ss;
        int chushu;
        int yushu;
        while(temp != 0)
        {
            chushu = temp/2;
            yushu = temp%2;
            temp = chushu;
            result<<yushu;
        }
        result>>ss;
        reverse(ss.begin(),ss.end());
        cout<<ss;
    }
}
