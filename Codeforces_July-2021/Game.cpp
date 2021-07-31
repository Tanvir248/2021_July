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
#define SZ 105
const int N = int(1e5 + 3);
string solve(ll a, ll b){   
   ls s1 = "First";
	ls s2="Second";
   if(a>b){
	   return s1;
   }else{
	   return s2;
   }
   
   }
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
		  //freopen("input.txt", "r", stdin);
		  ll n1, n2,k1, k2;
		  cin>>n1>>n2>>k1>>k2;
		  cout<<solve(n1,n2)<<endl;  
     
	 
}