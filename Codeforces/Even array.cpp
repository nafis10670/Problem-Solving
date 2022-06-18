#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, count=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        for(int i=0;i<n;i++){
            if(i%2 == 0 && arr[i]%2 != 0){
                count++;
            }
            else if(i%2 != 0 && arr[i]%2 == 0){
                count++;
            }
        }
        if(count%2 != 0) cout << -1 << endl;
        else cout << count/2 << endl;
    }
    return 0;
}
