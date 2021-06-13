#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100000000000000009
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
int v[501][501];
int find_index(int i,int n,int st,int end){
            
         int mid=(st+end)/2;
         int index;
         while(st<=end){
              mid=(st+end)/2;

              if(v[i][mid]>=n){end=mid-1;index=mid;}
              else st=mid+1;



         }
     
        return v[i][index]>=n?index:-1; 
}
int main(){
 int n,m;
 while(scanf("%d %d",&n,&m) && n && m){
    
int i,j,c,d;

for(i=1;i<=n;++i){
     for(j=1;j<=m;++j){
           scanf("%d",&v[i][j]);
          
     }
}

int q,col,row;
scanf("%d",&q);
int l,r;
for(i=0;i<q;++i){
     
  scanf("%d %d",&l,&r);
  d=0;
    for(j=1;j<=n;++j){
      c=find_index(j,l,1,m);

      if(c==-1)continue;

      for(int k=d;k<=n;++k){
          if(j+k>n || c+k>m || v[j+k][c+k]>r)continue;

          if(k+1>d)d=k+1;

      }     
                
    }
  printf("%d\n", d);

}
       printf("-\n");



 }
 return 0;

}
