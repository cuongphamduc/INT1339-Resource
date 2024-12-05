#include <stdio.h>
main(){
	long n,fn,f1=0,f2=1;
	scanf("%ld",&n);
	if(n==0)fn=f1;
	if(n==1)fn=f2;
	if(n>1){
		for (long i=2;i<=n;i++){
			fn=(f1+f2)%(1000000007);
			f1=f2;
			f2=fn;
		}
	}
	printf("%ld",fn);	
}

