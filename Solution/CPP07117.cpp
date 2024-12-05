#include <bits/stdc++.h>

#define FOR(v,a,b) for(int v=a;v<b;v++)
#define FOD(v,a,b) for(int v=a;v>b;v--)
#define ll long long
#define EL cout<<endl;

using namespace std;

const int maxN=1e5+5;
ll n;
bool nguyento(ll u){
    if(u<2) return false;
    for(int i=2;i*i<=u;i++){
        if(u%i==0) return false;
    }
    return true;
}
int main(){
	cin>>n;
	ll k=(ll) sqrt(n);
	if(k*k==n && nguyento(k)) cout<<"YES";
	else cout<< "NO";
	return 0;
}

