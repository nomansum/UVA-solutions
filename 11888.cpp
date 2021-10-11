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

void kmpPreprocess() { 
int i = 0, j = -1; b[0] = -1; 
while (i < m) { 
while (j >= 0 && P[i] != P[j]) j = b[j]; 
i++; j++; 
b[i] = j; 
} }

int kmpSearch() { 
int i = 0, j = 0,cnt=-1; 
while (i < n) { 
while (j >= 0 && T[i] != P[j]) j = b[j]; 
i++; j++; 
if (j == m) { 
//cnt++;
//fl=true;
//break;
  if(i-j)return i-j;
  cnt=0;
j = b[j]; 
}}
return cnt;
}


int main(){
 
int t;
cin>>t;
while(t--){
      
      string s,t,ss;
      int N,M;

      cin>>s;
       int i;
    //bool fll=false;
   N=s.size();
   for ( i = 1; i < N; ++i)
   {
       if(s[i]!=s[i-1])break;
   }
 

    T=s+s;
 
    reverse(s.begin(),s.end());
   P=s;
m=N;
n=2*m;

rep(i,m)b[i]=0;
   
  kmpPreprocess();
  N=kmpSearch();
  
if(N==m || N==0)cout<<"palindrome\n";
else if(N==-1)cout<<"simple\n";
else cout<<"alindrome\n";




}
return 0;
}
