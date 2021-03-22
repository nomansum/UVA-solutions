//Then which of your Lord’s favours will you both deny?

#include<bits/stdc++.h>
using namespace std;
#define in(n) scanf("%d",&n);
#define lin(n) scanf("%lld",&n);
#define ll unsigned  long long
ll gcd(ll a ,ll b){
  while(b^=a^=b^=a%=b);
  return a;
}

string divide(string n, int div) 
{ 

    string ans=""; 
    int idx=0; 
    int tmp=n[idx]-'0'; 
    while (tmp < div) 
        tmp=tmp*10 + (n[++idx]-'0');
    while (n.size()>idx) {  
        ans += (tmp/div) + '0'; 
        tmp = (tmp % div)*10 + n[++idx] - '0'; 
    } 
    if (ans.length()==0) 
        return "0"; 
    return ans; 
} 
string sum(string str1, string str2) 
{ 

    if (str1.length() > str2.length()) 
        swap(str1, str2); 
  
    string str = ""; 
  
   
    int n1 = str1.length(), n2 = str2.length(); 

    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
    
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
  
     
        carry = sum/10; 
    } 
  
 
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if (carry) 
        str.push_back(carry+'0'); 
  
    reverse(str.begin(), str.end()); 
  
    return str; 
} 

int main(){
int n,k;
int t=1;
while(cin>>n>>k){
if(n==0)break;
int m;
string ans="",tmp;
for(int i=0;i<n;++i){
     cin>>tmp;
     ans=sum(ans,tmp);

  }


cout<<"Bill #"<<t<<" "<<"costs"<<" "<<ans<<":"<<" "<<"each"<<" "<<"friend"<<" "<<"should"<<" "<<"pay"<<" "<<divide(ans,k)<<endl;
++t;
cout<<endl;
}
  return 0;

}
