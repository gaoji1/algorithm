#include<iostream>
#include<vector>

using namespace std;
int isSuShu(int val)
{
    for(int i=2; i<val; i++)
    {
        if(val%i == 0)
        {
            return 0;
        }
        else
        {
        }

    }
    return 1;
}

int main()
{

    int n;
    while(cin>>n)
    {
        if(n<=11)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int> col;
        int result = 1;
        while(result < n)
        {
            result +=10;
            int flag = isSuShu(result);
            if(flag == 1)
            {
                if(result < n)
                {
                    col.push_back(result);
                }
            }
            else
            {
            }
        }
        for(int i=0; i<col.size()-1; i++)
        {
            cout<<col[i]<<" ";
        }
        cout<<col[col.size()-1]<<endl;


    }



}
