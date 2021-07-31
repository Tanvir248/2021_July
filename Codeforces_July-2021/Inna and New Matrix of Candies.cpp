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
   ll n, m;
   cin>>n>>m;
   char ch[n][m];
   vi add;
	for (ll i = 0; i < n; i++){

		for(ll j =0; j<m; j++){
			cin>>ch[i][j];
		}
	}
	ll cnt =0, cg=0, cs=0;
	for (ll i = 0; i < n; i++){

		for(ll j =0; j<m; j++){
			
			if(ch[i][j]=='G'){
				cg=j+1;
				//cout<<cg<<" ";
			}else if(ch[i][j]=='S'){
					 cs=j+1;
					 // cout<<cs<<" ";
				}
		}
		//cout<<endl;
		//cout<<cs-cg<<endl;
		if((cs-cg)-1>=2){
		
			add.pb((cs-cg)-1);
		
			}
	} 
	if(add.sz==0){
		cout<<-1<<endl;
	}else{
		sort(add.B, add.E);
		if(add[add.sz-1]==8){
			add[add.sz-1]++;
		}
		cout<<add[add.sz-1]<<endl;
	}
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}