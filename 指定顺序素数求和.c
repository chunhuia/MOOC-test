#include<stdio.h>
int main()
{
	
    int x=2;
	int n,m;
	int cnt=0;
	int i,sum=0;
	
	scanf("%d %d",&n,&m);

	
	do{
	int prime=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			prime=0;
			break;
			}
		}
		if(prime==1){
			cnt++;
			if(cnt>=n&&cnt<=m) {
			sum+=x;
			}
		}
	 x++;
	 } while(cnt<=m);
	
		printf("%d",sum);
	
return 0;
} 
