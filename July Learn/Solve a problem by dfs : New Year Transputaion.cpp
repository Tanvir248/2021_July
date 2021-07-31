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
const int N = int(100010);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
vi add[N];
bool vis[N];
void dfs(int source){   
  vis[source]=1;
    for (ll i = 0; i < add[source].sz; i++)
    {
        ll next = add[source][i];
        if(vis[next]==0){
            dfs(next);
        }
    }
    
}
int main(){
     speed();
 //freopen("input.txt", "r", stdin);
 ll n, e;
 cin>>n>>e;
 for (ll i = 1; i < n; i++)
 {
     ll val;
     cin>>val;
     add[i].pb(i+val);
 }
 dfs(1);
 if(vis[e]==1){
     yes
 }else
 no
    
     return 0;
}