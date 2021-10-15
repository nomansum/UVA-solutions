          //Then which of your Lord’s favours will you both deny?   
#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<unordered_map>
#include<sstream>
#include<set>
#include <queue>
using namespace std;
#define  mp make_pair
#define pb push_back
#define endl "\n"
typedef long long ll;
#define MAXN 1000009
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
int move_xx[]={-1,0,1,0};
int  move_yy[]={0,1,0,-1};
#define MAX_N 200010

string P,T; 
int b[MAX_N], n, m; 

void kmp_table() { 
int i = 0, j = -1; b[0] = -1; 
while (i < m) { 
while (j >= 0 && P[i] != P[j]) j = b[j]; 
i++; j++; 
b[i] = j; 
} }

int kmp_matching() { 
int i = 0, j = 0,cnt=-1; 
while (i < n) { 
while (j >= 0 && T[i] != P[j]) j = b[j]; 
i++; j++; 
 
}
return j;

}


int main(){
 
 while(cin>>T){
    n=T.size();
    P=T;
    reverse(P.begin(),P.end());
    m=n;
    kmp_table();
    int idx=kmp_matching();
     if(idx==n)cout<<T<<endl;
     else {
          cout<<T;
          for(int i=idx;i<n;++i)cout<<P[i];

            cout<<endl;

     }


 }
return 0;
}
