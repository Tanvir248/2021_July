#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define end cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll a[11];
void solve(){   
//freopen("input.txt", "r", stdin);
  ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      string s;
      cin>>n>>s;
      for( i=0;i<n;i++)
      {
          if(s[i]=='L'){
            cnt=0;
            for(j=0;j<10; j++){
               if(a[j]==0)cnt++,a[j]=1;     
               if(cnt==1)break;
                }}
          else if(s[i]=='R') {
            cnt=0; for(j=9;j>=0;j--){
              if(a[j]==0)cnt++,a[j]=1;  
              if(cnt==1)break;
              }}
          else  a[s[i]-'0']=0;

          //fr(i,10)cout<<a[i]; pn;
      }
      for(i=0; i<10; i++)cout<<a[i];

  end
}
int main(){
     speed();

       solve();  
     
     return 0;
}