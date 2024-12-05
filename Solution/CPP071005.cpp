#include <stdio.h>
#include <math.h>
main(){
	double c , s=0 , tu=1 , mau=1 , sx=0 ;
	scanf ("%lf",&c);
	for (int i = 0 ; ; i++)
	{
		tu = pow (-1,i);
		mau = 2*i +1;
		sx = 1 / mau ;
		if(sx > c)
		s += tu/mau;
		else break;
	}
	printf ("%.6lf",4*s);

}
