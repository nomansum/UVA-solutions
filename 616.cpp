            //Then which of your Lord’s favours will you both deny?
     
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
#define MAXN 30007
#define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
#define For(i,n) for( __typeof(n)i = 1 ; i <= n ; i++)
#define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
  ll gcd(ll a ,ll b){
      while(b^=a^=b^=a%=b);
      return a;
    }
int move_x[]={0,0,1,-1,-1,-1,1,1};
int move_y[]={-1,1,0,-1,0,1,-1,1};

int main(){

  ll n;
  while(scanf("%lld",&n) && n>-1){
    bool fl=false;
    ll ans=0;
    if( n!=1){
       ll i,j;
       ll lim=sqrt(n+5);
        for(i=2;i<=100 && i<=lim;++i){
          ll tmp=n; 
         ll cnt=0;
          if(tmp%i==0)continue;  
          for(j=0;j<i;++j){
             
           if(tmp%i!=0){
            --tmp;
            cnt++;
           }
           if(tmp%i==0)tmp-=(tmp/i);
           else {tmp++;break;}  
          }
          if( cnt==i && tmp%i==0)ans=i;    
        }
      
        
    }
    if(ans==0){
      printf("%lld coconuts, no solution\n",n);
    }
    else {
      printf("%lld coconuts, %lld people and 1 monkey\n",n,ans);
    }

  }
  return 0;
} 
