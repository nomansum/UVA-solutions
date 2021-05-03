//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n)
#define dualin(x,y) scanf("%d %d",&x,&y)
#define lin(n) scanf("%lld",&n)
#define ll long long

ll arr[1000010];

int main(){

      ll n;
       while(~lin(n)){
        
          ll i,j,zero,c=0,tmp=0;
          for(i=0;i<=n;++i)arr[i]=0;
          bool fl=false;
             for(i=1;;++i){

                  tmp=(tmp*10+3)%n;
                   c=tmp;
                   zero=0;
                   while(true){
                         
                         if(c==0){fl=true;break;}
                         c=(c*10)%n;
                          if(arr[c]==1)break;
                              arr[c]=1;
                              zero++;

                   }
                   if(fl)break;
  

             }

         printf("%lld %lld %lld\n",zero+i,i,zero );
    }
   


  return 0;
}

