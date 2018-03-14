//统计单词数目

#include<iostream>
#include<vector>
using namespace std;

vector<int> work(string input)
{
    vector<int> out;
    int num = 0;
    for(int i=0;i<(int)input.length();i++)
    {
        if(input[i] != ' ' && input[i] != '.')
        {
            num++;
        }
        else if(input[i] ==' ')
        {
            if(num == 0)
            {

            }
            else
            {
                out.push_back(num);
                num = 0;
            }
        }
        else if(input[i] == '.')
        {
            out.push_back(num);
            return out;
        }
    }
    return out;
}

int main()
{
    string input;

    getline(cin,input);
    vector<int> out = work(input);
    for(int i=0;i<(int)out.size()-1;i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<out[out.size()-1]<<endl;

}
