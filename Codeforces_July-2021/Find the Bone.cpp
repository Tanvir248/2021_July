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
const int N = int(1e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll arr[N], n, m, k;;
ll solve(){   
  //freopen("input.txt", "r", stdin);
 
    for(int i=0; i<m; i++){
        int h;
        cin>>h;
        arr[h] = 1;
    }
    ll ans =1;
    for(int i=0; i<k; i++){
        int u, v;
        cin>>u>>v;
        if(u == ans && (!arr[u])) {
            ans = v;
            }
        else if(v == ans && (!arr[v])) {
            ans = u;
    }
    }
   return ans;
}
int main(){
     speed();
    cin>>n>>m>>k;
cout<<solve();  
     ed
     return 0;
}