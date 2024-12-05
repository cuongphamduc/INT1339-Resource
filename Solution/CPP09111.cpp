#include <bits/stdc++.h>

#define ll long long

using namespace std;

const ll nMax = 2003; 
const ll mMax = 2003;
const ll MOD  = 1000000007;

ll C[nMax][mMax] ;

void initC(){
	for (ll i = 0 ; i< nMax ; i++){
		C[0][i] = 1;
	}
	for (ll i = 1 ; i<nMax ; i++){
		for (ll j = i ; j<nMax ; j++){
			C[i][j] = (C[i-1][j-1] + C[i][j-1]) % MOD;
		}
	}
}

ll calc(){
	ll n , m ;
	cin >> n >>  m  ; 
	ll x ;
	ll sum = 0 ;
	for (ll i = 0; i<n ; i++){
		cin >> x ;
		sum += x ;
	}
	if (sum > m) return 0;
	//cout << n << ' ' << n +m -sum - 1<<endl;
	return C[n-1][n + m - 1 - sum];
}

int main(){
	initC();
	cout << calc();
}

