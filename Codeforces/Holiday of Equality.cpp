#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count=0;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    k = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+k);

    for(int i=0;i<n;i++){
        count = count + (arr[n-1] - arr[i]);
    }
    cout << count;
}
