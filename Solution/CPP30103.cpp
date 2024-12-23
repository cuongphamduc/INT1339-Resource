#include<bits/stdc++.h>
using namespace std;
#define LL long long
LL b[2][1000005];
int n;
void update(int t,int pos,LL val)
{
    for(int i=pos;i<=n;i+=(i&(-i)))
    {
        b[t][i]+=val;
    }
}
LL query(int t,int pos)
{
    LL sum=0;
    for(int i=pos;i>0;i-=(i&(-i)))
        sum+=b[t][i];
    return sum;
}
int main()
{
    cin>>n;
    LL ar[n];
    LL br[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
      //  cin>>ar[i];
        br[i]=ar[i];
    }
    sort(br,br+n);
    for(int i=0;i<n;i++)
    {
        ar[i]=(lower_bound(br,br+n,ar[i])-br);
        ar[i]+=1;
    }
    LL ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans+=query(1,ar[i]-1);
        update(0,ar[i],1);
        update(1,ar[i],query(0,ar[i]-1));
    }
    cout<<ans<<endl;
}

