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
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
lln arr[101][101];
 ll num, ans=0, sum =0;
  for (ll i = 0; i < 3; i++)
  {
      for (ll j = 0; j < 3; j++)
      {
        cin>>arr[i][j];
        sum+= arr[i][j];
      }
          
  }
  ll x = sum/2;
  arr[0][0]=x-arr[0][1]-arr[0][2];
  arr[1][1]=x-arr[1][0]-arr[1][2];
    arr[2][2]=x-arr[2][0]-arr[2][1];
  
   for (ll i = 0; i < 3; i++)
  {
      for (ll j = 0; j < 3; j++)
      {
        cout<<arr[i][j]<<" ";
      }
          ed
  }
}
int main(){
     speed();

       solve();  
     
     return 0;
}