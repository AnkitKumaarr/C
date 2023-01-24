#include<stdio.h>
#include<conio.h>
void main(){

int arr[6] = {2,1,2,1,3,7};
int i,j,num;
clrscr();
for(i =0;i<6;i++){
	for(j=0;j<=6;j++){
		if(j!=i){
			if(arr[i] == arr[j]){
				break;
			}
			else{
			num = arr[i];
			}
		}
	}
}
printf("The number is %d",num);
getch();
}