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
// void solve(){   
  
// }
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
    
     freopen("input.txt", "r", stdin);
  int n;
	while( scanf("%d",&n)==1 ){
		int r,p1,p2,target,A,b;

		target=0;
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			if( tmp>target )
				target=tmp;
		}
		r=target;
		target=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			if( tmp>target )
				target=tmp;
		}
		p1=target;
		target=2e9;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			if( tmp<target )
				target=tmp;
		}
		p2=target;
		scanf("%d%d",&A,&b);
		printf("%.12lf\n",r*sqrt((double)(b*p1)/(b*p1+A*p2)));
	}
	
   
     return 0;
}