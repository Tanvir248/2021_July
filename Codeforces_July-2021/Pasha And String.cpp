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
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ls s;
ls solve(){   
   //freopen("input.txt", "r", stdin);
   int b[100005]={0};
		int m;
		int l=s.length();
		cin >> m;
		for(int i = 0;i <m;i ++)
		{
			int h;
			cin >> h;
			b[h-1]++;
		}
		int sum = 0; 
		for(int i = 0;i < l/2;i ++)
		{
 
			sum+=b[i];
			if(sum%2==1)
			{
				swap(s[i],s[l-i-1]);
			}
		//	cout<<"i="<<i<<"  sum="<<sum<<endl;
			
		}
        return s;

    
}
int main(){
     speed();
cin>>s;
     cout<<  solve();  
     ed
     return 0;
}