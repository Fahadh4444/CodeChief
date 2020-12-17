#include<stdio.h>


//2
//10 1
//10 20 30 40 50 60 90 80 100 1
//5 2
//9 80 27 72 79




int main()
{
	int T;
	scanf("%d",&T);
	int N,D;
	int risk,noRisk=0;
	int days=0;
	int arr[100000];
	
	for(int i=0; i<T; i++)
	{
		scanf("%d",&N);
		scanf("%d",&D);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<N;i++)
		{
			if(arr[i]>=80 || arr[i]<=9)
			{
				risk++;
			}
			else
			{
				noRisk++;
			}
		}
		
		if(risk%D == 0)
		{
			days = days+risk/D;
		}
		else
		{
			days = days+(risk/D)+1;
		}
			
		if(noRisk%D == 0)
		{
			days = days+noRisk/D;
		}
		else
		{
			days = days+(noRisk/D)+1;
		}
			
		printf("%d\n",days);
		days=0;
		risk=0;
		noRisk=0;
	}
}
