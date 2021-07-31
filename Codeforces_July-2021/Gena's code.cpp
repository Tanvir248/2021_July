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
const int N = int(1e5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll arr[N];
void solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  int n,i,j,k;
   string str;
   bool zero,flag;
    while(~scanf("%d",&n))
    {
		zero = flag = false;
		string s="";
		k = 0;
       while(n--)
	   {
		   cin >> str;
		   if(str[0]=='0'){
			   zero = true;
		   }
		   if(str[0]!='1'){
			   s = str;
		   }
		   else{
			   j = 0;
			   for(i=1;str[i];++i){
				   if(str[i]!='0'){
					   s = str;j=0;break;
				   }
				  j++;
			   }
			   k += j;
		   }
	   }
	   if(zero)
		   cout << 0 << endl;
	   else{
		   if(s=="")s+='1';
		   while(k)
		   {
			   s+='0';
			   k--;
		   }
	       cout << s << endl;
	   }
    }
}
int main(){
     speed();

 solve();
 
     return 0;
}