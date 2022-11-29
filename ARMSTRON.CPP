#include<stdio.h>
#include<conio.h>
int arm(int x);
void main(){
	int n;
	clrscr();
	arm(n);
	getch();
}
int arm(int n){
	int a,temp,i,rem,sum=0;
	clrscr();
	printf("Enter a number   : ");
	scanf("%d",&a);
	temp = a;
	for(i =a;i!=0;i=i/10){
		rem = i%10;
		sum =sum + rem*rem*rem;
		printf("rem = %d\nsum = %d\n",rem,sum);
		}
	if(temp==sum){
		printf("The number is Armstrong Number");
		}
	else{
		printf("The number is not Armstrong Number");
	}
}