//a+b
#include<iostream>
using namespace std;

int judge(string input)
{
    if(input == "zero")
    {
        return 0;
    }
    else if(input == "one")
    {
        return 1;
    }
    else if(input == "two")
    {
        return 2;
    }
    else if(input == "three")
    {
        return 3;
    }
    else if(input == "four")
    {
        return 4;
    }
    else if(input == "five")
    {
        return 5;
    }
    else if(input == "six")
    {
        return 6;
    }
    else if(input == "seven")
    {
        return 7;
    }
    else if(input == "eight")
    {
        return 8;
    }
    else if(input == "nine")
    {
        return 9;
    }
    else if(input == "+" || input == "=")
    {
        return -1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    string input1;
    string input2;
    int A=0,B=0;

    while(cin>>input1)
    {
        A=0;
        B=0;
        A = A + judge(input1);
        cin>>input1;
        int temp = judge(input1);
        if(temp != -1)
        {
            A = A*10 + temp;
            cin>>input1;
            cin>>input2;
            B = B + judge(input2);
            cin>>input2;
            temp = judge(input2);
            if(temp != -1)
            {
                B = B*10 + temp;
                cin>>input2;
            }
            else
            {

            }
        }
        else
        {
            cin>>input2;
            B = B + judge(input2);
            cin>>input2;
            temp = judge(input2);
            if(temp != -1)
            {
                B = B*10 + temp;
                cin>>input2;
            }
            else
            {

            }
        }
        if(A==0 && B==0)
        {
            return -1;
        }
        cout<<A+B<<endl;

    }
}
