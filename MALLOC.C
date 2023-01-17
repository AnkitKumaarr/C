#include<stdio.h>
#include<conio.h>
void main(){
 int *p,n,i;

 clrscr();
 printf("Enter the size of--");
 scanf("%d",&n);
 *p = (int*) malloc (n*sizeof(int));
 for(i =0;i<=n;i++){
	printf("Enter the val --");
	scanf("%d",p+i);
 }
 printf("Show data");
 for(i=0;i<=n;i++){
	printf("\n%d",*p+i);
 }
 getch();
}