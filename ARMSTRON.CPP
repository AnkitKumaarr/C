#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int n, temp, sum=0, cube, r;
	printf("Enter a number to check its Armstrong or not\n");
	scanf("%d",&n);
	temp = n;
	while(n>0){
		r = n%10;
		printf(" r = %d\n",r);
		cube = r*r*r;
		printf("cube = %d\n",cube);
		sum = sum +cube;
		printf("sum = %d\n",sum);
		n= n/10;
		printf(" n = %d\n",n);
	}
	if(temp == sum){
		printf("number is Armstrong number");
	}
	else{
		printf("number is not Armstrong number");
	}
	getch();
}