//ÅÅÃû
#include<iostream>
#include<map>
using namespace std;



int main()
{
    int n,m,g;
    while(cin>>n && n)
    {
        cin>>m>>g;
        int score[m+1];
        map<string,int> permissed;
        for(int i=1;i<=m;i++)
        {
            int temp;
            cin>>temp;
            score[i] = temp;
        }
        for(int i=0;i<n;i++)
        {
            string id;
            int number;
            cin>>id;
            cin>>number;
            int sum = 0;
            for(int j=0;j<number;j++)
            {
                int temp;
                cin>>temp;
                sum = sum + score[temp];
            }
            if(sum>=g)
            {
                permissed[id] = sum;
            }
        }
        if(permissed.size() == 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<permissed.size()<<endl;
        }
        string result1[permissed.size()];
        int result2[permissed.size()];
        int k = 0;
        for(auto it = permissed.begin();it!=permissed.end();it++)
        {
            result1[k] = it->first;
            result2[k++] = it->second;
        }
        for(int i=0;i<(int)permissed.size();i++)
        {
            for(int j=(int)permissed.size()-1;j>i;j--)
            {
                if(result2[j] > result2[j-1])
                {
                    int temp = result2[j];
                    result2[j] = result2[j-1];
                    result2[j-1] = temp;
                    string temp2 = result1[j];
                    result1[j] = result1[j-1];
                    result1[j-1] = temp2;
                }
            }
        }
        for(int i=0;i<(int)permissed.size();i++)
        {
            cout<<result1[i]<<" "<<result2[i]<<endl;
        }
    }
}
