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
void solve(){   
  freopen("input.txt", "r", stdin);
    ll n,m,cost1,cost2;
    char pave[1050][1050];
    ll t;
    cin>>t;
    while(t--){
        cin>>m>>n>>cost1>>cost2;
        for(int i=0; i<m; i++){
                cin>>pave[i];
        }
        int ans=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(pave[i][j]=='.'&&pave[i][j+1]=='.'){
                    if(2*cost1<cost2)
                    {
                        ans+=2*cost1;
                        pave[i][j]=pave[i][j+1]='*';
                    }
                    else
                    {
                        ans+=cost2;
                        pave[i][j]=pave[i][j+1]='*';
                    }
                }
                else if(pave[i][j]=='.'&&pave[i][j+1]!='.')
                {
                    ans+=cost1;
                    pave[i][j]='*';
                }
            }
        }
      cout<<ans;
      ed
    }

}
int main(){
     speed();

      solve();  
     //ed
     return 0;
}