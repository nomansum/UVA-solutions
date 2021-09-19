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
int n,m;
int vis[1000003],par[1000003];
void bfs(vector<vector<int>> &adj, int st,int end){
     vis[st]=1;
     queue<int>q;
     q.push(st);
         
     while(!q.empty()){
         int u,v;
         u=q.front();
         q.pop();
        
         rep(i,adj[u].size()){
              v=adj[u][i];
              if(!vis[v]){
                vis[v]=1;
                q.push(v);
                par[v]=u;
              }
         }
     }    
  }


int main(){
int t=0;

while(cin>>n){

   if(t!=0){cout<<endl;}
   ++t;
 unordered_map< string , int >mp;
           string s,ss;
           int cnt=1;
           vector<string>v;
           v.push_back("d");
           vector<vector<int>>adj(2*n+1);
     for(int i=0;i<n;++i){
            cin>>s>>ss;
                          
           if(mp[s]==0){mp[s]=cnt;v.push_back(s);cnt++;}
           if(mp[ss]==0){mp[ss]=cnt;v.push_back(ss);cnt++;}
          adj[mp[s]].push_back(mp[ss]);
          adj[mp[ss]].push_back(mp[s]); 
        
     }        
 
    int st,end;
    cin>>s>>ss;
    if(mp[s]==0 || mp[ss]==0){
      cout<<"No route\n";
      continue;
    }

    st=mp[s];end=mp[ss];
           

   memset(vis,0,sizeof(vis));
   memset(par,-1,sizeof(par)); 
   bfs(adj,st,end);         
    vector<int>ans;
    int cntt=1;
    ans.push_back(end);
    while(par[end]!=-1){
      ans.push_back(par[end]);
      end=par[end];
      cntt++;
    }
    if(vis[end]){
    for(int i=cntt-1;i>=1;--i){

        cout<<v[ans[i]]<<" "<<v[ans[i-1]]<<endl;
    }   
             }

     else cout<<"No route"<<endl;        
       
} 


return 0;}
