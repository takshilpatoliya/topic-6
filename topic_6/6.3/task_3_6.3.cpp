#include <stdio.h>

main()
{
	int i,n;
	
	printf("enter any number =");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n, i, n * i);
	}
	
}