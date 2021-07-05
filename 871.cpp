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
#define MAXN 29
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
int arr[MAXN][MAXN];
int vis[MAXN][MAXN];
int ans=0;

void dfs(int x,int y,int n,int m,int &tmp){
    
    if(vis[x][y]){return;}

     vis[x][y]=1;

  for(int i=0;i<8;++i){

     int xx=x+move_x[i];

     int yy=y+move_y[i];

     if(xx<0 || yy<0 || xx>=n || yy>=m ||  vis[xx][yy]==1 || arr[xx][yy]==0)continue;

      tmp++;

     dfs(xx,yy,n,m,tmp);


  }  
  
  ans=max(ans,tmp);

}






int main(){
int t;
cin>>t;
bool fl=true;

while(t--){

string s;


   ans=0;
  if(fl){ getline(cin,s);
  getline(cin,s);
   fl=false;
}
ms(arr,0);
ms(vis,0);
int i=0;
int n,m;
   vector<pair<int,int>>one;

while(getline(cin,s)){
   if(s=="")break;
   n=s.size();
   rep(j,n){
       if(s[j]=='1'){arr[i][j]=1;one.pb({i,j});}  

   }
   ++i;

}
m=i;

vector<pair<int,int>>::iterator it=one.begin();

for(;it!=one.end();++it){
   int tmp=1;
   dfs(it->first,it->second,m,n,tmp);


}
cout<<ans<<"\n";

if(t>=1)cout<<"\n";






}

    return 0;
}
