#include<iostream>

using namespace std;
int main(){
    int n;
    while(cin>>n){
        int result = 0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp%2 == 0){
                result += 1;
            }else{
                result -= 1;
            }
        }
        if(result>0){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }





}
