#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int jie;
    int k;
    while(cin>>jie>>k)
    {
        int matrix[jie][jie];
        for(int i=0; i<jie; i++)
        {
            for(int j=0; j<jie; j++)
            {
                int temp;
                cin>>temp;
                matrix[i][j] = temp;
            }
        }


        /*----*/
        int result[jie][jie];
        int temp[jie][jie];
        for(int i=0; i<jie; i++)
        {
            for(int j=0; j<jie; j++)
            {
                result[i][j] = matrix[i][j];
            }
        }
        while(k != 1)
        {
            k--;



            for(int i=0; i<jie; i++)
            {
                for(int j=0; j<jie; j++)
                {
                    int sum = 0;
                    for(int time=0; time<jie; time++)
                    {
                        sum += result[i][time] * matrix[time][j];
                    }
                    temp[i][j] = sum;
                }
            }
            for(int i=0; i<jie; i++)
            {
                for(int j=0; j<jie; j++)
                {
                    result[i][j] = temp[i][j];
                }
            }
        }



        /*----*/

        for(int i=0; i<jie; i++)
        {

            for(int j=0; j<jie-1; j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<result[i][jie-1];
            cout<<endl;

        }


    }




}
