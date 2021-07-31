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

int main()
{

   //freopen("input.txt", "r", stdin);
    lln  m,n,a[200],i,ans=1;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];

    vi add;

    for(i=0; i<n; i++)
    {
        if(a[i] ==1)
        {
            add.push_back(i);
        }
    }

    if(add.size()==0)  cout<<"0"<<endl;
    else
    {
        for(i=1; i<add.sz; i++)
        {
            ans*=add[i]-add[i-1];
        }
        cout<<ans<<endl;
    }
}