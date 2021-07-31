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
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  ll a, b, c,d;
  cin>>a>>b>>c>>d;
  ll ans1 , ans2;
  if(b*c>=a*d){
      ans1 = (b*c)-(a*d);
      ans2 = (b*c);
  }else{
      ans1 = (a*d)-(b*c);
      ans2 =(a*d);
  }
    ll ans =gcd(ans1, ans2);
    printf("%d/%d\n", ans1/ans, ans2/ans);
}
int main(){
     speed();

       solve();  
     
     return 0;
}