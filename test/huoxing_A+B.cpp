#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
    string A;
    string B;
    vector<int> sushu;
    int num = 1;
    sushu.push_back(2);
    for(int i=3; num<25; i++)
    {
        int flag = 1;
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            num++;
            sushu.push_back(i);
        }
        else
        {
            continue;
        }
    }

    while(cin>>A>>B)
    {
        if(A == "0")
        {
            break;
        }
        vector<int> Anums;
        vector<int> Bnums;

        for(int i=0;i<A.size();i++)
        {
            int j=i;
            for(;j<A.size();j++)
            {
                if(A[j] == ',')
                {
                    break;
                }
            }

            string temptr = A.substr(i,j-i);
            stringstream ss;
            ss<<temptr;
            int temp;
            ss>>temp;
            Anums.push_back(temp);
            i = j;

        }

        for(int i=0;i<B.size();i++)
        {
            int j=i;
            for(;j<B.size();j++)
            {
                if(B[j] == ',')
                {
                    break;
                }
            }

            string temptr = B.substr(i,j-i);
            stringstream ss;
            ss<<temptr;
            int temp;
            ss>>temp;
            Bnums.push_back(temp);
            i = j;
        }

        int ia = Anums.size()-1;
        int ib = Bnums.size()-1;
        int jinwei = 0;
        int pre = 0;
        vector<int> result;
        while(ia>=0 && ib>=0)
        {
            int tempa = Anums[ia];
            int tempb = Bnums[ib];
            int tempsnum = tempa + tempb + pre;
            if(tempsnum >= sushu[jinwei])
            {
                result.push_back(tempsnum - sushu[jinwei]);
                pre = 1;
            }
            else
            {
                pre = 0;
                result.push_back(tempsnum);
            }

            jinwei++;
            ia--;
            ib--;
        }
        while(ia >= 0)
        {
            int tempa = Anums[ia];
            int tempsum = tempa + pre;
            if(tempsum >= sushu[jinwei])
            {
                result.push_back(tempsum - sushu[jinwei]);
                pre = 1;
            }
            else
            {
                pre = 0;
                result.push_back(tempsum);
            }
            jinwei++;
            ia--;
        }
        while(ib >= 0)
        {
            int tempb = Bnums[ib];
            int tempsum = tempb + pre;
            if(tempsum >= sushu[jinwei])
            {
                result.push_back(tempsum - sushu[jinwei]);
                pre = 1;
            }
            else
            {
                pre = 0;
                result.push_back(tempsum);
            }
            jinwei++;
            ib--;
        }
        if(pre == 1)
        {
            result.push_back(1);
        }
        for(int i=result.size()-1;i>0;i--)
        {
            cout<<result[i]<<",";
        }
        cout<<result[0]<<endl;


    }
}
