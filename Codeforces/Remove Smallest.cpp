#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, flag=0;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int x = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr+x);
        for(int i=1;i<n;i++){
            if(arr[i] - arr[i-1] >= 2){
                cout << "NO" << endl;
                flag=1;
                break;
            }
        }
        if(flag == 0) cout << "YES" << endl;
        flag = 0;
    }
}
