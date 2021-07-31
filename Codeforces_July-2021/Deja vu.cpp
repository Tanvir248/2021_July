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
   lln t;
   cin>>t;
   while(t--){
	   ls s, s1, s2, s3, s4;
	   cin>>s;
	   s1 ='a'+s;
	   s2 = s1;
	   reverse(s1.B, s1.E);
	   s3 = s+'a';
	   s4 = s3;
	   reverse(s3.B, s3.E);
	   if(s1!=s2){
		   yes
		   cout<<s2<<endl;
	   }else if(s3!=s4){
		   yes
		   cout<<s4<<endl;
	   }else{
		   no
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