#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i= a; i<= b; ++i)
#define FORD(i,a,b) for(int i= a; i>= b; --i)
#define pb push_back
#define fi first
#define se second
using namespace std;
const long long base=1e9+7;
const int N=100001;
const double bs=1e-7;
const double pi=3.1415926535897;
typedef pair<int, int> ii;
typedef long long ll;
int a[N],k,n,res,top,bot,mid,s[N];
int main(){
    ios::sync_with_stdio(false);
    //freopen("i.inp","r",stdin);
    //freopen("o.out","w",stdout);
    cin>>n>>k;
    FOR(i,1,n) cin>>a[i];
    s[0]=0;
    FOR(i,1,n) s[i]=s[i-1]+a[i];
    res=0;
    FOR(i,1,n){
        top=0;bot=i-1;
        while(top<=bot){
            mid=(top+bot)/2;
            if(s[i]-s[mid]<=k){
                res=max(res,i-mid);
                bot=mid-1;
            } else top=mid+1;
        }
    }
    cout<<res;
    return 0;
}

