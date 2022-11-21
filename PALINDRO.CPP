#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int sum=0, n, r;
	printf("Enter a number to check its palindrome or not?");
	scanf("%d",&n);
	int temp  =n;
	while(n>0){
		r = n%10;
	       //	printf("r = %d\n",r);
		sum =(sum*10)+r;
	       //	printf(" sum = %d\n",sum);
		n= n/10;
	       //	printf("n = %d\n",n);
		}
       if(temp == sum){
       printf("number is palindrome");
       }
       else{
       printf("number is not palindrome");
       }
       getch();
}