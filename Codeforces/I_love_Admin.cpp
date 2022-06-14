#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, max, min;
    cin >> n;
    int i=0, count=0;
    int arr[n];

    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    max = min = arr[0];

    for(i=1;i<n;i++){
        if(arr[i] > max){
            count++;
            max = arr[i];
        }
        else if(arr[i] < min){
            count++;
            min = arr[i];
        }
    }
    cout << count;
    return 0;
}
