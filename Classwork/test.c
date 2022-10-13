#include<stdio.h>

void main()
{
	int a, b, choice;

	printf("\nenter a :");
	scanf("%d,&a");
	printf("\nenter b :");
	scanf("%d,&b :");
	printf("\na=%d, b=%d",a,b);
	printf("\n1.for addition\n2. for sustraction\n3. for mutiplicaton\n4. for division\n");
	printf("enter your choice:");
	scanf("%d, &choice");
	switch(choice)
	{
		case1 : printf("\n addition : %d",(a+b));
				break;
		case2 : printf("\n subtraction : %d",(a-b));
				break;
		case3 : printf("\n multiplication : %d",(a*b));
				 break;
		case4 : printf("\n division :%.2f",(a/(float)b));
				break;
		case5 : printf("\n invalid choice");
		
	}
}



 
 
 