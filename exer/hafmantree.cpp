#include<stdio.h>
#include<iostream>
#include<queue>

using namespace std;

int main(){

    priority_queue<int,vector<int>,greater<int>> result;
    int n;
    int weight;
    while(cin>>n){
        weight = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            result.push(temp);
        }
        while(result.size() != 1){
            int a;
            int b;
            a = result.top();
            result.pop();
            b = result.top();
            result.pop();
            weight = weight + a + b;
            result.push(a+b);
        }
        cout<<result.top();
        result.pop();
    }
}
