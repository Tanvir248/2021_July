#include<iostream>
using namespace std;
int main(){
    int arr[9]={11, 5, 2, 24, 7, 0, 12, 15, 8};
    int mx = arr[0];
    for (int i = 0; i < 9; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout<<mx<<endl;
}