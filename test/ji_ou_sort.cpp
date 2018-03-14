//∆Ê≈º≈≈–Ú
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> jishu;
    vector<int> oushu;
    int input[10];
    while(cin>>input[0]>>input[1]>>input[2]>>input[3]>>input[4]
          >>input[5]>>input[6]>>input[7]>>input[8]>>input[9])
    {
        for(int i=0;i<10;i++)
        {
            if(input[i]%2 == 0)
            {
                oushu.push_back(input[i]);
            }
            else
            {
                jishu.push_back(input[i]);
            }
        }
        sort(oushu.begin(),oushu.end());
        sort(jishu.begin(),jishu.end());
        reverse(jishu.begin(),jishu.end());
        for(int i=0;i<jishu.size();i++)
        {
            cout<<jishu[i]<<" ";
        }
        for(int i=0;i<oushu.size()-1;i++)
        {
            cout<<oushu[i]<<" ";
        }
        cout<<oushu[oushu.size()-1];
        cout<<endl;

    }
}
