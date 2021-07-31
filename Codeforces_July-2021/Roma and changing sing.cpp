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
   ll n,k, num;
     cin>>n>>k;
    vi add;
	 for (ll i = 0; i < n; i++)
	 {
		 cin>>num;
		add.pb(num);
	 }
	 for (ll i = 0; i < n, k>0; i++)
	 {
		 if(add[i]<0){
		  add[i]*=-1;k--;
		 }else
		 break;
	 }
	 sort(add.B, add.E);
	if(k>0){
		if(k%2)
		add[0]*=-1;
	}
	 ll sum =0;
	 for (ll i = 0; i < n; i++)
	 {
		 sum+=add[i];
	 }
	cout<<sum<<endl;

}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}