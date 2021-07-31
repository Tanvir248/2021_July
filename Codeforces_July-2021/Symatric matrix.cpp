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
#define yes cout<<"YES"<<endl
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   

   //freopen("input.txt", "r", stdin);
 ll t;
	cin >> t;
	while(t--)
	{
		ll n, m;
		ll tiles[100][2][2];
		bool flag = false;
		cin >> n >> m;
		for (int i = 0;i < n;i++)
		{
			cin >> tiles[i][0][0];
			cin >> tiles[i][0][1];
			cin >> tiles[i][1][0];
			cin >> tiles[i][1][1];
		}
		
		if (!(m&1))
		{
			for (int i = 0;i < n;i++)
			{
				if (tiles[i][0][1] == tiles[i][1][0])
				{
					flag = true;
					break;
				}
			}
		}
		
		flag==true? yes:no
	}
}
int main(){
     speed();

       solve();  
     
     return 0;
}