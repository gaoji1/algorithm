#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            pq.push(temp);
        }
        int k;
        int pre = -1;
        cin>>k;
        while(k!=0){
            int temp;
            temp = pq.top();
            pq.pop();
            if(temp != pre){
                k--;
                pre = temp;
            }else{

            }
            if(k == 0){
                cout<<temp;
            }
        }
    }





}

