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
const int mod = int(1e9 + 7);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln solve(lln n){   
   //freopen("output.txt", "w", stdout);
   lln a=1;
   for (lln i = 0; i < 3*n; i++)
   {
        a= (a*3)%mod;
   }lln b=1;
   for (lln i = 0; i < n; i++)
   {
        b =(b*7)%mod;
   }
   return (a-b+mod)%mod;
   
}
int main(){
     speed();
      //freopen("input.txt", "r", stdin);
  
     lln a;
     cin>>a;
      cout<< solve(a);  
     ed
     return 0;
}