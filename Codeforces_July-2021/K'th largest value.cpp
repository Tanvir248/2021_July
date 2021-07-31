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
const int N = int(1e6 + 6);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll n, q, arr[N], cnt;
void solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
    
    scanf("%d%d",&n,&q);
	for(int i = 1; i <= n; ++i)
	{
    	scanf("%d",arr+i);
		cnt += arr[i];
	}
	while(q--)
	{
		int opt, x;
		scanf("%d%d",&opt,&x);
		if(opt == 1)
		{
			if(arr[x]) cnt--;
			else cnt++;
			arr[x] = 1 - arr[x];
		}
		else
		{
			if(cnt >= x) cout<<1;
			else cout<<0;
            ed
		}
	}
}
int main(){
     speed();

    solve();  
     
     return 0;
}