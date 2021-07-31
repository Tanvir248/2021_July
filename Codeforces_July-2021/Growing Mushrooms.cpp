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
struct myfunc
{
    bool operator()(const vector<double>& s1,
                    const vector<double>& s2) const
    {
    	if(s1[0]==s2[0])
    		return s1[1] < s2[1];
      return s1[0] > s2[0];
    }
};
void solve(){   
  freopen("input.txt", "r", stdin);
   ld n,t1,t2, k;
   vector<pair<ld,ll>>pd;
   vector<pair<ll,ld>>::iterator it;
   cin>>n>>t1>>t2>>k;
   //ld d = (double)k/100;
   //cout<<d;
   ll a ,b;
	
	for(ll i=0; i<n; i++){
		double ans = 0;
		cin>>a>>b;
		ans =max(((a*t1)-((a*t1)*(k/100)))+b*t2,((b*t1)-((b*t1)*(k/100))+a*t2));
		pd.pb(make_pair(ans, i+1));
		ans =0;
	}
	sort(pd.begin(), pd.end()),myfunc();
	// for(it = pd.begin(); it <pd.end();it++ ){
	// 	cout<<*it.<<endl;
	// }
	for (ll i = 0; i < pd.sz; i++)
	{
		 
    printf("%d %.2lf\n",pd[i].second,pd[i].first);
	}
	
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}