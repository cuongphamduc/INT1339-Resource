#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--)
	{
		int n;
	    scanf("%d", &n);
	
	    int sum = n * (n + 1) / 2;
	    printf("%d\n", sum);
	}
	
	return 0;
}

