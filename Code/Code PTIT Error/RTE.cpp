#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--)
	{
		long long n;
	    scanf("%lld", &n);
	    
	    n /= 0;
	
	    long long sum = n * (n + 1) / 2;
	    printf("%lld\n", sum);
	}
	
	return 0;
}

