#include<iostream>
using namespace std;
int main(){
    int arr[9]={11, 5, 2, 4, 7, 0, -12, 1, 8};
    int mini = arr[0];
    for (int i = 0; i < 9; i++)
    {
        mini = min(mini, arr[i]);
    }
    cout<<mini<<endl;
}