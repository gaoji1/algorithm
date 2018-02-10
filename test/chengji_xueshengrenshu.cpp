#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    while(cin>>n)
    {
        if(n == 0)
        {
            return 0;
        }
        vector<int> inputs;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            inputs.push_back(temp);
        }
        int grade;
        cin>>grade;
        int num=0;
        for(int i=0;i<n;i++)
        {
            if(inputs[i] == grade)
            {
                num++;
            }
        }
        cout<<num<<endl;


    }
}
