//ºÏ²¢×Ö·û´®
#include<iostream>
using namespace std;

int main()
{
    string temp1;
    string temp2;
    while(cin>>temp1>>temp2)
    {
        string output = "";
        int i = 0;
        int j = temp2.size()-1;
        while(i<temp1.size() && j>=0)
        {
            output = output + temp1[i] + temp2[j];
            i++;
            j--;
        }
        cout<<output<<endl;
    }
}
