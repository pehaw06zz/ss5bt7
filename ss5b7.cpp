#include<stdio.h>
int UCLN(int a,int b){
	while(b !=0){
		int temp =b;
		b=a%b;
		a=temp;
		}
		return a;
}
int main(){
	int a,b;
	printf("nhap so nguyen a: \n");
	scanf("%d",&a);
	printf("nhap so nguyen b: \n");
	scanf("%d",&b);
	if(a<=0||b<=0){
		printf("vui long nhap so nguyen \n");
		return 1;
	}
	int ucln=UCLN(a,b);
	printf("UCLN cua %d va %d la: %d\n",a,b,ucln);
	
	
	return 0;
}
