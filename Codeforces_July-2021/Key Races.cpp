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
#define SZ 105
const int N = int(1e5 + 3);
string solve(ll a, ll b){
	ls s1="First";
	ls s2 = "Second";
	ls sf ="Friendship";
   if (a < b) {
        return s1;
    } else if (a > b) {
        return s2;
    } else {
		return sf;
    }
	}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
		 //freopen("input.txt", "r", stdin);
		  ll s, v1, v2, t1, t2;
      cin >> s >> v1 >> v2 >> t1 >> t2;
       ll q1 = 2 * t1 + s * v1;
       ll q2 = 2 * t2 + s * v2;
    
		  cout<<solve(q1,q2)<<endl;  
     
	 
}