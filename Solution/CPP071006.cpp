#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int kt=0;
	if(a==0 && (b==0 || c==0 ))	kt=0;
	else{
		if(b==c)	kt=1;
		else{
			int m=b-c;
			if(m<0)	m=-m;
			if(m%3==0)	kt=1;
			else kt=0;
			}
		}
	if(kt)	cout << "YES";
	else cout << "NO";
	return 0;
}



