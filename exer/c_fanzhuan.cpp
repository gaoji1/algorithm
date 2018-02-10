#include<iostream>
using namespace std;

int main()
{
    int input[5][5];

    while(cin>>input[0][0]>>input[0][1]>>input[0][2]>>input[0][3]>>input[0][4])
    {
        //ÊäÈë
        for(int i=1; i<5; i++)
        {
            for(int j=0; j<5; j++)
            {
                int temp;
                cin>>temp;
                input[i][j] = temp;
            }
        }
        int command1;
        int command2;
        int x;
        int y;
        cin>>command1;
        cin>>command2;
        cin>>x;
        cin>>y;
        x--;
        y--;

        if(command1 == 1 && command2 == 2)
        {
            int temp = input[x][y];
            input[x][y] = input[x+1][y];
            input[x+1][y] = input[x+1][y+1];
            input[x+1][y+1] = input[x][y+1];
            input[x][y+1] = temp;

        }
        else if(command1 == 1 && command2 == 3)
        {
            int temp = input[x][y];
            input[x][y] = input[x+2][y];
            input[x+2][y] = input[x+2][y+2];
            input[x+2][y+2] = input[x][y+2];
            input[x][y+2] = temp;
            temp = input[x][y+1];
            input[x][y+1] = input[x+1][y];
            input[x+1][y] = input[x+2][y+1];
            input[x+2][y+1] = input[x+1][y+2];
            input[x+1][y+2] = temp;

        }
        else if(command1 == 2 && command2 == 2)
        {
            int temp = input[x][y];
            input[x][y] = input[x][y+1];
            input[x][y+1] = input[x+1][y+1];
            input[x+1][y+1] = input[x+1][y];
            input[x+1][y] = temp;

        }
        else if(command1 == 2 && command2 == 3)
        {
            int temp = input[x][y];
            input[x][y] = input[x][y+2];
            input[x][y+2] = input[x+2][y+2];
            input[x+2][y+2] = input[x+2][y];
            input[x+2][y] = temp;
            temp = input[x][y+1];
            input[x][y+1] = input[x+1][y+2];
            input[x+1][y+2] = input[x+2][y+1];
            input[x+2][y+1] = input[x+1][y];
            input[x+1][y] = temp;

        }



        //ÊäÈë
        for(int i=0; i<5; i++)
        {
            for(int j=0; j<4; j++)
            {
                cout<<input[i][j]<<" ";
            }
            cout<<input[i][4]<<endl;
        }

    }



}
