//ÊÖ»ú°´¼ü
#include<iostream>
#include<map>
using namespace std;

string keyboard[8] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int main()
{
    string input;
    map<char,int> pos;
    pos['a'] = 0;
    pos['b'] = 0;
    pos['c'] = 0;
    pos['d'] = 1;
    pos['e'] = 1;
    pos['f'] = 1;
    pos['g'] = 2;
    pos['h'] = 2;
    pos['i'] = 2;
    pos['j'] = 3;
    pos['k'] = 3;
    pos['l'] = 3;
    pos['m'] = 4;
    pos['n'] = 4;
    pos['o'] = 4;
    pos['p'] = 5;
    pos['q'] = 5;
    pos['r'] = 5;
    pos['s'] = 5;
    pos['t'] = 6;
    pos['u'] = 6;
    pos['v'] = 6;
    pos['w'] = 7;
    pos['x'] = 7;
    pos['y'] = 7;
    pos['z'] = 7;

    while(cin>>input)
    {
        int num = 0;
        int temp = pos[input[0]];
        num += input[0] - keyboard[temp][0]+1;
        for(int i=1;i<input.length();i++)
        {
            int temp_1 = pos[input[i]];
            if(temp_1 == temp)
            {
                num += input[i] - keyboard[temp_1][0] +1 +2;
            }
            else
            {
                num += input[i] - keyboard[temp_1][0] +1;
            }
            temp = temp_1;
        }
        cout<<num<<endl;
    }
}
