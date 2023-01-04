#include<stdio.h>
#include<conio.h>
struct stud{
	int roll;
	char name[20];
	int age;
	};
void main(){
	struct stud s[1];
	int i;
	clrscr();
	for(i =1;i<=5;i++){
		printf("Enter the roll number - ");
		scanf("%d",&s[i].roll);
		printf("Enter the name of the student --  ");
		scanf("%s\n", &s[i].name);
		printf("Enter the age of the student -- ");
		scanf("%d", &s[i].age);
	}

	for(i =1;i<=5;i++){
		printf(" roll number -%d\n " , s[i].roll);
		printf(" Name -- %s\n", s[i].name);
		printf("Age --%d\n ", s[i].age);
		}
getch();
}




