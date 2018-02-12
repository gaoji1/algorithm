#include<iostream>
#include<vector>
using namespace std;

class Coordinates
{
public:
    int x;
    int y;
    Coordinates(int myx,int myy)
    {
        x = myx;
        y = myy;
    }

};

int main()
{
    vector<Coordinates> input;
    int x,y;
    while(cin>>x>>y)
    {
        if(x==0&&y==0&&input.size()==0)
        {
           return 0;
        }
        if(x==0 && y==0)
        {
            int left = input[0].x;
            int right = input[0].x;
            int top = input[0].y;
            int buttom = input[0].y;
            for(int i=0;i<(int)input.size();i++)
            {
                if(input[i].x < left)
                {
                    left = input[i].x;
                }
                if(input[i].x > right)
                {
                    right = input[i].x;
                }
                if(input[i].y < buttom)
                {
                    buttom = input[i].y;
                }
                if(input[i].y > top)
                {
                    top = input[i].y;
                }
            }
            cout<<left<<" "<<buttom<<" "<<right<<" "<<top<<endl;
            input.clear();
        }
        else if(x!=0 || y!=0)
        {
            Coordinates temp = Coordinates(x,y);
            input.push_back(temp);
        }
    }
}
