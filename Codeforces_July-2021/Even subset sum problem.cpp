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
void solve(){   
   
    ll n,a[SZ],tag=0;
        cin>>n;
        for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(n==1&&a[1]%2==1)
			cout<<-1<<endl;
		else
		{
			if(a[1]%2==0)
			{
				cout<<1<<endl<<1<<endl;
			}
			else if(a[2]%2==0)
			{
				cout<<1<<endl<<2<<endl;
			}
			else
			{
				cout<<2<<endl<<1<<" "<<2<<endl;
			}
		}
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
		  ll t;
		  cin>>t;
		  while(t--)
       solve();  
     
     return 0;
}