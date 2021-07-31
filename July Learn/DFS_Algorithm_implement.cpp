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
vi add[N];
bool visited[N];
void dfs(ll soutrce){   
  visited[soutrce]= 1;
  for (ll i = 0; i < add[soutrce].sz; i++)
  {
      ll next = add[soutrce][i];
      if(visited[next]==0){
      dfs(next);
      }
  }
   
  
}
int main(){
     speed();
//freopen("input.txt", "r", stdin);
       ll node, edge;
       cin>>node>>edge;
       for(ll i =0; i<edge; i++){
           ll u, v;
           cin>>u>>v;
           add[u].pb(v);
           add[v].pb(u);
       }
       dfs(0);
       for (ll i = 0; i <node; i++)
       {
           if(visited[i]==1){
               cout<<i<<" is visited"<<endl;
           }else {
               cout<<i<<" is not visited"<<endl;
           }
       }
       
     return 0;
}
// Input
/*5 5
0 1
5 2
1 0
0 1
0 5
0 is visited
1 is visited
2 is visited
3 is not visited
4 is not visited*/