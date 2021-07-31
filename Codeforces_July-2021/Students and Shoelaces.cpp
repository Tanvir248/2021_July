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
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 int cnt =0;
const int N = int(1e5 + 3);
// void solve(){   
//    //freopen("input.txt", "r", stdin);
//    ll n, num;
//     // cin>>n;
//     // vi add;

// }
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
      cout.tie(0);
   freopen("input.txt", "r", stdin);
    ll node, edge;
    cin>>node>>edge;
    ll a, b;
    vi add[101];
    for (ll i = 0; i < edge; i++)
    {
        cin>>a;
        cin>>b;
        add[a].eb(b);
        add[b].eb(a);
    }
    
    
     while (true){
       bool flag = false;
        vi ans;
        for (ll i = 1; i <= node; i++)
        {
            if(add[i].sz==1){
                flag = true;
                ans.pb(i);
                add[i].clear();
            }
        }
        if(flag==false){
            break;
        }
        for (ll i = 0; i <ans.sz; i++){
            for(ll j=1; j<=node;j++){
                for(ll k =0; k<add[j].sz; k++){
                   // cout<<add[j][k]<<" ";
                    if(add[j][k]== ans[i]){
                        add[j].erase(add[j].begin()+k);
                    }
                }
            }
        }
        
        cnt++;
     }
     
    cout<<cnt<<endl;
     return 0;
}