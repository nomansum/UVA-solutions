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
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back
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
int vis[20000],mark[20000],trac[10001];
   int n,m;
  int solve(vector<vector<int>> &adj,int st){
        int u;
        int r=0;
        vis[st]=1;
       
        int cnt;
        queue<pair<int,int>>q;
        q.push({st,0});
      
        int tmp=0;
        while(!q.empty()){
             u=q.front().first;
             
              cnt=q.front().second;
              q.pop();
           

             rep(i,adj[u].size()){
              int v=adj[u][i];
                   if(!vis[v]){
                    vis[v]=1;
                    q.push({v,cnt+1});
                    if(trac[v])r+=cnt+1;
                   }

             } 

        }   
      
   
        return r;
  }


int main(){

   int t;
   cin>>t;
   while(t--){
      
       cin>>n>>m;
       vector<vector<int>>adj(n+1);
       vector<int>v;
       int cnt=0;
       int x,y;
       memset(vis,0,sizeof(vis));
       memset(mark,0,sizeof(mark));
       memset(trac,0,sizeof(trac));
       rep(i,m){
           int x,y;
           cin>>x;
            mark[x]++;
            if(mark[x]>1 && x!=0){v.pb(x);cnt++;}
           if(x!=0){
            while(cin>>y){
              if(y==0)break;
              mark[y]++;
               adj[x].pb(y);
               adj[y].pb(x);
               if(mark[y]>1){v.pb(y);cnt++;}
               x=y;
              
            }
           }  
       }  
       int ans=100001;
       int mincost=100001;

    rep(i,cnt)trac[v[i]]=1;

      rep(i,cnt){
            int a=v[i];
           if(mark[a]){
            memset(vis,0,sizeof(vis));
          
              mark[a]=0;
          int tmp=solve(adj,a);
          
             if((tmp<mincost)||(tmp==mincost && ans>a)){ans=a;mincost=tmp;}
             
           }
      }
  cout<<"Krochanska is in: "<<ans<<endl;


   }
return 0;}
