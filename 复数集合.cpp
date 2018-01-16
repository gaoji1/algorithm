#include<iostream>
#include<cstdio>
#include<queue>
#include<string>
#include<utility>



using namespace std;

class complex{
    public:
    	double real;
    	double imag;
    	complex(double real,double imag){
            this->real = real;
            this->imag = imag;
        }
    friend bool operator < (complex c1,complex c2){
         return c1.real * c1.real + c1.imag * c1.imag < c2.real * c2.real + c2.imag * c2.imag;
    }
};


int main(int argc, char const *argv[])
{
    int n;
    while(cin>>n){
        priority_queue<complex> q;
        string order;
        for(int num=0;num<n;num++){
            cin>>order;
            if(order == "Pop"){
                if(q.size() == 0){
                    cout<<"empty\n";
                }
                else{
                    complex b = q.top();
                    cout<<b.real<<"+"<<"i"<<b.imag<<endl;
                    q.pop();
                    cout<<"SIZE "<<"= "<<q.size()<<endl;
                }
            }
            else if(order == "Insert"){
                double re;
                double im;
                scanf("%lf+i%lf",&re,&im);
                complex b(re,im);
                q.push(b);
                cout<<"SIZE = "<<q.size()<<endl;
                
            }
        }
    }
	
    
    
}