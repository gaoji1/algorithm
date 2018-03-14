//ƒß÷‰¥ µ‰
//’‚Ã‚À„¡À
#include<map>
#include<iostream>

using namespace std;

int main()
{
    string id;
    string expl;
    map<string,string> id_to_expl;
    map<string,string> expl_to_id;
    while(cin>>id && id!="@END@")
    {
        cin.getline();
        id_to_expl[id] = expl;
        expl_to_id[expl] = id;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        if(temp[0] == '[')
        {
            auto searchexpl = id_to_expl.find(temp);
            if(searchexpl != id_to_expl.end())
            {
                cout<<searchexpl->second<<endl;
            }
            else
            {
                cout<<"what?"<<endl;
            }
        }
        else
        {
            auto searchid = expl_to_id.find(temp);
            if(searchid != expl_to_id.end())
            {
                cout<<searchid->second.substr(1,searchid->second.length())<<endl;
            }
            else
            {
                cout<<"what?"<<endl;
            }
        }
    }
}
