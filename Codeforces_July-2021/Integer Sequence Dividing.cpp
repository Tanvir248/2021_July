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
int solve(ll a){   
   //freopen("input.txt", "r", stdin);
   if (a == 0 || a == 3) {
		return 0;
	} else {
		return 1;
	}
	
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
   ll n;
	cin >> n;
	n %= 4;
	
       cout<<solve(n)<<endl;  
     
     return 0;
}