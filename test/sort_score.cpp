//≥…º®≈≈–Ú
#include<iostream>
using namespace std;

class student
{
public:
    int id;
    int score;

    bool isSmaller(student s)
    {
        if(score < s.score)
        {
            return true;
        }
        else if(score > s.score)
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
            int tempscore;;
            cin>>tempid>>tempscore;
            tempstu.id = tempid;
            tempstu.score = tempscore;
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
        for(int i=0;i<n;i++)
        {
            cout<<input[i].id<<" "<<input[i].score<<endl;
        }
    }
}
