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
   ll n, num, ans =0;
   ls s, s1="bear";
	cin>>s;
	ll len = s.length();
	for (ll i = 0; i < len; i++)
	{
		
		 ll find = (s.substr(i)).find("bear");
		 //cout<<s.size()<<" "<<find<<" "<<s.substr(i).size()<<endl;
		 if(find!=-1)
			 ans+=1+s.substr(i).size()-find-4;
	}
	cout<<ans<<endl;

}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}