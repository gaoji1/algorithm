//ÂêÑÅÈËÃÜÂë
#include<iostream>
#include<queue>
#include<string>

using namespace std;

class E
{
    public:
    string s;
    int t;
};

string swapstr(string s,int i,int j)
{
    string temp = s;
    int a = temp[i];
    temp[i] = temp[j];
    temp[j] = a;
    return temp;
}

bool judge(string s)
{
    int temp = s.find("2012");
    if(temp != -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

queue<E> Q;
int BFS(int n)
{
    while(Q.empty() == false)
    {
        E mynew = Q.front();
        Q.pop();
        if(judge(mynew.s) == true)
        {
            return mynew.t;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                string new_s = swapstr(mynew.s,i,i+1);
                int new_t = mynew.t+1;
                if(new_t > 20)
                {
                    return -1;
                }
                if(judge(new_s))
                {
                    return new_t;
                }
                else
                {
                    E temp;
                    temp.s = new_s;
                    temp.t = new_t;
                    Q.push(temp);
                }
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<4)
        {
            cout<<"-1"<<endl;
        }

        string input;
        cin>>input;
        while(Q.empty() == false)
        {
            Q.pop();
        }
        E mynew;
        mynew.s = input;
        mynew.t = 0;
        Q.push(mynew);
        int temp = BFS(n);
        cout<<temp<<endl;
    }
}
