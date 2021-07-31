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
}   ll permutation[5001] = {0};
ll solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  ll n, a ;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a <= n)
        {
            permutation[a] = 1;
        }
    }
    return count(permutation + 1, permutation + n + 1, 0);
}
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}