#include<stdio.h>
#include<conio.h>
union first{
int number;
char c;
};
void main(){
	union first s1;
	clrscr();
	printf("Enter any Number--");
	scanf("%d",&s1.number);
	printf("Number = %d\tCharacter is = %c",s1.number, s1.c);
	getch();
}