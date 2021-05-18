      //Then which of your Lord’s favours will you both deny?
  //strategy::Modular Inverse with Combinatorics(DP)
    //n∗.∗(n−r+1)∗(r)−1∗(r−1)−1∗.∗2−1≡ x (mod m) NcR    
#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<sstream>
#include<set>
#include <queue>
#define pb push_back
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;
typedef long long ll;
#define MAXN 1000007
#define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
#define For(i,n) for( __typeof(n)i = 1 ; i <= n ; i++)
#define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  ll gcd(ll a ,ll b){
      while(b^=a^=b^=a%=b);
      return a;
    }
ll inv[MAXN], Ncnt[MAXN], arr[MAXN];
void generate(){
inv[1] = 1,Ncnt[1]=1;
arr[0]=1;arr[1]=1;
inv[0]=1;Ncnt[0]=1;
for(int i = 2; i < MAXN+1; ++i){
       inv[i] = mod - (mod/i) * inv[mod%i] % mod;
       Ncnt[i]=(Ncnt[i-1]%mod*i%mod)%mod;
       arr[i]=(arr[i-1]*inv[i])%mod;
      
}
   
}
int main(){
 
int t,c=1;
scanf("%d",&t);

generate();


while(t--){
	
  ll i,j,n,r=0,x;
  
  scanf("%lld",&n);
   ll ans=1;
  For(i,n){
  	scanf("%lld",&x);

    ans = ( ans * Ncnt[r+x-1] ) % mod;
    ans = ( ans * arr[x-1] ) % mod;
    ans = ( ans* arr[r] ) % mod;
    r+=x;

  }
printf("Case %d: %lld\n",c,ans );
c++;

}           
return 0;

}
