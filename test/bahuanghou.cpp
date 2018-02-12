#include<iostream>
#include<vector>
#include<sstream>
#include<math.h>
#include<algorithm>
using namespace std;

int Egrace[8] = {0};
int number = 0;
vector<string> result;

int isConflict(int row,int col);
int eight_grace(int row);
void add_vector();
int main()
{
    int n;
    while(cin>>n)
    {
        eight_grace(0);

        cout<<result[n-1]<<endl;
    }
}
void add_vector()
{
    string tempstr;
    stringstream ss;
    for(int i=0;i<8;i++)
    {
        char A;
        ss<<Egrace[i]+1;
        ss>>A;
        tempstr += A;
    }
    result.push_back(tempstr);
}
int eight_grace(int row)
{
    for(int col=0;col<8;col++)
    {

        if(isConflict(row,col) != 0)
        {
            Egrace[row] = col;
            if(row  == 7)
            {
                add_vector();
                number++;
                Egrace[row] = 0;
                return 0;
            }
            eight_grace(row+1);
            Egrace[row] = 0;
        }
    }
    return 0;

}
int isConflict(int row,int col)
{
    int x,y;
    for(int i=0;i<row;i++)
    {
        x = i;
        y = Egrace[i];
        if(x==row)
        {
            return 0;
        }
        if(y==col)
        {
            return 0;
        }
        if(y-x == col-row)
        {
            return 0;
        }
        if(y+x == col+row)
        {
            return 0;
        }
    }
    return 1;

}
