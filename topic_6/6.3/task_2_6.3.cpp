#include <stdio.h>

main()
{
	int i,n,f=1;
	
	printf("enter value N =");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	printf("The factorial is:%d\n",f);
}