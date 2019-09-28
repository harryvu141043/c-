#include<stdio.h>
void Sort(int a[],int n){
	int temp,i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
bool Checkdivisible(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]%x!=0){
			return false;
		}
	}
	return true;
}
bool CheckPrime(int n){
	if(n<2){
		return false;
	}
	if(n==2 || n==3 || n==5){
		return true;
	}
	if( n%2==0 || n%3==0 || n%5==0){
		return false;
	}
	for(int i=5;i*i<n;i+=6){
		if((n%i==0) || (n%(i+2)==0)){
			return false;
		}
	}
	return true;
}
void ChangeValues(int a[],int x,int start,int end){
	for(int i=start;i<=end;i++){
		a[i]=x;
	}
}
main(){
	int n,maxnt=0,souoc=0;
	printf("nhap n:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	Sort(a,n);
	if(Checkdivisible(a,n,a[0]) && CheckPrime(a[0])){
		maxnt=a[0];
	}
	else
		for(int i=1;i<=a[0]/2;i++){
			if(Checkdivisible(a,n,i) && CheckPrime(i)){
				maxnt=i;
			}
		}
	if(maxnt){	
		ChangeValues(a,maxnt,0,n-1);
	for(int i=0;i<n;i++){
		printf("a[%d]",i);
		printf("%d\n",a[i]);
	}
	}
	else
		printf("nhap ngu vl nhap lai di");

}
