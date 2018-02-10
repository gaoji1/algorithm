#include<iostream>
#include<vector>
#include<cmath>
#
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> input;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            input.push_back(temp);
        }
        int depth;
        cin>>depth;
        if(pow(2,depth-1) > n){
            cout<<"EMPTY"<<endl;
            continue;
        }
        if(pow(2,depth)-1 >= n){
            for(int i=pow(2,depth-1)-1;i<n-1;i++){
                cout<<input[i]<<" ";
            }
            cout<<input[n-1]<<endl;
            continue;
        }else{
            for(int i=pow(2,depth-1)-1;i<pow(2,depth)-2;i++){
                cout<<input[i]<<" ";
            }
            cout<<input[pow(2,depth)-2]<<endl;
            continue;
        }




    }




}
