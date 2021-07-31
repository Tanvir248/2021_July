#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int a[1000005];
int main()
{
int a,x = 0, n, ans =0;
cin>>a;
vector<int> biin(8), add;
for(int i=0; i<a ; i++){
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    int m = n;
	while (n > 0) {

        biin[x] = n % 2;
        n = n / 2;
       x++;
    }

    // for(int i = x-1;i>=0; i--){
    // cout<<biin[i]<<" ";
    // }
    reverse(biin.begin(), biin.end());
    if((biin[0]== 0 || biin[0]==1) && (biin[biin.size()-1]==1 || biin[biin.size()-1]==0)){
        if(m !=1){
            add.push_back(m);
        }
        }
     x  =0;
    biin.erase(biin.begin(), biin.end());
   m =0;
    }

    for(int i =0; i<add.size(); i++){
        ans += add[i]*add[i+1];
       //cout<<add[i]<<" ";
    }
   cout<<ans<<endl;
return 0;
}