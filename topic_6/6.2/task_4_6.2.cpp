#include <stdio.h>

main()
{
	int i,n,first=0,second=1 ,sum;
	
	printf("enter any number =");
	scanf("%d",&n);
	
	printf("Fibonacci Series up to %d numbers:\n", n);
	
	for(i = 0; i<=n;i++)
	{
		 if (i <= 1)
		{
            sum = i;
        } 
		else 
		{
            sum = first + second;
            first = second;
            second = sum;
        }
        printf("%d\n", sum);
	}
}