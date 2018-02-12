#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> input;
        int x;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            input.push_back(temp);
        }
        cin>>x;
        for(int i=0;i<n;i++)
        {
            if(input[i] == x)
            {
                cout<<i<<endl;
                break;
            }
            if(i == n-1 &&input[i] != x)
            {
                cout<<-1<<endl;
            }
        }


    }
}
