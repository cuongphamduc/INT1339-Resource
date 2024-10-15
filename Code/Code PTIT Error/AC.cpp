#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--)
	{
		long long n;
	    scanf("%lld", &n);
	
	    long long sum = n * (n + 1) / 2;
	    printf("%lld\n", sum);
	}
	
	return 0;
}
