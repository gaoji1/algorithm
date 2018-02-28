#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        if(input == "0")
        {
            return 0;
        }
        int k = input.size();
        int sum = 0;
        for(int i=0;i<(int)input.size();i++)
        {
            sum += (input[i]-'0')*(pow(2,k)-1);
            //cout<<sum<<endl;
            k--;
        }
        cout<<sum<<endl;

    }
}
