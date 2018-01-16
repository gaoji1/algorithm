#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	char a[100];//字符串
	
	while(cin>>a){
		int lena = strlen(a);
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			char b[100];//指令字符串
			cin>>b;//取指令
			if(b[0] == '0'){
				int start = b[1] - '0';
				int end = start+(b[2] - '0')-1;
				for(int j=start,k=end;j<k;j++,k--){
					char temp = a[j];
					a[j] = a[k];
					a[k] = temp;

				}
			}
			else{
				int start = b[1] - '0';
				int end = start +(b[2] - '0') - 1;
				//flag判断数组长度是否增加
				int flag = strlen(b) - 3 - (b[2] - '0');
				//大于0说明数组长度增加
				if(flag>0){
					for(int j=lena-1;j>=start;j--){
						a[j+flag] = a[j];
					}
					lena +=flag;
				}
				//小于0说明长度减少
				else{
					for(int j=end+1;j<lena;j++){
						a[j+flag] = a[j];
					}
					lena +=flag;

				}
				for(int m=start,n=3;n<strlen(b);m++,n++){
					a[m] = b[n];

				}
			}
			for(int i=0;i<lena;i++){
			cout<<a[i];
			}
			cout<<endl;
		}
		
	}
}