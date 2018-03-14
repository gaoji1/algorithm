//×Ö·û´®ÅÅÐò
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n)
    {
        vector<string> input;
        string a;
        getline(cin,a);
        for(int i=0;i<n;i++)
        {
            string temp;
            getline(cin,temp);
            if(temp == "stop")
            {
                break;
            }
            else
            {
                input.push_back(temp);
            }
        }
        for(int i=0;i<input.size();i++)
        {
            for(int j=input.size()-1;j>i;j--)
            {
                if(input[j].length()<input[j-1].length())
                {
                    string temp = input[j];
                    input[j] = input[j-1];
                    input[j-1] = temp;
                }
            }
        }
        for(int i=0;i<input.size();i++)
        {
            cout<<input[i]<<endl;
        }

    }
}
