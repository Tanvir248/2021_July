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
void solve(){   

 //freopen("input.txt", "r", stdin);
  ls s1, s2;
  cin>>s1>>s2;
  ll cnts1 =0, cnts2 = 0, cntunr =0;

  for (ll i = 0; i < s1.sz; i++){
      if(s1[i]=='+'){
        cnts1++;
      }
      if(s2[i]=='+'){
          cnts2++;
      }else if(s2[i]=='?'){
            cntunr++;
      }
  }
  ll ans=0;
  for (ll i = 0; i < (1<<cntunr); i++){
      if(__builtin_popcount(i)+cnts2==cnts1){
          ans++;
      }
  }
  cout<<fixed<<setprecision(12)<<(double)ans/(1<<cntunr)<<endl;
}
int main(){
     speed();

       solve();  
     
     return 0;
}