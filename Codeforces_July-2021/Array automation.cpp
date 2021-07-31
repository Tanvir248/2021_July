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
    freopen("input.txt","r", stdin);
 ls s1, s2, x, y;
 cin>>s1>>s2;
    ll len1 = 0, len2 =0;
    set<string>st1, st2;

    // for(ll i = 0;i<s1.sz; i++){
    //     st1.insert(s1[i]);
    // }
    // for(ll i =0;i<s1.sz; i++){
    //     st1.insert(s1[i]);
    // }

    if(s1.sz>s2.sz){
        len1 = s1.sz;
        len2 = s2.sz;
        x = s1;
        y = s2;
    }else{
        len1 = s2.sz;
        len2 = s1.sz;
        x =s2;
        y = s1;
    }
    cout<<x<<" ";
    bool flag = false;
    for (ll i = 0; i < len1; i++)
    {
        for(ll j =0;j<len2; j++){
                if(x[i] != y[j]){
                    flag = true;
                }
                //cout<<y[j]<<" ";
        }
    }
    if(flag==false){
        cout<<s1<<" "<<s2;
    }else{
        cout<<s1;
    }
    ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}