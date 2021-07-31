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
const int N = int(1e5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll arr[N];
ll solve(ll n){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   ll num, ans = 2;
 
    for(ll i = 1; i<=n; i++){
    cin>>num;
    arr[num] = i;
    if(arr[num-1] > arr[num+1])
        ans = max(ans,i-max(arr[num+1],arr[num-2]));
    else
        ans = max(ans,i-max(arr[num+2],arr[num-1]));
    }
   return ans;
}
int main(){
     speed();
ll a;
cin>>a;
cout<<solve(a);
  ed
     return 0;
}