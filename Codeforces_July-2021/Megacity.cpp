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
#define mi map<ld, ld>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e6 + 0);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ld n,num;
void solve(){   
   //freopen("input.txt", "r", stdin);
   mi add;
   cin>>n>>num;
   for (ll i = 0; i < n; i++)
   {
        ld a, b, c;
        cin>>a>>b>>c;
        add[a*a+b*b]+=c;
   }
     for (auto&it:add)
     {
          num+=it.second;
          if(num>=N){
               cout<<fixed<<setprecision(7)<<sqrt(it.first);
               ed
               return;
          }

     }
   cout<<-1<<endl;
}
int main(){
     speed();
     solve();
     return 0;
}