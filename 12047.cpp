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
using namespace std;
#define  mp make_pair
#define pb push_back
#define nline "\n"
typedef long long ll;
#define MAXN 1000009
#define vec(i) vector<i>
#define scanstr(s) scanf("%s",s)
#define scanint(n) scanf("%d",&n)
#define scanll(n) scanf("%lld",&n)
#define scandll(n,m) scanf("%lld %lld",&n,&m)
#define scanfloat(n) scanf("%lf",&n)
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
#define MAX_N 30010

int dist[2][MAX_N];

void dijkstra(int st, vector<vector<pair<int,int>>> &adj,int fl){

    int u,c,v;
  
   dist[fl][st]=0;

   priority_queue<pair<int,int>>pq;
   pq.push({0,st});
   while(!pq.empty()){

         int u=pq.top().second;
         int c=-pq.top().first;
            pq.pop();
         for(int i=0;i<adj[u].size();++i){
          v=adj[u][i].first;
                if(dist[fl][v]>c+adj[u][i].second){
               
                  dist[fl][v]=c+adj[u][i].second;
                  pq.push({-dist[fl][v],v});
                }

         }

 
   }

}

int main(){
   int t;
   cin>>t;
   while(t--){
   int n,m,st,end,p;
  cin>>n>>m>>st>>end>>p;
    vector<vector<pair<int,int>>> adj(n+1),radj(n+1);
       int x,y,z;

    rep(i,m){
      cin>>x>>y>>z;

      adj[x].pb({y,z});
      radj[y].pb({x,z});


    }
    
  rep(i,2){
    rep(j,MAX_N)dist[i][j]=1e8;
  }
   int fl=0;

   dijkstra(st,adj,0);
   dijkstra(end,radj,1);
  int ans=-1;
        
     
for(int i=1;i<=n;++i){

   for(int j=0;j<adj[i].size();++j){
   
        pair<int,int> u=adj[i][j];

      if(dist[0][i]+dist[1][u.first]+u.second<=p){

              ans=max(ans,u.second);
     }

   }

}


   cout<<ans<<nline;  
     
   }
  return 0;
}
