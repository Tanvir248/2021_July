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
 ll n, k, num,  cnt =0;
 cin>>n>>k;
 ll add[1000], a;
    for (ll i = 0; i < n; i++)
    {
       cin>>add[i];
    }
    for (ll i = 1; i < n; i++)
    {
        a = add[i];
        if(add[i]+add[i-1]<k){
            add[i]=k-add[i-1];
            cnt += add[i]-a;
        }
        a =0;
    }
    cout<<cnt;
    ed
    for (ll i = 0; i <n; i++)
    {
        cout<<add[i]<<" ";
    }
    ed

}
int main(){
     speed();

       solve();  
     
     return 0;
}