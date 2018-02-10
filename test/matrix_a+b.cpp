#include<iostream>
using namespace std;

int main()
{
    int M,N;
    while(cin>>M>>N)
    {
        int A[M][N];
        int B[M][N];
        int C[M][N];

        if(M == 0)
        {
            return 0;
        }

        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                int temp;
                cin>>temp;
                A[i][j] = temp;
            }
        }

        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                int temp;
                cin>>temp;
                B[i][j] = temp;
            }
        }

        for(int i=0; i<M; i++)
        {
            for(int j=0; j<N; j++)
            {
                int temp;
                temp = A[i][j] + B[i][j];
                C[i][j] = temp;
            }
        }

        int sum = 0;

        for(int i=0; i<M; i++)
        {
            int flag = 1;
            for(int j=0; j<N; j++)
            {
                if(C[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                sum++;
            }
        }

        for(int i=0; i<N; i++)
        {
            int flag = 1;
            for(int j=0; j<M; j++)
            {
                if(C[j][i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                sum++;
            }
        }

        cout<<sum<<endl;


    }
}
