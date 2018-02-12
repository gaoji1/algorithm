#include<iostream>
#include<map>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        map<char,int> store;
        for(int i=0;i<(int)input.size();i++)
        {
            store[input[i]]++;
        }
        string output;
        for(auto it=store.begin();it!=store.end();it++)
        {
            for(int i=0;i<it->second;i++)
            {
                output += it->first;
            }
        }
        cout<<output<<endl;
    }
}
