#include<stdio.h>
#include<string.h>
#include<cmath>


int main(int argc, char const *argv[])
{
	int tree[1000];
	int h;
	int n;
	while(scanf("%d",&n) != EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&tree[i]);
		}
		scanf("%d",&h);
		int start = (int)pow(2,h-1);
		if(start > n){
			printf("EMPTY\n");
		}
		else{
			int end = (int)pow(2,h-1)-1 > n ? n:(int)pow(2,h-1)-1;
			for(int i=start-1;i<end-1;i++){
				printf("%d ",tree[i]);
			}
			printf("%d\n",tree[end-1]);
		}
	}
	return 0;
}