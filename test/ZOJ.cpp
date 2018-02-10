#include<iostream>
#include<vector>
using namespace std;

int main()
{

    string input;
    while(cin>>input)
    {
        int znum = 0;
        int onum = 0;
        int jnum = 0;
        for(int i=0;i<(int)input.size();i++)
        {
            if(input[i] == 'Z')
            {
                znum += 1;
            }
            else if(input[i] == 'O')
            {
                onum += 1;
            }
            else
            {
                jnum += 1;
            }
        }
        string output;
        while(znum>0 || onum>0 || jnum>0)
        {
            if(znum > 0)
            {
                output += "Z";
            }
            if(onum > 0)
            {
                output += "O";
            }
            if(jnum > 0)
            {
                output += "J";
            }
            znum--;
            onum--;
            jnum--;
        }
        cout<<output<<endl;
    }
}
