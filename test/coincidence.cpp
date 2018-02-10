#include<iostream>
using namespace std;

int main()
{
    string input1;
    string input2;
    while(cin>>input1>>input2)
    {
        int result[input1.length()][input2.length()];
        for(int i=0; i<(int)input1.length(); i++)
        {
            result[i][0] = 0;
            if(input1[i] == input2[0])
            {
                for(int j=i; j<(int)input1.length(); j++)
                {
                    result[j][0] = 1;
                }
                break;
            }
        }
        for(int i=0; i<(int)input2.length(); i++)
        {
            result[0][i] = 0;
            if(input2[i] == input1[0])
            {
                for(int j=i; j<(int)input2.length(); j++)
                {
                    result[0][j] = 1;
                }
                break;
            }
        }

        for(int i=1; i<(int)input1.length(); i++)
        {
            for(int j=1; j<(int)input2.length(); j++)
            {
                int pre1 = result[i-1][j];
                int pre2 = result[i][j-1];
                int maxpre = max(pre1,pre2);
                int temp;
                if(input1[i] == input2[j])
                {
                    temp = result[i-1][j-1] + 1;
                }
                else
                {
                    temp = result[i-1][j-1];
                }
                result[i][j] = max(maxpre,temp);
            }
        }
        cout<<result[input1.length()-1][input2.length()-1];

    }
}
