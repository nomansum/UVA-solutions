                                       //BISMILLAHIR RAHMANIR RAHIM
/*SHIBLI NOMAN SUNNY
UVA::12291
ALGO::NULL
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;
#define     ll          long long 
#define     MP          make_pair
#define     MT          make_tuple 
#define     endl        '\n'
#define     iscanf(a)   scanf("%d",&a)
#define     llscanf(a)  scanf("%lld",&a)
#define     inlp(n)     for(i=n-1;i>=0;i--)
#define     f0(i,n)     for(i=0;i<n;i++)
#define     f1(i,n)     for(i=1;i<=n;++i)
#define     f01(i,n)    for(i=1;i<n;i++)
#define     PB          push_back
#define     IOS         ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define     inout       freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define     mset(arr,n) memset(arr,n,sizeof(arr))
#define     vci         vector<int>
#define     test        int t;cin>>t;while(t--)
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a;}
int knight_x[8]={-2,-2,2,2,1,-1,1,-1};
int knight_y[8]={1,-1,1,-1,2,2,-2,-2};
 int dir_x[4]={1,-1,0,0};
 int dir_y[4]={0,0,1,-1};
ll comp(ll a,ll b){
	if(a>b)return a;
	return b;
}


int main(){

IOS;
int tot=1;
test{

   int a,b,c,d;
   int m,n,i,j,k;
   cin>>n;
   int arr[n][n];
   string s;
   f0(i,n){
   	cin>>s;
   	f0(j,n){
   		arr[i][j]=s[j]-'0';
   	}}
    cin>>m;
    while(m--){
        cin>>s;
        
        if(s[0]=='c'){
         int x,y;cin>>x>>y;x--;y--;
         f0(i,n){
         	swap(arr[i][x],arr[i][y]);
         }


        }
        if(s[0]=='r'){
        	int x,y;cin>>x>>y;x--;y--;
         f0(i,n){
         	swap(arr[x][i],arr[y][i]);
         }


        }
              
        if(s[0]=='i'){
                   f0(i,n){
                   	f0(j,n){
                   		if(arr[i][j]==9)arr[i][j]=0;
                   		else arr[i][j]++;
                   	}
                   }
        }
                if(s[0]=='d'){
                   f0(i,n){
                   	f0(j,n){
                   		if(arr[i][j]==0)arr[i][j]=9;
                   		else arr[i][j]--;
                   	}
                   }
        }
         
        if(s[0]=='t'){
              for(i=0;i<n;i++){
                 for(j=i;j<n;j++){
                 	swap(arr[i][j],arr[j][i]);
                 }
              }
        }
    }
cout<<"Case #"<<tot<<endl;tot++;
f0(i,n){
	f0(j,n){
		cout<<arr[i][j];
	}
	cout<<endl;
}
cout<<endl;
    
}



return 0;}
