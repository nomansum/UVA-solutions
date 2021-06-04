#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 100000000000000009
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
ll ans[10000006],cnt=0;

void solve(){

   ll two=1,three=1;

   for(ll i=0;i<32;++i){

        if(two>=1 && two<=MAXN) ans[cnt++]=two;

      for(ll j=0;j<32;++j){
       ll tmp=two*three;

       if(tmp>=1 && tmp<=MAXN) ans[cnt++]=tmp;

            three*=1ll*3;

      }
      three=3;
      two*=1ll*2;


   }


}
ll find_index(ll n,ll st,ll end){
            
         ll mid=(st+end)/2;
         ll index;
         while(st<=end){
              mid=(st+end)/2;

              if(ans[mid]>=n){end=mid-1;index=mid;}
              else st=mid+1;



         }

        return index; 
}

int main(){
     ll n;
     solve();
  sort(ans,ans+cnt);
     while(~scanf("%lld",&n)){
       if(n==0)break;

       printf("%lld\n",ans[find_index(n,0,cnt)]);


     }
return 0;

}
