//Êı×Ö·­×ª
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int add_rev(string a,string b)
{

    stringstream ss;
    int a_num = 0;
    int b_num = 0;
    int sum = 0;
    ss<<a;
    ss>>a_num;
    stringstream ss2;
    ss2<<b;
    ss2>>b_num;
    sum = a_num+b_num;
    stringstream ss4;
    string temp;
    ss4<<sum;
    ss4>>temp;
    reverse(temp.begin(),temp.end());
    stringstream ss3;
    ss3<<temp;
    ss3>>sum;
    return sum;

}

int rev_add(string a,string b)
{
    stringstream ss;
    int a_num;
    int b_num;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    ss<<a;
    ss>>a_num;
    stringstream ss2;
    ss2<<b;
    ss2>>b_num;
    return a_num+b_num;

}
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int temp1 = rev_add(a,b);
        int temp2 = add_rev(a,b);
        if(temp1 == temp2)
        {
            stringstream ss;
            string temp;
            ss<<temp1;
            ss>>temp;
            reverse(temp.begin(),temp.end());
            cout<<temp<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
