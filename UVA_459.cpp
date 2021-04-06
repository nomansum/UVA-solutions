//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll long long
#define endl '\n'

ll gcd(ll a ,ll b){
  while(b^=a^=b^=a%=b);
  return a;
}

int arr[100];

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}

int find(int a){
   if(arr[a]==a)return a;
   int b=find(arr[a]);
     arr[a]=b;
    return b;
}

void union_find(int a,int b){
             int u=find(a);
             int v=find(b);
             if(u==v)return ;
             arr[u]=v;

}


int main(){
      
 int t,n;
 cin>>t;
 bool fl=false;
 string ss;
 getline(cin,ss);
getline(cin,ss);
 while(t--){
     string s;

int ans=0;
     while(getline(cin,s) && s.length()>0){
     
        if(s.size()==1){
             n=s[0]-'A'+1;
           
             for(int i=0;i<n;++i)arr[i]=i;
              continue;
        }    
          
           
             union_find(s[0]-'A',s[1]-'A');
            
     }

     for(int i=0;i<n;++i)if(arr[i]==i)ans++;

      cout<<ans<<endl;
   
    if(t>=1)cout<<endl;

 }
     
   return 0;
 }

 
