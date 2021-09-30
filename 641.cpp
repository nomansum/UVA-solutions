          //Then which of your Lord’s favours will you both deny?   
#include<stdio.h>
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
#define pb push_back
using namespace std;
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
char seq[29]="_abcdefghijklmnopqrstuvwxyz.";

int main(){
       int n;
       while(scanf("%d ",&n) && n){

                int text[200];
                  string s;int m;
              cin>>s;
            int len=s.size();//strlen(s);
           //printf("%d %d %s\n",n,len,s);
        rep(i,len){
            rep(j,29){
              if(s[i]==seq[j]){m=j;break;}
            }
         int idx=n*i;
         idx%=len;
         text[idx]=(m+i)%28;

        }
   rep(i,len){
    cout<<seq[text[i]];
   }
   cout<<endl;

       }
  return 0;
}
