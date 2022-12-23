#include<stdio.h>
#include<conio.h>
#include<String.h>
void  main(){
	char str[100],ch;
	int count =0,i;
	clrscr();
	printf("Enter a word");
	gets(str);
	printf("Enter a word to find that character frequency");
	scanf("%c",&ch);
	for(i = 0;str[i]!= '\0';i++){
		if(ch == str[i]){
			count++;
		}
	}

	printf("The %c occurs %d times ", ch,count);




	getch();
}
