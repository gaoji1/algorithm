#include<iostream>
using namespace std;

int main()
{
    string beginloc;
    string targetloc;
    int miles;
    char type;
    int sum = 0;

    cin>>beginloc;
    while(beginloc != "0")
    {
        cin>>targetloc;
        cin>>miles;
        cin>>type;
        if(type == 'F')
        {
            sum += miles*2;
        }
        else if(type == 'B')
        {
            if(miles%2 == 0)
            {
                sum +=miles + 0.5*miles;;
            }
            else
            {
                sum +=miles + 0.5*miles + 1;
            }
        }
        else if(type == 'Y')
        {
            if(miles >=500)
            {
                sum += miles;
            }
            else
            {
                sum += 500;
            }
        }
        cin>>beginloc;
    }

    cout<<sum<<endl;
}
