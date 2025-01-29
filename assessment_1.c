#include<stdio.h>
main()
{
	printf("\n\n\t ----------MENU----------");
	printf("\n\n\t 1.Addition");
	printf("\n\n\t 2.Substraction");
	printf("\n\n\t 3.Multiplication");
	printf("\n\n\t 4.Division");

	printf("\n\n\t ------------------------");
	printf("\n\n\t ------------------------");

	int i;
	float x,y;

	printf("\n\n\t Enter Your Choice :");
	scanf("%d",&i);

	printf("\n\n\t ------------------------");
	printf("\n\n\t ------------------------");

	printf("\n\n\t Enter First Number :");
	scanf("%f",&x);

	printf("\n\t Enter Second Number :");
	scanf("%f",&y);

	printf("\n\n\t ------------------------");
	printf("\n\n\t ------------------------");

	switch (i)
	{
		case 1 : 
				printf("\n\n\t Addition = %.2f + %.2f = %.2f",x,y,x+y);
		break;
		
		case 2 : 
				printf("\n\n\t Substraction = %.2f - %.2f = %.2f",x,y,x-y);
		break;
		
		case 3 : 
				printf("\n\n\t Multiplication = %.2f * %.2f = %.2f",x,y,x*y);
		break;
		
		case 4 : 
				printf("\n\n\t Division = %.2f / %.2f = %.2f",x,y,x/y);
		break;
		
		default : 
				printf("\n\n\t invalid choice");
	}
}
