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
ll solve(ll n){   
  if(n==0){
  //return 0;
  return n;
  
  }
  cout<<n<<" ";
  return n+solve(n-1);
  
  }
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
          ll n, sum =0;//n=4
          cin>>n;
       cout<<solve(n)<<endl;  
     
     return 0;
}