#include<stdio.h>
#include<conio.h>
int minimum(int arr[], int num, int length, int len);

void main(){

	int arr[2] = {2,3};
	int temp, length;
	clrscr();
	length = sizeof(arr)/sizeof(arr[0]);
	temp=minimum(arr, arr[0], length, 1);
	printf("The minimum number is %d",temp);
	getch();

}

int minimum( int arr[5], int num, int length, int len ){
	if(len == length ){
		return num;
	}

	if(num < arr[len]){

	     minimum(arr, num, length, len +1);
	}
	else{
		num = arr[len];
		minimum(arr, num,length, len +1);
	}

}