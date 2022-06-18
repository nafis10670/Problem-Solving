#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, res;
        bool flag = false;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        for(int i=1; i<n-1; i++){
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
                res = i+1;
                flag = true;
            }
        }
        if(!flag){
            if(arr[0] != arr[1])
                res = 1;
            else
                res = n;
        }
        cout << res << endl;
    }
    return 0;
}
