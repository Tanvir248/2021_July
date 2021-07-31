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
   ll n, num;
   cin>>n;
  set<ll>st;
  set<ll>:: iterator it;
    vi add, ans;
	for (ll i = 0; i < n; i++)
	{
		cin>>num;
		add.pb(num);
		st.insert(add[i]);
	}
	if(st.sz==1 || st.sz==2){
		yes
	}else if(st.sz==3){
		for ( it = st.begin(); it!= st.end(); it++)
		{
			ans.pb(*it);
		}
		if(ans[0]+ans[2]== 2*ans[1]){
			yes
		}else if(ans[1] - ans[0] == ans[2] - ans[1]) 
		yes
		else no
	}else{
		no
	}
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}