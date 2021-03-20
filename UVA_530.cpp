//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll  long long
ll gcd(ll a ,ll b){
  while(b^=a^=b^=a%=b);
  return a;
}

int main(){
ll n,k;
while(~scanf("%lld %lld",&n,&k)){
if(n==0)break;
ll ans=1;
if(k>n/2)k=n-k;
for(ll i=0;i<k;++i){
    ans*=(n-i);
    ans/=(i+1);

}

printf("%lld\n",ans);

}
  return 0;

}
