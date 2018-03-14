//Ô±¹¤ÄêÁäÅÅĞò
#include<iostream>
using namespace std;

class student
{
public:
    int id;
    int age;
    string name;
    bool isSmaller(student s)
    {
        if(age < s.age)
        {
            return true;
        }
        else if(age > s.age)
        {
            return false;
        }
        else
        {
            return id<s.id;
        }
    }

};

int main()
{
    int n;
    while(cin>>n)
    {
        student input[n];
        for(int i=0;i<n;i++)
        {
            student tempstu;
            int tempid;
            int tempage;
            string tempname;
            cin>>tempid>>tempname>>tempage;
            tempstu.id = tempid;
            tempstu.age = tempage;
            tempstu.name = tempname;
            input[i] = tempstu;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>i;j--)
            {
                if(input[j].isSmaller(input[j-1]))
                {
                    student temp = input[j];
                    input[j] = input[j-1];
                    input[j-1] = temp;
                }
            }
        }
        if(n>3)
        {
            n=3;
        }
        for(int i=0;i<n;i++)
        {
            cout<<input[i].id<<" "<<input[i].name<<" "<<input[i].age<<endl;
        }
    }
}
