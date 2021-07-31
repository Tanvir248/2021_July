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
#define pi pair<lln, lln>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 500);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
pi pr[N];
lln n, a, b, ans , sum ,i;
lln solve(){ 
  sum =0;
 for ( i = 0; i < n; i++)
 {
     cin>>pr[i].second>>pr[i].first;
     sum+= pr[i].second; 
 }
 sort(pr, pr+n);
 ans=0;
 i =0;
    while (sum<b*n)
    {
        lln temp =min(b*n-sum, a- pr[i].second);
       ans += temp*pr[i].first;
       sum+= temp;
        i++;
    }
    return ans;
 
}
int main(){
     speed();
    cin>>n>>a>>b;
    cout<<   solve();  
ed     
     return 0;
}