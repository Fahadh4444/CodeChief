#include<stdio.h>

int main()
{
	int day = 0;
	int D_1,D_2;
	int V_1,V_2;
	int total;
	int vaccine = 0;
	

	
	scanf("%d",&D_1);
	scanf("%d",&V_1);
	scanf("%d",&D_2);
	scanf("%d",&V_2);
	scanf("%d",&total);
	
	while(vaccine < total)
	{
		day++;
		if(day >= D_1)
		{
			vaccine = vaccine+V_1;
		}
		if(day >= D_2)
		{
			vaccine = vaccine+V_2;
		}		
		}
		
	printf("%d",day);		
}
