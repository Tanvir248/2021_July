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
const int N = int(1e5 + 3);
ll a, b, c, x, y, z;
void input(){
  freopen("input.txt","r", stdin);
  
  cin>>x>>y>>z>>a>>b>>c;
}
void solve(){   
   if(x>a){
     no
     return;
   }else if(x+y>a+b){
     no 
     return;
   }else if(x+y+z>a+b+c){
     no
     return;
   }
   yes
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
          input();
       solve();  
     
     return 0;
}