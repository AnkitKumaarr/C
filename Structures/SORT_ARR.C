#include<stdio.h>
#include<conio.h>
struct product{
	int p_id;
	char name[20];
	int quantity;
};
void main(){
	struct product s[10];
	struct product temp;
	int n,i,k;
	clrscr();
	printf("Enter the product number you want -");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("\nEnter the product id--");
		scanf("%d",&s[i].p_id);
		printf("Enter the name--");
		scanf("%s",&s[i].name);
		printf("Enter the quantity--");
		scanf("%d",&s[i].quantity);
	}
	printf("\n raw data ------");
	for(i=0;i<=n;i++){
		printf("\n %d \t %s \t %d.\n",s[i].p_id,s[i].name, s[i].quantity);
		}
	for(i=0;i<=n;i++){
		for(k=i+1;k<=n;k++){
			if(s[i].quantity < s[i+1].quantity){
				temp = s[i];
				s[i] = s[k];
				s[k] = temp;
			}

		}

	}
	printf("Sorted data--- ");
	for(i=0;i<=n;i++){
	       printf("\n %d \t %s \t %d.\n",s[i].p_id,s[i].name, s[i].quantity);
		}

	getch();
}