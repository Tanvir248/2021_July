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
 #define end cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
    ll n; ll m;
    cin>>n>>m;
    map <ls,ls> mp;
    for(int i=0;i<m;i++)
    {
        ls s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
    }
    for(int i=0;i<n;i++)
    {
        ls x, y;
        cin>>x;
        y=mp[x];
        if(y.sz<x.sz)
            cout<<y<<" ";
        else
            cout<<x<<" ";
    }

}
int main(){
     speed();

    solve();  


      
     end
     return 0;
}