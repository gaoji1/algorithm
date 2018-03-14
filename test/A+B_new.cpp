//A+B
#include<iostream>
using namespace std;

int main()
{
    int A;
    int B;
    int k;
    while(cin>>A>>B>>k)
    {
        if(A==0 && B==0)
        {
            return -1;
        }
        int samenum = 0;
        int tempA = A;
        int tempB = B;
        while(tempA>0 || tempB>0)
        {
            if(tempA%10 == tempB%10)
            {
                samenum++;
                tempA = tempA/10;
                tempB = tempB/10;
            }
            else
            {
                break;
            }
        }
        if(samenum >= k)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<A+B<<endl;
        }
    }
}
