//—∞’“ªÔ∞È
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int buddy[n] = {0};
        int book[n] = {0};
        for(int i=0;i<n;i++)
        {
            int book_id;
            cin>>book_id;
            int number = 0;
            for(int j=0;j<i;j++)
            {
                if(book[j] == book_id)
                {
                    buddy[j]++;
                    number++;
                }
            }
            buddy[i] = number;
            book[i] = book_id;
        }
        for(int i=0;i<n;i++)
        {
            if(buddy[i] != 0)
            {
                cout<<buddy[i]<<endl;
            }
            else
            {
                cout<<"BeiJu"<<endl;
            }

        }
    }

}
