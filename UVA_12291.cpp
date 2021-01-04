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
#include <iomanip>
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
double pi=2*acos(0.0);
ll gcd(ll a,ll b){ while(b^=a^=b^=a%=b); return a;}
int knight_x[8]={-2,-2,2,2,1,-1,1,-1};
int knight_y[8]={1,-1,1,-1,2,2,-2,-2};
 int dir_x[4]={1,-1,0,0};
 int dir_y[4]={0,0,1,-1};
ll comp(ll a,ll b){
  if(a>b)return a;
  return b;
}
ll power(ll n,ll k){
    if(k==0)return 1;
   return n*power(n,k-1);
}
ll neg(ll n){
   if(n<0)return n*-1;
   else return n;
}

int main(){


while(true){
	int n,m;
cin>>n>>m;
int i,j;
if(n==0 && m==0)break;
int arr[n][n];
int arr1 [m][m];
int fl[n][n];
int stcnt=0;
memset(fl,0,sizeof(fl));
string s;
for(i=0;i<n;i++){
	cin>>s;
	for(j=0;j<n;j++){
		if(s[j]=='.')arr[i][j]=0;
		else {arr[i][j]=1;}
	}
}
for(i=0;i<m;i++){
	cin>>s;
	for(j=0;j<m;j++){
		if(s[j]=='.')arr1[i][j]=0;
		else arr1[i][j]=1;
	}
}
int trac[109];int cnt=0;
for(i=0;i<m;i++){
	for(j=0;j<m;j++){
		if(arr1[i][j]==1){trac[cnt++]=i;trac[cnt++]=j;}
	}
}
bool flag =false;
for(i=0;i<n;i++){

   for(j=0;j<n;j++){
             
             if(arr[i][j]==1){
             	if(fl[i][j]==1)continue;
             	int a=i,b=j;
              stcnt++;
             	for(int k=0;k<cnt;k+=2){
                         if(k==0){
                         	 if(a>=n || b>=n || fl[a][b]==1){
                             	flag=true;break;
                             }
                             fl[a][b]=1;
                             continue;


                         }
                          
                          a+=trac[k]-trac[k-2];
                          b+=trac[k+1]-trac[k-1];
                             if(a>=n || b>=n || fl[a][b]==1){
                             	flag=true;break;
                             }
                             fl[a][b]=1;
                           
                            
             	}
             	if(flag)break;
             } 
             if(flag)break;         
                   
   }
   if(flag)break;
}



for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(arr[i][j]!=fl[i][j]){flag=true;break;}
	}
	if(flag)break;
}
if (stcnt!=2){cout<<"0"<<endl;continue;}

if(flag)cout<<"0"<<endl;
else cout<<"1"<<endl;



}




	return 0;
}




