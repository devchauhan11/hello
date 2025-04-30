#include<stdio.h>

	void fun()
	{
		int i ,n,fact = 1;
		printf("enter number :");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		
		fact =fact *i;
	}
	printf("factorial of %d is %d\n",n,fact);
	}
	void main()
	{
		int i;
		printf("not call function");
		for(i=1;i<=3;i++)
		{
			if(1==3)
			fun();
		}
	   	printf("i love you ");
	   	
	   	
	
	}


