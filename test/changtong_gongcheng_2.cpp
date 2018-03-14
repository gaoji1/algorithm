//带修路费的畅通工程
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int village[101] = {-1};

int find_root(int n)
{
    if(village[n] == -1)
    {
        return n;
    }
    else
    {
        int temp = find_root(village[n]);
        village[n] = temp;
        return temp;
    }
}

void merge(int n,int m)
{
    if(village[n] == m || village[m]==n)
    {
        return;
    }
    else
    {
        village[n] = m;
        return;
    }
}

class villcost
{
public:
    int village_1;
    int village_2;
    int cost;
    int flag;
    bool isCheaper(villcost x)
    {
        if(flag != x.flag)
        {
            return flag > x.flag;
        }
        else
        {
            return cost<x.cost;
        }

    }
    void build(int vill_1,int vill_2,int mycost,int myflag)
    {
        village_1 = vill_1;
        village_2 = vill_2;
        cost = mycost;
        flag = myflag;
    }

};

int main()
{
    int n;
    while(cin>>n)
    {
        vector<villcost> dis;

        for(int i=1; i<=n; i++)
        {
            village[i] = -1;
        }
        for(int i=0; i<n*(n-1)/2; i++)
        {
            int temp_village_1;
            int temp_village_2;
            int temp_dis;
            int temp_flag;
            cin>>temp_village_1>>temp_village_2>>temp_dis>>temp_flag;
            villcost temp;
            temp.build(temp_village_1,temp_village_2,temp_dis,temp_flag);
            dis.push_back(temp);

        }
        for(int i=0; i<dis.size(); i++)
        {
            for(int j=dis.size()-1; j>i; j--)
            {
                if(dis[j].isCheaper(dis[j-1]))
                {
                    villcost temp = dis[j];
                    dis[j] = dis[j-1];
                    dis[j-1] = temp;
                }
            }
        }
        int num = 0;
        for(int i=0; i<dis.size(); i++)
        {
            int temp_1 = find_root(dis[i].village_1);
            int temp_2 = find_root(dis[i].village_2);
            if(temp_1 != temp_2)
            {
                merge(temp_1,temp_2);
                if(dis[i].flag == 0)
                {
                    num += dis[i].cost;
                }
            }

        }
        cout<<num<<endl;




    }
}
