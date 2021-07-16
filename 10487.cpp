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


int main(){
int n;
int t=1;
while(cin>>n && n){

int arr[n];
rep(i,n){cin>>arr[i];}
sort(arr,arr+n);
int q;
cin>>q;
cout<<"Case "<<t<<":\n";
t++;
rep(i,q){
   int m,tmp=100000009,ans=0;
   cin>>m;
   rep(j,n){
       

       for(int k=j+1;k<n;++k){
       
        if(abs(arr[j]+arr[k]-m)<tmp){
            ans=arr[j]+arr[k];
            tmp=abs(arr[j]+arr[k]-m);
        }
       


       }

   }
   cout<<"Closest sum to "<<m<<" is "<<ans<<".\n";

}



}


return 0;

}
