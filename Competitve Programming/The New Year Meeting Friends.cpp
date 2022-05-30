#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    int dist, n;

    cin >> arr[0] >> arr[1] >> arr[2];
    n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);

    dist = (arr[1] - arr[0]) + (arr[2] - arr[1]);
    cout << dist;

}
