#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int a,b,temp;
	printf("Enter A = \n");
	scanf("%d",&a);
	printf("Enter B = \n");
	scanf("%d",&b);
	temp = a;
	a =b;
	b = temp;
	printf(" A= %d\n B= %d",a,b);
	getch();
}
