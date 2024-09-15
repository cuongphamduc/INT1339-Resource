#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--)
	{
		long long n;
	    scanf("%lld", &n);
	
	    long long sum = 0;
	    
	    for (int i = 1; i <= n; i++)
	    {
	    	sum += i;
		}
	    
	    printf("%lld\n", sum);
	}
	
	return 0;
}

