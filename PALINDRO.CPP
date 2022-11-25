#include<stdio.h>
#include<conio.h>
int palin(int n);
void main(){
	int n;
	clrscr();
	palin(n);
	getch();
	}

int palin(int n){
       int temp, sum =0,rem;
       printf("Enter a number");
       scanf("%d",&n);
       temp = n;
       while(n>0){
       rem = n%10;
       sum = (sum *10)+rem;
       printf("sum = %d\n",sum);
       n = n/10;
       }
       if(temp ==sum){
       printf("number is palindrome");
       }
       else{
       printf("number is not palindrome");
       }
}