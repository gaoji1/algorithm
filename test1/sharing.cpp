//sharing
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int beginadr1;
    int beginadr2;
    int n;
    while(cin>>beginadr1>>beginadr2>>n)
    {
        set<int> nextset;
        int output = -1;
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            int storeadr;
            char alphabet;
            int nextadr;

            cin>>storeadr>>alphabet>>nextadr;
            if(flag == 1)
            {
                continue;
            }
            else
            {
                auto search = nextset.find(nextadr);
                if(search != nextset.end())
                {
                    flag = 1;
                    output = *search;
                }
                else
                {
                    nextset.insert(nextadr);
                }
            }

        }

        cout<<output<<endl;
    }
}
