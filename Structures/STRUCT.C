#include<stdio.h>
#include<conio.h>
struct stud{
	int roll;
	char name[20];
	int age;
};
void main(){
	struct stud s1;
       clrscr();
       printf("Enter the roll no. of student");
       scanf("%d",&s1.roll);
       printf("Enter the name of student");
       scanf("%s",&s1.name);
       printf("Enter the age  of student");
       scanf("%d",&s1.age);
       printf("The roll no. is --%d\n",s1.roll);
       printf("The roll no. is --%s\n",s1.name);
       printf("The roll no. is --%d\n",s1.age);
       getch();
}