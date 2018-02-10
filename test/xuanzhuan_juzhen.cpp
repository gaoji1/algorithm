#include<iostream>
using namespace std;




int main()
{
    int n;
    while(cin>>n)
    {
        int inputA[n][n];
        int inputB[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int temp;
                cin>>temp;
                inputA[i][j] = temp;
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int temp;
                cin>>temp;
                inputB[i][j] = temp;
            }
        }
        int flag = -1;
        int angle = 0;
        while(angle<=270)
        {
            int tag = 0;
            if(angle == 0)
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(inputA[i][j] != inputB[i][j])
                        {
                            tag = -1;
                        }
                    }
                }
                if(tag != -1)
                {
                    tag = 1;
                }

            }
            else if(angle == 90)
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(inputA[i][j] != inputB[j][n-i-1])
                        {
                            tag = -1;
                        }
                    }
                }
                if(tag != -1)
                {
                    tag = 1;
                }


            }
            else if(angle == 180)
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(inputA[i][j] != inputB[n-i-1][n-j-1])
                        {
                            tag = -1;
                        }
                    }
                }
                if(tag != -1)
                {
                    tag = 1;
                }

            }
            else if(angle == 270)
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(inputA[i][j] != inputB[n-j-1][i])
                        {
                            tag = -1;
                        }
                    }
                }
                if(tag != -1)
                {
                    tag = 1;
                }

            }
            if(tag == 1)
            {
                break;
            }

            angle +=90;
        }
        if(angle > 270)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<angle<<endl;
        }



    }
}
