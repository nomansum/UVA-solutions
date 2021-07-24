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

int  findsimilarity(string &s,string &ss){
        int len1=s.size(),len2=ss.size();
          int ans=0;
        for (int i = 0; i <= len1-len2; ++i)
        {
            int tot=0;
              for (int j = 0; j < len2; ++j)
              {
                     if(s[j+i]==ss[j])tot++;


              }
              ans=max(ans,tot);


        }

return ans;

}




int main(){
int n,m;
cin>>n>>m;
std::vector<string> v(n);
for (int i = 0; i < n; ++i)
{
  cin>>v[i];
}
for (int i = 0; i < m; ++i)
{
   
    string s;
    cin>>s;
    int len=s.size();
    
    int idx=-1,ans=0,tmp=0;
    for(int j=0;j<n;++j){

        int tmplen=v[j].size();
      
   if(tmplen>=len){ tmp=findsimilarity(v[j],s);
         if(tmp>ans){
          ans=tmp;
          idx=j;
         }

                  }           
                }
   

    

cout<<idx+1<<endl;
    


}


return 0;

}
