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
  // freopen("input.txt", "r", stdin);
  
	int n;
	cin >> n;
	multiset<int> st;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		st.insert(x);
	}
	
	ll num = *prev(st.end());
	for (int i = 1; i <= num; ++i) {
		if (num % i == 0) {
			st.erase(st.find(i));
		}
	}
	
	cout << num << " " << *prev(st.end()) << endl;
	

}
int main(){
     speed();

       solve();  
     
     return 0;
}