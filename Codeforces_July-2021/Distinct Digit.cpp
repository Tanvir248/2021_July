
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
   //freopen("input.txt", "r", stdin);
int l,r,k,m,n;
    cin>>l>>r;
    for(int i=l; i<=r; i++)
    {
        int a[10]= {0};
        m=0;
        k=i;
        while(k>0)
        {
            a[k%10]++;
            if(a[k%10]>1)
            {
                m=1;
                break;
            }
            k/=10;
        }
        if(m==0)
        {
            cout<<i;
            break;
        }
        }
    if(m==1)
    {
        cout<<"-1";
    }
    ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}