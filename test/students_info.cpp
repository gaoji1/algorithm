//查找学生信息
#include<iostream>
#include<map>
using namespace std;

class student
{
public:
    string id;
    string name;
    string sex;
    int age;
};

int main()
{
    int n;
    while(cin>>n)
    {
        map<string,student> data;
        for(int i=0; i<n; i++)
        {
            student temp;
            cin>>temp.id>>temp.name>>temp.sex>>temp.age;
            data[temp.id] = temp;
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            string temp;
            cin>>temp;
            auto index = data.find(temp);
            if(index == data.end())
            {
                cout<<"No Answer!"<<endl;
            }
            else
            {
                cout<<index->second.id<<" "<<index->second.name<<" "<<index->second.sex<<" "<<index->second.age<<endl;
            }
        }
    }
}
