#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"First"<<endl;
 #define no cout<<"Second"<<endl;
int a[30];
int main()
{
    string s;
    cin >> s;
    for(int i = 0;s[i];++i){
        a[s[i] - 'a']++;
    }
    int len = s.length();
    if(len & 1){
        yes
    }
    else{
        int c = 0;
        for(int i = 0;i < 26;++i){
            if((a[i] & 1)){
                c++;
            }
        }
        if(c){
        no
        }
        else{
            yes
            }
    }
    return 0;
}
