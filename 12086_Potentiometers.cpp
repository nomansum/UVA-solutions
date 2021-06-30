          //Then which of your Lord’s favours will you both deny?
     
//BIT/FENWICK TREE 1 BASED IMPLEMENTATION

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
#define MAXN 200009
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

int fenwicktree[MAXN];

void insert(int x,int val,int n){
    for(;x<=n;x+=(x&(-x))){
        fenwicktree[x]+=val;
    }
}
 
 int find(int r){
    
    int sum=0;
    for(;r>0;r-=(r&(-r))){
        sum+=fenwicktree[r];
    }
    return sum;
 }
void init(int n){
    fenwicktree[0]=0;
    For(i,n)fenwicktree[i]=0;
}

int main(){

fast;
 int t=1;
int n;
while(cin>>n){
     init(n);
     if(n==0)break;
     if(t!=1)cout<<"\n";
     int arr[n+1];
  int ans,tmp;
   For(i,n){cin>>arr[i];insert(i,arr[i],n);}

string s="s";
cout<<"Case "<<t<<":\n";
++t;
while(s!="END"){
    int i,j;
   cin>>s;
   if(s=="M" || s=="S"){
    cin>>i>>j;
        
   if(s=="M"){
    --i;
    cout<<find(j)-find(i)<<"\n";}
   else {
                
        insert(i,j-arr[i],n);
        arr[i]=j;

      }


   }
   
   
}




} 
return 0;
}
