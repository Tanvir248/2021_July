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
ll n;
ll solve(){ 

   //freopen("input.txt", "r", stdin);
	  vi add1(n), add2(n);
	for (ll i = 0; i <n; i++)
	{
		cin>>add1[i];
		-- add1[i];
	}
	for (ll i = 0; i < n; i++)
	{
		cin>>add2[i];
		--add2[i];
	}
	vi pos(n);
	for (ll i = 0; i < n; i++)
	{
		pos[add2[i]]=i;
	}
	vi ans(n);
	for (ll i = 0; i < n; i++)
	{
		ans[i] =pos[add1[i]];
	}
	ll sum =0, flag =-1;
	for (ll i = 0; i < n; i++)
	{
		if(ans[i]>flag){
			flag =ans[i];
		}else{
			sum++;
		}
	}
	
		return sum;

}
int main(){
     speed();
cin>>n;
       cout<<solve();  
     ed
     return 0;
}