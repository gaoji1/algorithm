#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<string> origininput;
        vector<string> inputs;
        for(int i=0; i<n; i++)
        {
            string temp;
            cin>>temp;
            origininput.push_back(temp);
            transform(temp.begin(),temp.end(),temp.begin(),[](unsigned char c)-> unsigned char {return tolower(c);});
            inputs.push_back(temp);
        }
        string form;
        cin>>form;
        transform(form.begin(),form.end(),form.begin(),[](unsigned char c)-> unsigned char {return tolower(c);});
        int patern_len = 0;
        for(int i=0; i<form.length(); i++)
        {
            if(form[i] == '[')
            {
                while(form[++i] != ']');

            }
            patern_len++;
        }
        for(int i=0; i<inputs.size(); i++)
        {
            if(inputs[i].length() != patern_len)
            {
                continue;
            }
            int m;
            int n;
            int flag = 1;
            for(m=0,n=0; m<inputs[i].length()&&n<form.length(); m++,n++)
            {
                if(form[n] == '[')
                {
                    int temp = n+1;
                    int isOK = 0;
                    while(form.at(temp) != ']')
                    {
                        if(inputs[i].at(m) == form.at(temp))
                        {
                            isOK = 1;
                            break;
                        }
                        temp++;
                    }
                    while(form[++temp] != ']');
                    n = temp;
                    if(isOK == 0)
                    {
                        flag =0;
                        break;
                    }

                }
                else
                {
                    if(inputs[i].at(m) != form.at(n))
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 1)
            {
                cout<<i+1<<" "<<origininput[i]<<endl;
            }
        }


    }
}
