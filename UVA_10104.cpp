#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll find_gcd(ll a,ll b){
	while(b^=a^=b^=a%=b);return a;
}
ll gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

bool solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }
    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}


int main(){
ll a,b;
while(~(scanf("%lld %lld",&a,&b))){
       ll x,y;
        if(a==0)printf("0 1 %lld\n",b);
        else if(b==0)printf("1 0 %lld\n",a);

        else {
        	ll g=find_gcd(a,b);
        	solution(a,b,g,x,y,g);
               printf("%lld %lld %lld\n",x,y,g);
    }
}

	return 0;
}
