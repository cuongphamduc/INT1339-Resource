#include <bits/stdc++.h>

#define FOR(v,a,b) for(int v=a;v<b;v++)
#define FOD(v,a,b) for(int v=a;v>b;v--)
#define ll long long
#define EL cout<<endl

using namespace std;

const int maxN=1e5+5;
int t;
long long n;
int main(){
	cin>>t;
	while(t--){
        cin>>n;
        long long a=0,b=0,c=0;
        bool kt=true;
        if(n%3==0){
            a=b=c=n/3;
        }
        else if(n%2==0){
            a=n/2;
            if(n%4==0){
                b=n/4;
                c=n/4;
            }
            else kt=false;
        }
        else kt=false;
        if(kt){
            cout<<a<<' '<<b<<' '<<c<<endl;
        }
        else cout<<"IMPOSSIBLE\n";

	}
	return 0;
}

