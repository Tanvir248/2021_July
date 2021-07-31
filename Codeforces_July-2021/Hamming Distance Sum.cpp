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
//#define B begin()
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = 200005;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
lln sum[N][2];
char a[N],b[N];
int A[N],B[N];

ll solve(){   

   //freopen("input.txt", "r", stdin);
    scanf("%s%s",a+1,b+1);
    int len = strlen(a+1),len2 = strlen(b+1);
    for(int i=1;i<=len;i++)
        A[i]=a[i]-'0';
    for(int i=1;i<=len2;i++)
        B[i]=b[i]-'0';
    for(int i=1;i<=len2;i++)
    {
        for(int j=0;j<2;j++)
            sum[i][j]+=sum[i-1][j];
        sum[i][B[i]]++;
    }
    long long ans = 0;
    for(int i=1;i<=len;i++)
    {
        ans+=sum[len2-len+i][1-A[i]];
        ans-=sum[i-1][1-A[i]];
  
    }cout<<ans;
    ed
    return 0;
   }
int main(){
     speed();

 solve();  
   
     return 0;
}