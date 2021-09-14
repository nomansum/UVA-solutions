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
int arr[21][21];
  int vis[21][21];
   int n,m;
void  dfs(int x,int y,int &tmp){

     if(!vis[x][y]){vis[x][y]=1;++tmp;}
   

 if((x>=0 && x<n &&  y==m-1 && arr[x][0]==1 && vis[x][0]==0)){dfs(x,0,tmp);}

         else if(x>=0 && y==0 && arr[x][m-1]==1 && vis[x][m-1]==0){dfs(x,m-1,tmp);}
      

     for(int i=0;i<4;++i){
      int u=x+move_xx[i];
      int v=y+move_yy[i];
      

      if(u<0 || u>=n || v<0 || v>=m || arr[u][v]==0 || vis[u][v])continue;
      
      
       dfs(u,v,tmp);
        

     }
    
    
  }

int main(){
 
  while(cin>>n>>m){
  string s;
  memset(arr,0,sizeof(arr));
  memset(vis,0,sizeof(vis));
   std::vector<pair<int,int>> v;
   vector<string>ss(n);
rep(i,n){
  cin>>ss[i];
}
 int st,end,tmp=0; int ans=0;
  cin>>st>>end;
  char ch=ss[st][end];
  rep(i,n){
    
             s=ss[i];
             rep(k,m){
                     if(s[k]==ch){arr[i][k]=1;v.push_back({i,k});}
             }
    
  } 
 
  dfs(st,end,tmp);

for(auto it=v.begin();it!=v.end();++it){
   tmp=0;
    if(!vis[it->first][it->second])dfs(it->first,it->second,tmp);
    ans=max(ans,tmp);

}

cout<<ans<<endl;


}
       
return 0;}
