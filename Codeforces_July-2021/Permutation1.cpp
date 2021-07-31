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
}   set<int>st;
ll solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   ll n, num;
 
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin>>num;
        st.insert(num);
    }
    ll x =0;
     x = st.sz;
    if(x==1){
    x--;
    }
    return n-x;
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}