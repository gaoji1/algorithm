#include<iostream>
#include<vector>
using namespace std;



int main()
{
   int col[11];
   col[0] = 1;
   for(int i=1;i<11;i++)
   {
       col[i] = i * col[i-1];
   }
   int n;
   while(cin>>n)
   {
       if(n == 0)
       {
           cout<<"NO"<<endl;
       }
       for(int i=10;i>=0;i--)
       {
           if(n>=col[i])
           {
               n -=col[i];
           }
       }
       if(n == 0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
}

