#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cont;
	do{
	float fnumber;
	int inumber,denom=1,i,gcd;


	printf("Please enter the number: ");
	scanf("%f", &fnumber);

	//float mult = 10;


	while ((int)fnumber != fnumber)
	{
		fnumber = fnumber*10;
		denom = denom*10;
	}
	inumber = (int)fnumber;

	printf("\n\nThe unsimplified fraction form of the number is: %d / %d \n", inumber, denom);


	for (i=1; i<=inumber && i<=denom ; i++)
	{
			if(inumber%i==0 && denom%i==0)
				gcd = i;
	}

	printf("\n\nThe greatest common divisor is : %d \n",gcd);

	inumber = inumber / gcd;
	denom = denom / gcd;

	printf("\nThe simplest fraction form of the entered number is : %d / %d \n",inumber,denom);
	printf("\n\n continue Y/N ? : ");


	scanf(" %c",&cont);
	system("cls");
	}
	while (cont=='Y' || cont=='y');




    return 0;
}
