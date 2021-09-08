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
ll arr[10001][21];
  int vis[27];

int main(){
   
  string s;
  int ans=0,n,m,cnt=0,lenmax=0;
   memset(arr,-1,sizeof(arr));
    while(cin>>s){
      if(s=="#")break;
      n=s.size();
      lenmax=max(n,lenmax);
      rep(i,n){
        arr[cnt][i]=s[i]-'A';
      }
      cnt++;
    }
     
    rep(i,lenmax){
     rep(j,cnt){
           if(arr[j][i]!=-1 && vis[arr[j][i]]!=1){
            cout<<(char)(arr[j][i]+'A');
            vis[arr[j][i]]=1;
           }

     }


    } 

     
     cout<<endl;  
        
       
return 0;}
