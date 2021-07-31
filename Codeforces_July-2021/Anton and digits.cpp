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
ll solve(ll k2,ll k3,ll k5,ll k6){   
  
   ll n256 = min(k2, min(k5, k6));
	ll n32 = min(k3, k2 - n256);
    
    return 32 * n32 + 256 * n256;
}
int main(){
     speed();
    int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
       cout<<solve(k2, k3, k5, k6);  
     end
     return 0;
}