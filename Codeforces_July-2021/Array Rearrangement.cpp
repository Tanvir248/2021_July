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
 //#define end cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ls solve(ll n, ll x){   
   //freopen("input.txt", "r", stdin);
   vi add1, add2;
   ll num1, num2;
   ls s1="YES";
   ls s2 = "NO";
   for (ll i = 0; i < n; i++)
   {
     cin>>num1;
     add1.pb(num1);
   }
   for (ll i = 0; i < n; i++)
   {
     
     cin>>num2;
     add2.pb(num2);
   }
   bool flag =false;
   sort(add1.B, add1.E);
   sort(add2.B, add2.E,greater<int>());
   for (ll i = 0; i < n; i++)
   {
     if(add1[i]+add2[i]>x){
        flag = true;
     break;
     }
   }
   if(flag){
     return s2;
   }else 
     return s1;
}
int main(){
     speed();
ll t;
cin>>t;
while (t--)
{
   ll a, b;
   cin>>a>>b;
     cout<<solve(a, b)<<endl;  
    
}

     
     return 0;
}