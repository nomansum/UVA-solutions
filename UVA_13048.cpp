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

int parent[50009],weight[50009];

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}

int find(int a){
   if(parent[a]==a)return a;
  return parent[a]=find(parent[a]);
}

void union_find(int a,int b){
             int u=find(a);
             int v=find(b);
            if(u!=v){
              if(weight[u]<weight[v])swap(u,v);
              parent[v]=u;
              weight[u]+=weight[v];
              cout<<weight[u]<<"\n";
            }
            else cout<<weight[u]<<"\n";

}
void init(){
  for(int i=0;i<50009;++i){
    weight[i]=1;
    parent[i]=i;
  }
}

int main(){
    int t,c=1;
    cin>>t;
    unordered_map<char,int>after,before;
    after['S']=1;
    before['B']=2;
    before['S']=1;

    while(t--){
             int ans=0,n,i,j,tmp=0;
             char back,forw;
           string s;
           cin>>s;
           n=s.size();
           i=0;
           while(i<n && s[i]!='B' && s[i]!='S' && s[i]!='D'){
            ++i;
            tmp++;
           }

           if(i!=n){back=s[i];
                     tmp-=before[back];}

           if(i+1<n && s[i]=='D' && s[i+1]=='B')tmp--;
        
           ans+=(tmp>0)?tmp:0;
           
        tmp=0;
           for(++i;i<n;++i){
                 if(s[i]=='B' || s[i]=='S' || s[i]=='D'){
                   tmp-=(after[back]+before[s[i]]);
                    if(i+1<n && s[i]=='D' && s[i+1]=='B')tmp--;
                   ans+=(tmp>0)?tmp:0;
                   tmp=0;
                  
                   back=s[i];                      
                 }
                 else tmp++;
           }
           if(tmp!=0){
            tmp-=after[back];
            ans+=(tmp>0)?tmp:0;

           }
            cout<<"Case "<<c<<": "<<ans<<"\n";
            c++; 
                  
                 
    }              
return 0;
      }


