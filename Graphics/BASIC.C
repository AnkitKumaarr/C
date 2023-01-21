#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
int gd = DETECT, gm;
int i;
clrscr();
initgraph(&gd, &gm,"C:\\TURBOC3\\BGI");
rectangle(2,400,600,2);
for(i = 0;i<=520;i++){
	delay(1);
	bar(20+i,40,70+i,20);

}
getch();
closegraph();
return 0;
}