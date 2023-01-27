// This will only printf Single DigitNumber
#include<stdio.h>
#include<conio.h>
void main(){
	int arr[5] = {1,5,4,1,5};
	int length, i,j,flag = 1,count =0;
	clrscr();
	length = sizeof(arr)/sizeof(arr[0]);
	for(i =0;i<length;i++){
		for(j =0;j<length;j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count ==1){
			printf("%d",arr[i]);
		}
		count =0;
	}
	getch();
}


