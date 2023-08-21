#include<stdio.h>
#include<stdint.h>

int main()
{
	int a,b,c;
	int r,i,z;
	int choice;
	int32_t num;
	printf("Enter the number");
	scanf("%lu",&num);
	for(i=31;i>=0;i--)
	{
	  z=(num>>i)&1;
	  printf("%d",z);
	}
	printf("\n");

	printf("Enter the value to be rotated\n");
	scanf("%d",&r);
	printf("CHOICE\n");
	printf("1.Right rotate\n");
	printf("2.Left rotate\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: c=(a>>r)|(a<<(32-r));
			//printf("%d",c);
			break;
		case 2: c=(a<<r)|(a<<(32-r));
			//printf("%d",c);
			break;
		default: printf("invalid");
			 break;
	}
	for(i=32;i>=0;i--)
	{
	  b=(c>>i)&1;
	  printf("%d",b);
	}

	return 0;
}



