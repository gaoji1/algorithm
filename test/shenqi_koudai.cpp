#include<iostream>
#include<vector>
using namespace std;

int num;


int method_num(vector<int> input,int mybegin,int volume)
{
    if(mybegin > (int)input.size())
    {
        return 0;
    }
    if(volume == 40)
    {
        num++;
        return 0;
    }

    else
    {
        method_num(input,mybegin+1,volume);
        method_num(input,mybegin+1,volume+input[mybegin]);
    }
    return 0;

}

int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> input;
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            input.push_back(temp);

        }
        method_num(input,0,0);
        cout<<num<<endl;
    }
}


