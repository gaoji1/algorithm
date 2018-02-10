#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

class mycomplex
{
public:

    int shibu;
    int xubu;
    mycomplex(int myshibu,int myxubu)
    {
        shibu = myshibu;
        xubu = myxubu;
    }
    int num()
    {
        return xubu*xubu + shibu*shibu;
    }

};

void myPop(vector<mycomplex>& col)
{
    if(col.size() == 0)
    {
        cout<<"empty"<<endl;
    }
    else
    {
        mycomplex biggest = col[0];
        int index = 0;
        for(int i=1; i<col.size(); i++)
        {
            mycomplex temp = col[i];
            if(temp.num() > biggest.num())
            {
                biggest = temp;
                index = i;
            }
            else if(temp.num() == biggest.num())
            {
                if(temp.xubu < biggest.xubu)
                {
                    biggest = temp;
                    index = i;
                }
            }

        }
        col.erase(col.begin()+index);
        cout<<biggest.shibu<<"+i"<<biggest.xubu<<endl;
        cout<<"SIZE "<<"= "<<col.size()<<endl;
    }
}
void myAdd(vector<mycomplex>& col,int shibu,int xubu)
{
    mycomplex temp = mycomplex(shibu,xubu);
    col.push_back(temp);
    cout<<"SIZE "<<"= "<<col.size()<<endl;
}

int main()
{
    int n;
    while(cin>>n)
    {

        vector<mycomplex> col;
        for(int i=0; i<n; i++)
        {
            string command;
            cin>>command;
            if(command == "Pop")
            {
                myPop(col);

            }
            else
            {
                int shibu;
                int xubu;
                scanf("%d+i%d",&shibu,&xubu);
                myAdd(col,shibu,xubu);
            }
        }
    }

}
