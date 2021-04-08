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

int arr[100000];

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
      int t;
      in(t);
      int c=1;
      while(t--){
           
           int i,j,n,count=0,different_numbers=0,p;
           in(n);

           memset(arr,0,sizeof(arr));
           vector<vector<int>>v(n);
            vector<int>host;
            for(i=0;i<n;++i){
              in(j);
              count=0;
              set<int>st;
              for(int k=0;k<j;++k){
                in(p);
                st.insert(p);
              }
              for(auto it=st.begin();it!=st.end();++it){
                arr[*it]++;
                v[i].push_back(*it);
                count++;
              }
              host.push_back(count);
            } 
            vector<double>ans;
            for(i=1;i<=10000;++i){if(arr[i]==1)different_numbers++;}
              double f=(1.00/(different_numbers*1.00));
            for(i=0;i<n;++i){
                for(j=0;j<v[i].size();j++){
                  if(arr[v[i][j]]>1)host[i]--;

                }
                ans.push_back(f*100.00*host[i]);

            }
     printf("Case %d: ",c);c++;
     if(different_numbers==0){printf("\n");continue;}
     for(i=0;i<ans.size();++i){
      printf("%lf%%",ans[i]);
      if(i==n-1)printf("\n");
      else printf(" ");
     }
            
           
      }

return 0;
      }
