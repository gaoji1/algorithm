#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


string myreverse(string inputstring,string command);
string myreplase(string inputstring,string command);
int main(){
    string inputstring;
    while(cin>>inputstring){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            string command;
            cin>>command;


            if(command[0] == '0'){
                inputstring = myreverse(inputstring,command);
                cout<<inputstring<<endl;
            }else{
                inputstring = myreplase(inputstring,command);
                cout<<inputstring<<endl;
            }
        }
    }

}
//·­×ª
string myreverse(string inputstring,string command){

    int mybegin = command[1] - '0';
    int num = command[2] - '0';

    for(int i=mybegin,j = mybegin+num-1;i<=j;i++,j--){
        char temp = inputstring[i];
        inputstring[i] = inputstring[j];
        inputstring[j] = temp;
    }
    return inputstring;
}
//Ìæ´ú
string myreplase(string inputstring,string command){

    int mybegin = command[1] - '0';
    int num = command[2] - '0';
    string ReplaceString = command.substr(3);
    string prestring = inputstring.substr(0,mybegin);

    string backstring;
    if(mybegin+num >= inputstring.size()){
        backstring = "";
    }else{
        backstring = inputstring.substr(mybegin+num);
    }
    inputstring = prestring + ReplaceString + backstring;


    return inputstring;
}
