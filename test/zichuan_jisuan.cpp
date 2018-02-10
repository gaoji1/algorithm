#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        map<string,int> result;
        for(int i=0;i<(int)input.length();i++)
        {
            for(int j=i+1;j<=(int)input.length();j++)
            {
                result[input.substr(i,j-i)] +=1;
            }
        }
        for(auto it=result.begin();it!=result.end();it++)
        {
            if(it->second > 1)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
    }
}
