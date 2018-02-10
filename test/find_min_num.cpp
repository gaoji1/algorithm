#include<iostream>
#include<vector>
using namespace std;


class mynum
{
public:
    int x;
    int y;
    mynum(int myx,int myy)
    {
        x = myx;
        y = myy;
    }
};
int main()
{

    int n;
    while(cin>>n)
    {
        vector<mynum> input;
        for(int i=0; i<n; i++)
        {
            int tempx;
            int tempy;

            cin>>tempx;
            cin>>tempy;
            mynum tempmynum = mynum(tempx,tempy);
            input.push_back(tempmynum);
        }

        mynum biggest = input[0];
        for(int i=1; i<n; i++)
        {
            if(input[i].x < biggest.x){
                biggest = input[i];
            }else if(input[i].x == biggest.x){
                if(input[i].y < biggest.y){
                    biggest = input[i];
                }
            }

        }
        cout<<biggest.x<<" "<<biggest.y<<endl;

    }



}
