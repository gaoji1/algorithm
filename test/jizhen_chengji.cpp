#include<iostream>

using namespace std;

int main()
{
    int mat1[2][3];
    int mat2[3][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            int temp;
            cin>>temp;
            mat1[i][j] = temp;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            int temp;
            cin>>temp;
            mat2[i][j] = temp;
        }
    }
    int result[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            int sum = 0;
            for(int k=0;k<3;k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
