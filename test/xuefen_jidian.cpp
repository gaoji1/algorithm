#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> xuefen;
        vector<float> score;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            xuefen.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            float temp;
            cin>>temp;
            score.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            if(score[i]<=100 && score[i]>=90)
            {
                score[i] = 4;
            }
            else if(score[i]>=85 && score[i]<=89)
            {
                score[i] = 3.7;
            }
            else if(score[i]>=82 && score[i]<=84)
            {
                score[i] = 3.3;
            }
            else if(score[i]>=78 && score[i]<=81)
            {
                score[i] = 3.0;
            }
            else if(score[i]>=75 &&score[i]<=77)
            {
                score[i] = 2.7;
            }
            else if(score[i]>=72 && score[i]<=74)
            {
                score[i] = 2.3;
            }
            else if(score[i]>=68 && score[i]<=71)
            {
                score[i] = 2.0;
            }
            else if(score[i]>=64 && score[i]<=67)
            {
                score[i] = 1.5;
            }
            else if(score[i]>=60 && score[i]<=63)
            {
                score[i] = 1;
            }
            else
            {
                score[i] = 0;
            }
        }


        float xuefen_score = 0;
        for(int i=0;i<n;i++)
        {
            xuefen_score += xuefen[i] * score[i];
        }
        int sum_of_xuefen = 0;
        for(int i=0;i<n;i++)
        {
            sum_of_xuefen +=xuefen[i];
        }
        printf("%.2f\n",xuefen_score/sum_of_xuefen);
    }
}
