#include<stdio.h>

int main()
{
    int T;
    int i;
	long int pairs;
	long int A,B;
	scanf("%d",&T);
	long int even_A,odd_A,even_B,odd_B;
	
	
	for(i=0;i<T; i++)
	{
		scanf("%ld",&A);
		scanf("%ld",&B);
		
		if(A%2 == 0)
		{
		    even_A = odd_A = (A/2);
		}
		else
		{
		    even_A = (A/2);
		    odd_A = ((A/2)+1);
		}
		
		
		
		if(B%2 == 0)
		{
		    even_B = odd_B = (B/2);
		}
		else
		{
		    even_B = (B/2);
		    odd_B = ((B/2)+1);
		}
		pairs = (even_B*even_A)+(odd_B*odd_A);
		printf("%ld\n",pairs);
		
	}
}
