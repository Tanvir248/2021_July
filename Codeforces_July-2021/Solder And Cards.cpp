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
   
    ll n, t, c, k1, k2, f, s;
    queue<ll> first, second;
    cin >> n >> k1;
    for (int i = 0; i < k1; i++)
    {
        cin >> t;
        first.push(t);
    }
    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        cin >> t;
        second.push(t);
    }
    while (c < 100000 and first.size() and second.size())
    {
        f = first.front();
        first.pop();
        s = second.front();
        second.pop();
        if (f > s)
        {
            first.push(s);
            first.push(f);
        }
        else
        {
            second.push(f);
            second.push(s);
        }
        c++;
    }
    if (second.empty()) cout << c << " 1" << endl;
    else if (first.empty()) cout << c << " 2" << endl;
    else cout << -1 << endl;
}
int main(){
     speed();

       solve();  
     
     return 0;
}