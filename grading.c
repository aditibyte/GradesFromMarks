#include<stdio.h>
main()
{
	int i ;
	printf("Enter marks :");
	scanf("%d" ,&i);
	if(i>=85 && i<=100)
	{
		printf("Result is Grade A");
	}
	else if(i>=70 && i<=84)
	{
		printf("Result is Grade B");
	}
	else if(i>=55 && i<=69)
	{
		printf("Result is Grade C");
	}
	 else if(i>=40 && i<=54)
	{
		printf("Result is Grade D");
	}
    else
    {
     printf("Result is Grade F");
	} 
return 0;
}	
