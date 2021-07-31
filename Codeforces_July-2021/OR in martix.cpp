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
const int N = int(111);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){  

//freopen("input.txt", "r", stdin);
   ll b[N][N], a[N][N];
    memset(a, -1, sizeof(a));
    ll row, col,r, c, k;
	scanf("%d %d", &row, &col);
	r=row;
	c= col;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
            if(!b[i][j]) {
                for(k = 0; k < c; k++)
                    a[i][k] = 0;
                for(k = 0; k < r; k++)
                    a[k][j] = 0;
            }
        }
    int ok = true;
    for(int i = 0;ok && i < r; i++)
        for(int j = 0; j < c; j++) {
            if(b[i][j]) {
                for(k = 0; k < c; k++)
                    if(a[i][k]) break;
                if(k < c) continue;

                for(k = 0; k < r; k++)
                    if(a[k][j]) break;
                if(k == r) {ok = false; break;}
            }
        }
    if(ok) {
		yes
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                printf("%d%c", -a[i][j], " \n"[j==c-1]);
    }
    else 
	no}
int main(){
     speed();

       solve();  
     
     return 0;
}