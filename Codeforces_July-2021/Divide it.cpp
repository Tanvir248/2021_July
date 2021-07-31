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
const int N = int(1e5 + 3);
void solve(){   
   //freopen("input.txt", "r", stdin);
   lln n, t;
     cin>>t;
    // vi add;
	for (ll i = 0; i < t; i++)
	{
		cin>>n;
		
		int cnt2 = 0, cnt3 = 0, cnt5 = 0;
		while (n % 2 == 0) {
			n /= 2;
			cnt2++;
		}
		while (n % 3 == 0) {
			n /= 3;
			cnt3++;
		}
		while (n % 5 == 0) {
			n /= 5;
			cnt5++;
		}
		if (n != 1) {
			cout << -1 << endl;
		} else {
			cout << cnt2 + cnt3 * 2 + cnt5 * 3 << endl;
		}
	}
	
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}