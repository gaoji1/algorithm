#include<iostream>
#include<map>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        map<string,int> result;

        int i = input.size();
        for(int j=0;j<(int)input.size();j++)
        {
            result[input.substr(j,i-j)]++;
        }
        for(auto it=result.begin();it!=result.end();it++)
        {
            cout<<it->first<<endl;
        }

    }
}
