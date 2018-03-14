//≥…º®≈≈–Ú
#include<iostream>
using namespace std;

class student
{
public:
    string name;
    int score;
    int age;

    bool isSmaller(student x)
    {
        if(score < x.score)
        {
            return true;
        }
        else if(score > x.score)
        {
            return false;
        }
        else
        {
            if(name == x.name)
            {
                return age < x.age;
            }
            int i=0;
            int j=0;
            while(i<(int)name.length() && j<(int)x.name.length())
            {
                if(name[i] < x.name[j])
                {
                    return true;
                }
                else if(name[i] > x.name[j])
                {
                    return false;
                }
                i++;
                j++;
            }
            if(j < (int)x.name.length() && i== (int)name.length())
            {
                return true;
            }
            if(i<(int)name.length() && j==(int)x.name.length())
            {
                return false;
            }
            return false;

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
            student temp;
            cin>>temp.name>>temp.age>>temp.score;
            input[i] = temp;
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
        for(int i=0;i<n;i++)
        {
            cout<<input[i].name<<" "<<input[i].age<<" "<<input[i].score<<endl;
        }
    }
}
