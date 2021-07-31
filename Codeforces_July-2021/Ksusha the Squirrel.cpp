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
ls solve(ll a, ll b){   
   ll cnt =0;
   ls s;
   cin>>s;
   for (ll i = 0; i < s.sz; i++)
   {
       if(s[i]=='#'){
           cnt++;
       } else
            cnt=0;

        if(cnt>=b)
        {
            return "NO";
            }
   } 
    return "YES";
}
int main(){
     speed();
    ll n, k;
    cin>>n>>k;
       cout<<solve(n, k);  
     end
     return 0;
}