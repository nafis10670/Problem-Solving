#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
//    for(int i=0;i<6;i+=2){
//        cout << i;
//    }

    while(t--){
        int half = 0, sum_half=0, sum_other=0, j=2, k=1;
        cin >> n;
        int arr[n];
        half = n/2;
        if(half%2 == 0){
            for(int i=0;i<half;i++){
                sum_half += j;
                arr[i] = j;
                j += 2;
            }
            for(int i=half; i<n-1;i++){
                sum_other += k;
                arr[i] = k;
                k += 2;
            }

            arr[n-1] = (sum_half - sum_other);
            cout << "YES" << endl;
            for(int i=0;i<n;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;

}
