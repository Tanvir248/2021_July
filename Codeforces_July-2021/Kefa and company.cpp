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
struct point {
    ll m, s;
};
bool comp(point a, point b){
    return a.m<b.m;
}
lln solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   point arr[N];
   ll n,d;
   cin>>n>>d;
    for (ll i = 1; i <=n; i++)
    {
        cin>>arr[i].m>>arr[i].s;
    }
    sort(arr+1, arr+n+1, comp);
    lln sum[N];
    for (ll i = 1; i <=n ; i++)
    {
        sum[i] =sum[i-1]+arr[i].s;
    }
    ll left =1, right =1;
    lln middle = 0;
    while (left <= n) {
        while (arr[right].m - arr[left].m < d && right <= n) {
            right ++; 
        } 
        right--; 
        middle = max(sum[right] - sum[left - 1], middle);
        //cout << l << ' ' << r << endl; 
        //cout << sum[r - 1] << ' ' << sum[l - 1] << endl; 
        left++; 
    }
    return middle;
}
int main(){
     speed();

  cout<<     solve();  
     ed
     return 0;
}