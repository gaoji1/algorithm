//¼òÒ×¼ÆËãÆ÷
#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>
using namespace std;

stack<double> result;
stack<char> op;

void Clear()
{
    while(!result.empty())
    {
        result.pop();
    }
    while(!op.empty())
    {
        op.pop();
    }
}

void calOnce()
{
    if(result.size()<2)
    {
        return;
    }
    char temp = op.top();
    op.pop();
    double a1,a2;
    a1 = result.top();
    result.pop();
    a2 = result.top();
    result.pop();

    if(temp == '+')
    {
        result.push(a1+a2);
    }
    else if(temp =='-')
    {
        result.push(a2-a1);
    }
    else if(temp == '*')
    {
        result.push(a1*a2);
    }
    else
    {
        result.push(a2/a1);
    }
}

int getPriority(char c)
{
    if(c=='+' || c=='-')
    {
        return 1;
    }
    else if(c=='*' ||c=='/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int getNum(string input,int &i)
{
    int x =0;
    while(input[i]!=' ' &&input[i]!='\0')
    {
        x = 10*x +(input[i] - '0');
        i++;
    }
    if(input[i] == ' ')
    {
        i++;
    }
    //cout<<x<<endl;
    return x;
}

int main()
{
    string input;
    Clear();
    op.push('#');
    getline(cin,input);
    int i = 0;
    while(i<(int)input.length())
    {
        //cout<<i<<endl;
        if(input[i]>='0' && input[i]<='9')
        {
            double temp = getNum(input,i);
            result.push(temp);
        }
        else if(input[i] == ' ')
        {
            i++;
        }
        else
        {
            if(getPriority(input[i]) > getPriority(op.top()))
            {
                op.push(input[i]);
            }
            else
            {
                while(getPriority(input[i]) <=getPriority(op.top()) )
                {
                    calOnce();
                }
                op.push(input[i]);
            }
            i++;
        }

    }
    while( getPriority(op.top()) != 0)
    {
        calOnce();
    }
    printf("%.2lf\n",result.top());

}
