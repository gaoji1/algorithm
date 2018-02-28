//Á¬Í¨Í¼
#include<iostream>
using namespace std;


int find_root(int nodes[],int k)
{
    if(nodes[k] == -1)
    {
        return k;
    }
    else
    {
        nodes[k] = find_root(nodes,nodes[k]);
        return nodes[k];
    }
}


int main()
{
    int n,m;
    while(cin>>n>>m)
    {


        int nodes[1001];
        for(int i=1; i<=n; i++)
        {
            nodes[i] = -1;
        }
        for(int i=0; i<m; i++)
        {
            int k1;
            int k2;
            cin>>k1>>k2;
            k1 = find_root(nodes,k1);
            k2 = find_root(nodes,k2);
            if(k1!=k2)
            {
                nodes[k1] = k2;
            }
        }
        int number = 0;
        for(int i=1; i<=n; i++)
        {
            if(nodes[i] == -1)
            {
                number++;
            }

        }
        if(number == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}
