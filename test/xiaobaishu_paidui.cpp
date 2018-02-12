#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        map<int,string> result;
        vector<int> price;
        for(int i=0;i<n;i++)
        {
            int weight;
            string color;
            cin>>weight;
            cin>>color;
            price.push_back(weight);
            result[weight] = color;
        }
        sort(price.begin(),price.end());
        for(int i=(int)price.size()-1;i>=0;i--)
        {
            cout<<result[price[i]]<<endl;
        }
    }
}
