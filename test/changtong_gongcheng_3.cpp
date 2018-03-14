//³©Í¨¹¤³Ì¡ª¡ª3
#include<iostream>
using namespace std;

int city[101] = {-1};
int find_root(int n)
{
    if(city[n] == -1)
    {
        return n;
    }
    else
    {
        int temp = find_root(city[n]);
        city[n] = temp;
        return temp;
    }

}

void merge(int m,int n)
{
    if(find_root(m) != find_root(n))
    {
        city[n] = find_root(m);
    }
}

class road
{
public:
    int city_1;
    int city_2;
    int cost;

    bool isSmaller(road x)
    {
        if(cost < x.cost)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        if(n == 0)
        {
            return -1;
        }
        for(int i=0; i<101; i++)
        {
            city[i] = -1;
        }
        road input[n];
        for(int i=0; i<n; i++)
        {
            road temp;
            cin>>temp.city_1>>temp.city_2>>temp.cost;
            input[i] = temp;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=n-1; j>i; j--)
            {
                if(input[j].isSmaller(input[j-1]))
                {
                    road temp = input[j];
                    input[j] = input[j-1];
                    input[j-1] = temp;
                }
            }
        }
        int num = 0;
        //cout<<endl;
        for(int i=0; i<n; i++)
        {
            int temp_1 = input[i].city_1;
            int temp_2 = input[i].city_2;
            int temp_cost = input[i].cost;
            if(find_root(temp_1) == find_root(temp_2))
            {
                continue;
            }
            else
            {
                merge(find_root(temp_1),find_root(temp_2));
                //cout<<temp_1<<" "<<temp_2<<" "<<temp_cost<<endl;
                num += temp_cost;
            }
        }
        int root = 0;
        for(int i=1;i<=m;i++)
        {
            if(city[i] == -1)
            {
                root++;
            }
        }
        if(root == 1)
        {
           cout<<num<<endl;
        }
        else
        {
            cout<<"?"<<endl;
        }

    }
}
