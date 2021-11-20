

          //Then which of your Lord’s favours will you both deny?   
#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<stack>
#include<unordered_map>
#include<sstream>
#include<set>
#include <queue>
#pragma GCC target ("avx2")
#pragma GCC optimization("03")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define  mp make_pair
#define pb push_back
#define nline "\n"
typedef long long ll;
#define MAXN 1000009
#define scanstr(s) scanf("%s",s)
#define scani(n) scanf("%d",&n)
#define scanll(n) scanf("%lld",&n)
#define scandll(n,m) scanf("%lld %lld",&n,&m)
#define scanfl(n) scanf("%lf",&n)
#define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
#define For(i,n) for( __typeof(n)i = 1 ; i <= n ; i++)
#define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define clr(a,b) memset(a,b,sizeof a)
  ll gcd(ll a ,ll b){
      while(b^=a^=b^=a%=b);
      return a;
    }

int move_x[]={0,0,1,-1,-1,-1,1,1};
int move_y[]={-1,1,0,-1,0,1,-1,1};
int move_xx[]={-1,0,1,0};
int  move_yy[]={0,1,0,-1};
#define MAX_N 1100

int row[8],a,b,line;
int arr[8][8];
 int TC,ans;
  
  bool possible(int r, int c){
     
     rep(i,c){
        if(row[i]==r || abs(row[i]-r)==abs(i-c))return false;
     }
     return true;


  }




void solve(int c){
    if(c==8){
      
      int tmp=0;
    rep(i,8)tmp+=arr[row[i]][i];

        ans=(ans<tmp)?tmp:ans;
     }

     rep(r,8){
        if(possible(r,c)){
            row[c]=r;
            solve(c+1);
        }
     }

}




int main(){
    fast;
 
  scani(TC);
  
   while(TC--){
   
  clr(arr,0);
    rep(i,8){
          rep(j,8){
            scani(arr[i][j]);
          }

    }

       clr(row,0);

  solve(0);
  
  printf("%5d\n",ans);
  ans=0;



   }

  return 0;
}
