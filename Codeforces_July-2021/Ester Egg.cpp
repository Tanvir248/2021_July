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
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
const int N = int(1e5 + 3);
void solve(){
    ls a="GBIV"; 
    ls b; int n;
		cin>>n;
		if (n<7)
			cout<<"Wrong!";
		  else 
           cout<<"ROYGBIV";
	    n=n-7;
		for (int i=1;i<=n/4;i++)
			cout<<a;
		n=n%4;
		b="";
		for (int i=0;i<n;i++)
		    b=b+a[i];
		cout<<b;

        cout<<endl;
}

int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
          solve();
     return 0;
}