#include <stdio.h>
/*
The program, written in C, that checks if the entered integer is a palindromic number.
A palindromic number is a number which is equal to its reversed written format. 
*/

int main(){

	//printf("hello world muthafukas!\n");
	char cont;
	do {
	
	int num,temp,revNum=0;
	printf("\nPlease enter the number to be checked: ");
	scanf("%d",&num);
	printf("\n");
	
	temp = num;

	while(temp != 0){
		revNum = (temp % 10) + (revNum * 10);
		temp = temp / 10;
	}

	//printf("Reversed number is: %d \n",revNum);

	if (revNum == num){
		printf("The number you've entered is a palindromic number!\n");
	}
	else
		printf("The number you've entered is not a palindromic number!\n");
		
	printf("\nDo you like to try again? (y/n) \n");
	scanf(" %c", &cont);
	} while ((cont=='Y') || (cont=='y'));

	return 0;
}
