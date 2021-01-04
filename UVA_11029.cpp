/*
SHIBLI NOMAN SUNNY
GIT::nomansum
UVA 11029
*/
#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define in(t) scanf("%lld",&t)
ll findlastdig(ll a, ll b) {
	a%=1000;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        res%=1000;
        a = a * a;
        a%=1000;
        b >>= 1;
    }
    return res;
}
ll findfirstdig(ll a,ll b){
	double f=(double)b*log10(a);
      ll fdig=pow(10, f-floor(f))*(double)100;
    
       return fdig;
}


int main(){
    ll t;
    in(t);
    while(t--){
     ll n,k;
     in(n);in(k);
     ll ldig=findlastdig(n,k);
    
    ll fdig=findfirstdig(n,k);
 
  printf("%lld...%03lld\n",fdig,ldig);
 

    }
return 0;
}
