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
#define end cout<<endl;
const int N = int(1e5 + 3);
void speed(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   
   //freopen("input.txt", "r", stdin);
   const int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
   ll arr[101][25] = {0};
    for (int i = 1; i <= 100; ++i)
    {
        int ii = i;
        for (int j = 0; ii != 1 && j < 25; ++j)
        {
            while (ii % primes[j] == 0)
            {
                arr[i][j] += 1;
                ii /= primes[j];
            }
        }
    }

    lln a, b, c, ans=0;
    cin>>a>>b>>c;
    for (int i = 1; i <= a; ++i)
    {
        for (int j = 1; j <= b; ++j)
        {
            for (int k = 1; k <= c; ++k)
            {
                lln divisors = 1;
                for (int d = 0; d < 25; ++d)
                {
                    divisors *= (1 + arr[i][d] + arr[j][d] + arr[k][d]);
                }
                ans += divisors;
            }
        }
    }
    ans %= 1073741824;
   cout<<ans;
   end
}
int main(){
  speed();
       solve();  
     
     return 0;
}