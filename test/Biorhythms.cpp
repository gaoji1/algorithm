#include<iostream>
using namespace std;

int main()
{

    int a,b,c;
    int mybegin;
    int begina = 0;
    int beginb = 0;
    int beginc = 0;
    while(cin>>a>>b>>c>>mybegin)
    {
        begina = a;
        beginb = b;
        beginc = c;
        for(a=begina;a<=21252;a+=23)
        {
            for(b=beginb;b<=a;b+=28)
            {
                for(c=beginc;c<=b;c+=33)
                {
                    if(a!=0 && a==b && a==c && a!= mybegin)
                    {
                        cout<<"the next triple peak occurs in "<<a-mybegin<<" days."<<endl;
                    }
                }
            }
        }
    }

}
