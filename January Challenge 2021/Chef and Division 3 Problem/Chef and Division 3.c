#include<stdio.h>


int main()
{
	int T,N;
	long int K,D;
	
	scanf("%d",&T);
	for(int i=0; i<T; i++)
	{
		scanf("%d%ld%ld",&N,&K,&D);
		long int totalProblems=0;
		for(int j=0; j<N; j++)
		{
			long int p;
			scanf("%ld",&p);
			totalProblems = totalProblems + p;
		}
		long int contests = totalProblems/K;
		if(contests<=D)
		{
			printf("%ld\n",contests);
		}
		else
		{
			printf("%ld\n",D);
		}
		
	}
}
