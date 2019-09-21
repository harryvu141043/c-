#include<stdio.h>
main(){
	int m,n,temp,count=0;
	printf("nhap m:");
	scanf("%d",&m);
	printf("nhap n:");
	scanf("%d",&n);
	if(m<n){
		temp=n;
		n=m;
		m=temp;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2 && m%i==0&&n%i==0){
			printf("%d\n",i);
		}
		count=0;
	}
}
