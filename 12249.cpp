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
int vis[11][20],arr[11][20],ans[11][20];
string solve(string s,string ss){
   int n=s.size();
   int m=ss.size();
   int  idx=-1,maxidx=-1,minidx=-1;
     int maxx=0;
  for(int i=0;i<n;++i){
    int tmp=0;
    int j=i,k=0;
    while(j<n && k<m){
       if(s[j]==ss[k])tmp++;
       else break;
            j++;
            k++;       
    }
    if(tmp>maxx && j==n){
      maxx=tmp;
      idx=i;
    }


  }
    if(idx==-1)return s+ss;
    else {
       int i=0;
       string ans="";
       for(;i<idx;++i)ans+=s[i];

       for(i=0;i<m;++i)ans+=ss[i];

       return ans;    

         

  }

}

int main(){
   fast;
   int c=1;
   int t;
   cin>>t;
   while(t--){
    int arr[6]={0,1,2,3,4,5};
      int n;
      cin>>n;
      vector<string>v;
      string s;
      rep(i,n){
        cin>>s;
        v.pb(s);       
            }
            int ans=54545454;
    do{
         string tmp="";

          rep(i,n){
            tmp=solve(tmp,v[arr[i]]);
          } 
       int sf=tmp.size();
     if(sf<ans)ans=sf;
    }while(next_permutation(arr,arr+n));
       
        cout<<"Case "<<c<<": "<<ans<<"\n";
        c++;


      }
  return 0;
}
