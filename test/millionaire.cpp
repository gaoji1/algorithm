#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int million = 0;
    int poor = 0;
    million = 30 * 10;
    for(int i=0;i<30;i++)
    {
       poor += pow(2,i);
    }
    cout<<million<<" "<<poor<<endl;
}
