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
const int N = int(100);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}ll n,k;
ls s[N];
void solve(){
   //freopen("output.txt", "w", stdout);
   
	
	for(int i=0;i<n;i++)
	{
		string st="";
		for(int j=0;j<n;j++)
		{
			st+='S';
		}
		s[i]=st;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n && k>0;j++)
		{
			if((i+j)%2!=0)continue;
			s[i][j]='L';
			k--;
		}
	}
	if(k>0)
	{
	no
    	return;
	}
	yes
    for(int i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
	}
	}
int main(){
     speed();
        
//  freopen("input.txt", "r", stdin);
cin>>n>>k;
       solve();  
     
     return 0;
}