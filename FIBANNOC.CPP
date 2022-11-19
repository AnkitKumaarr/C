#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
       int n, n1 =0, n2=1, n3,i;
       printf("Enter the last number to print Fibannoci Series\n");
       scanf("%d",&n);
       printf("%d\n%d\n",n1,n2);
       for(i=0;i<=n;i++){
		n3 = n1 +n2;
		printf("%d\n",n3);
		n1 =n2;
		n2 =n3;
		}
       getch();
}