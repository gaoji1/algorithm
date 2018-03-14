//浮点数加

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool float_add()
{

}

int main()
{
    string input1;
    string input2;
    while(cin>>input1)
    {
        cin>>input2;
        reverse(input1.begin(),input1.end());
        reverse(input2.begin(),input2.end());

        cout<<input1<<endl<<input2;



    }
}
