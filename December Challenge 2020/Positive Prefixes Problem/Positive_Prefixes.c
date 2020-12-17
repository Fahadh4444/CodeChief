#include <stdio.h>



int main(void) {
	int T;
	scanf("%d",&T);
	int N,K;
	

    for(int i=0;i<T;i++)
    {
        scanf("%d",&N);
        scanf("%d",&K);
        if(N==K)
        {
        	for(int i=1;i<=N;i++)
        	{
        		printf("%d ",i);
			}
		}
		else if(K == (N/2))
		{
        	for(int i=1;i<=N;i++)
        	{
        		if(i%2 == 1 )
        		{
        			printf("%d ",(i*(-1)));
				}
				else
				{
					printf("%d ",i);
				}
			}	
		}
		else if(K < (N/2))
		{
			for(int i=1;i<=N;i++)
			{
				if(i%2 == 1 || i>2*K)
				{
					printf("%d ",(i*(-1)));
				}
				else
				{
					printf("%d ",i);
				}
			}
		}
		else
		{
			int negatives=0;
        	for(int i=1;i<=N;i++)
        	{
        		if(negatives < (N-K) && i%2 == 1)
        		{
        			printf("%d ",(i*(-1)));
        			negatives++;
				}
				else
				{
					printf("%d ",i);
				}
			}
		}

    }
	
	return 0;
}
