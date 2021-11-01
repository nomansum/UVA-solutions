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
#define MAX_N 1010

int dis[MAX_N][MAX_N];
/*
char P[MAX_N],T[MAX_N]; 
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
int ans=-1;
while (i < n) { 
while (j >= 0 && T[i] != P[j]) j = b[j]; 
i++; j++; 
 ans=max(ans,j);
}
return ans;

}*/

void dp(vector<string>&t,vector<string>&l,int ti,int li){

   for(int i=0;i<=ti;++i){
           for(int j=0;j<=li;++j){

            if(i==0 || j==0)dis[i][j]=0;
                            
           else  if(t[i-1]==l[j-1])dis[i][j]=dis[i-1][j-1]+1;
              else dis[i][j]=max(dis[i-1][j],dis[i][j-1]);

           }
   }

}

void printlcs(vector<string>&t,vector<string>&l,int ti,int li){
   vector< string > ans;

   int i=ti,j=li;
 
 while(i>0 && j>0){
        
        if(t[i-1]==l[j-1]){
         ans.pb(t[i-1]);
         --i;--j;
        }
        else if(dis[i-1][j]>dis[i][j-1]) --i;
        else --j;

 }
      
for(int i=ans.size()-1;i>=0;--i){
   cout<<ans[i]<<" \n"[i==0];
}



}





int  main(){
    
   string s,ss;
   vector<string> t,l;

   while(!cin.eof()){
      while(cin>>s){
         if(s!="#")t.pb(s);

         else {
            while(cin>>s){
               if(s!="#")l.pb(s);
               else break;
            }
            if(s=="#")break;
         }
         
               }

    int n=t.size(),m=l.size();
    memset(dis,0,sizeof(dis));
    dp(t,l,n,m);
    printlcs(t,l,n,m);
    /* 
     for(int i=0;i<=n;++i){
      for(int j=0;j<=n;++j){
         cout<<dis[i][j]<<" ";

               }
               cout<<endl;
     }
cout<<endl;

for(auto it:t)cout<<it<<" ";
   cout<<endl;
     
     for(auto it:l)cout<<it<<" ";
   cout<<endl;
*/


    t.clear();l.clear();


   } 

   return 0;
}
