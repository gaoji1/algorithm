//最小花费
#include<iostream>
using namespace std;

int main()
{
    int L1,L2,L3,C1,C2,C3;
    int A,B;
    int N;
    int Distance[1001];
    int cost[1001];
    while(cin>>L1>>L2>>L3>>C1>>C2>>C3)
    {
        cin>>A>>B;
        cin>>N;
        for(int i=2;i<N+1;i++)
        {
            int temp;
            cin>>temp;
            Distance[i] = temp;
        }
        Distance[1] = 0;
        if(A>B)
        {
            int temp = A;
            A = B;
            B = temp;
        }
        for(int i=A;i<=B;i++)
        {
            cost[i] = -1;
        }
        cost[A] = 0;
        for(int i=A;i<B;i++)
        {
            for(int j=i+1;j<=B;j++)
            {
                int temp_distance = Distance[j] - Distance[i];
                int temp_cost = 0;
                if(temp_distance>L3)
                {
                    break;
                }
                else if(temp_distance>0 && temp_distance<=L1)
                {
                    temp_cost = C1;
                }
                else if(temp_distance>L1 && temp_distance<=L2)
                {
                    temp_cost = C2;
                }
                else
                {
                    temp_cost = C3;
                }
                if(cost[j]==-1 ||cost[i]+temp_cost < cost[j])
                {
                    cost[j] = cost[i] + temp_cost;
                }
            }
        }
        cout<<cost[B]<<endl;

    }
}
