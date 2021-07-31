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
#define yes cout<<"A";
 #define no cout<<"G";
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll egg;
void solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  ll x , y, sum =0;
   for (ll i = 0; i < egg; i++)
   {
	   cin>>x>>y;
	   if(sum+x<=500){
		   yes
		   sum+=x;
	   }else{
		   no
		   sum-=y;
	   }
   }
   ed
}
int main(){
     speed();
cin>>egg;
       solve();  
     
     return 0;
}