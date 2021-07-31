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
ll solve(ll a){   
   //freopen("input.txt", "r", stdin);
   ll num, prev=-1;
   lln ans =0; 
   for (ll i = 0; i < a; i++)
   {
     cin>>num;
     if(num==1){
       if(prev == -1){
         ans =1;
       }else{
         ans *= i-prev; 
       }
       prev =i;
     }
   }
   return ans;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
          lln n;
          cin>>n;
      cout<< solve(n) <<endl;  
     
     return 0;
}