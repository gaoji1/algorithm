//±œ“µbg
#include<iostream>
#include<math.h>
using namespace std;

class activity
{
public:
    int weight;
    int time;
    int leave;

    bool isBigger(activity a)
    {
        return leave>a.leave;
    }
};

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==-1)
        {
            return -1;
        }
        activity input[n];
        for(int i=0; i<n; i++)
        {
            int tempweigtht;
            int temptime;
            int templeave;
            cin>>tempweigtht>>temptime>>templeave;
            input[i].weight = tempweigtht;
            input[i].time = temptime;
            input[i].leave = templeave;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=n-1; j>i; j--)
            {
                if(input[j-1].isBigger(input[j]))
                {
                    activity tempact = input[j];
                    input[j] = input[j-1];
                    input[j-1] = tempact;
                }
            }
        }
        int result[n+1][input[n-1].leave+1];
        for(int i=0;i<=n;i++)
        {
            result[i][0] = 0;
        }
        for(int i=0;i<=input[n-1].leave;i++)
        {
            result[0][i] = 0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=input[n-1].leave;j++)
            {
                if(input[i-1].time<=j && input[i-1].leave>=j)
                {
                    result[i][j] = max(result[i-1][j-input[i-1].time]+input[i-1].weight,result[i-1][j]);
                }
                else
                {
                    result[i][j] = result[i-1][j];
                }
            }
        }
        int maxnum = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=input[n-1].leave;j++)
            {
                if(result[i][j] > maxnum)
                {
                    maxnum = result[i][j];
                }
            }
        }
        cout<<maxnum<<endl;
    }
}
