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
const int N = int(1e4 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
struct node{
	int key;
	int id;
}a[N];
ll ans[N][2];
 
bool cmp(node a,node b){
	return a.key < b.key;
}
int main(){
     speed();
    // freopen("input.txt", "r", stdin);
	int n,k;
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i ++){
		cin >> a[i].key;
		a[i].id = i;
	
	}
	sort(a+1,a+n+1,cmp);
	if(a[n].key - a[1].key <= 0 ){
		cout << a[n].key - a[1].key << " " << "0" << endl;
		return 0;
	}
int num  = 0 ;
	for(int i = 0 ; i < k ; i ++){
		if(a[1].key == a[n].key){
			break;
		}
		num ++;
		a[1].key ++;
		a[n].key --;
		ans[i][0] = a[n].id;
		ans[i][1] = a[1].id;
		sort(a+1,a+n+1,cmp);
	}
	cout << a[n].key - a[1].key <<" " << num << endl;
	for(int i = 0 ; i < num ; i ++){
		cout << ans[i][0] << " " << ans[i][1] << endl;
	}
	return 0;
}
