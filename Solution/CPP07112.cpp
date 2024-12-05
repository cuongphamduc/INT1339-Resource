#include <iostream>
using namespace std;
int main() {
	long long n,k,kq;
	cin>>n>>k;
	if(k<(float)(n+2)/2) kq=2*(k-1)+1;
	else if(n%2==0) {
		kq=2*(k-n/2);
	} else {
		kq=2*(k-(n+1)/2);
	}
	cout<<kq;
	return 0;
}

