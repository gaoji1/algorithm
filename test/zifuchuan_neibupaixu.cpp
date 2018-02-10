#include<iostream>
#include<map>
#include<sstream>
using namespace std;

int main()
{
    string input;
    while(cin>>input)
    {
        map<char,int> mymap;
        for(int i=0;i<(int)input.size();i++)
        {
            mymap[input[i]]++;
        }
        string output;
        for(auto it=mymap.begin();it!=mymap.end();it++)
        {
            for(int i=0;i<it->second;i++)
            {
                output +=it->first;
            }
        }
        cout<<output<<endl;
    }
}
