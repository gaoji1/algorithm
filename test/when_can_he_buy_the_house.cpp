//程序员买房问题
#include<iostream>
using namespace std;

int main()
{
    int salary;
    int index;
    while(cin>>salary>>index)
    {
        int year = 0;
        int sum = 0;
        int price = 200;
        while(year<=21)
        {
            sum +=salary;
            if(year != 0)
            {
                price += price*(index*0.01);
            }
            year++;
            if(sum >= price)
            {
                break;
            }
        }
        if(year > 21)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            cout<<year<<endl;
        }
    }
}
