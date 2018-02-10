#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string mycard;
    string hiscard;
    while(cin>>mycard>>hiscard)
    {
        if(hiscard.size() == 1){
            int i;
            for(i=0;i<mycard.size();i++){
                if(mycard.at(i) - '0' > hiscard.at(0) -'0'){
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(i == mycard.size()){
                cout<<"NO"<<endl;
            }
        }else if(hiscard.size() == 2){
            int pre = 0;
            int i = 0;
            while(i<mycard.size()-1){
                if(mycard.at(i)-'0' > hiscard.at(0)-'0'){
                    pre = mycard.at(i)-'0';
                    i = i+1;
                    if(mycard.at(i)-'0' == pre){
                        cout<<"YES"<<endl;
                        break;
                    }
                }else{
                    i++;
                }
            }
            if(i == mycard.size()-1){
                cout<<"NO"<<endl;
            }

        }else if(hiscard.size() == 3){
            int pre = 0;
            int i = 0;
            while(i<mycard.size()-2){
                if(mycard.at(i)-'0' > hiscard.at(0)-'0'){
                    pre = mycard.at(i)-'0';
                    if(mycard.at(i+1)-'0'==pre && mycard.at(i+2)-'0'==pre){
                        cout<<"YES"<<endl;
                        break;
                    }else{
                        i++;
                    }
                }else{
                    i++;
                }
            }
            if(i == mycard.size()-2){
                cout<<"NO"<<endl;
            }

        }else if(hiscard.size() == 4){
            int pre = 0;
            int i = 0;
            while(i<mycard.size()-3){
                if(mycard.at(i)-'0' > hiscard.at(0)-'0'){
                    pre = mycard.at(i)-'0';
                    if(mycard.at(i+1)-'0'==pre && mycard.at(i+2)-'0'==pre && mycard.at(i+3)-'0'==pre){
                        cout<<"YES"<<endl;
                        break;
                    }else{
                        i++;
                    }
                }else{
                    i++;
                }
            }
            if(i == mycard.size()-3){
                cout<<"NO"<<endl;
            }
        }else{

            if(hiscard.at(0) == '0'){
                stringstream ss;
                string temp;
                int i=0;
                for(i=0;i<mycard.size();i++){
                    if(temp.find(mycard.at(i)) == -1){
                        temp = temp + mycard.at(i);
                    }
                }

                mycard = temp;
                for(i=0;i<mycard.size()-4;i++){
                    temp = mycard.substr(i,5);

                    if(temp=="12345" || temp=="23456" || temp =="34567" || temp=="45678" || temp=="56789" ){
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                if(i == mycard.size()-4){
                    cout<<"NO"<<endl;
                }
            }else if(hiscard.at(0) == '1'){
                stringstream ss;
                string temp;
                int i=0;
                for(i=0;i<mycard.size();i++){
                    if(temp.find(mycard.at(i)) == -1){
                        temp = temp + mycard.at(i);
                    }
                }

                mycard = temp;
                for(i=0;i<mycard.size()-4;i++){
                    temp = mycard.substr(i,5);


                    if(temp=="23456" || temp =="34567" || temp=="45678" || temp=="56789" ){
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                if(i == mycard.size()-4){
                    cout<<"NO"<<endl;
                }
            }else if(hiscard.at(0) == '2'){
                stringstream ss;
                string temp;
                int i=0;
                for(i=0;i<mycard.size();i++){
                    if(temp.find(mycard.at(i)) == -1){
                        temp = temp + mycard.at(i);
                    }
                }

                mycard = temp;
                for(i=0;i<mycard.size()-4;i++){
                    temp = mycard.substr(i,5);

                    if(temp =="34567" || temp=="45678" || temp=="56789" ){
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                if(i == mycard.size()-4){
                    cout<<"NO"<<endl;
                }
            }else if(hiscard.at(0) == '3'){
                stringstream ss;
                string temp;
                int i=0;
                for(i=0;i<mycard.size();i++){
                    if(temp.find(mycard.at(i)) == -1){
                        temp = temp + mycard.at(i);
                    }
                }

                mycard = temp;
                for(i=0;i<mycard.size()-4;i++){
                    temp = mycard.substr(i,5);

                    if(temp=="45678" || temp=="56789" ){
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                if(i == mycard.size()-4){
                    cout<<"NO"<<endl;
                }
            }else if(hiscard.at(0) == '4'){
                stringstream ss;
                string temp;
                int i=0;
                for(i=0;i<mycard.size();i++){
                    if(temp.find(mycard.at(i)) == -1){
                        temp = temp + mycard.at(i);
                    }
                }

                mycard = temp;
                for(i=0;i<mycard.size()-4;i++){
                    temp = mycard.substr(i,5);

                    if(temp=="56789" ){
                        cout<<"YES"<<endl;
                        break;
                    }
                }
                if(i == mycard.size()-4){
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"NO"<<endl;
            }

        }


    }



}
