#include <stdio.h>

main()
{
	int i,n;
	
	printf("Enter First year =");
	scanf("%d",&i);
	printf("Enter Second year =");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%4==0)
		printf("%d\n",i);
		
		i++;
	}
}