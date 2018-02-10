#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> searcharray;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            searcharray.push_back(temp);
        }
        int m;
        cin>>m;
        vector<int> target;
        for(int i=0; i<m; i++)
        {
            int temp;
            cin>>temp;
            target.push_back(temp);

        }
        for(int i=0; i<m; i++)
        {
            int temp = target[i];
            for(int j=0; j<n; j++)
            {
                if(searcharray[j] == temp)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else if(j == n-1)
                {
                    cout<<"NO"<<endl;
                    break;
                }

            }

        }
    }



}
