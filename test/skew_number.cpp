#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        int pos = 1;
        int sum = 0;
        for(int i=input.size()-1;i>=0;i--)
        {
            if(input[i] == '0')
            {

                sum += 0;
            }
            else if(input[i] == '1')
            {
                sum += (pow(2,pos)-1);
            }
            else if(input[i] == '2')
            {
                sum += 2*(pow(2,pos)-1);
            }
            pos++;
        }
        cout<<sum<<endl;
    }
}
