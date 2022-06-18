#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, s, count=0;
        cin >> n >> k;
        int arr1[n], arr2[n];
        for(int i=0;i<n;i++){
            cin >> arr1[i];
        }
        for(int i=0;i<n;i++){
            cin >> arr2[i];
        }

        s = sizeof(arr1)/sizeof(arr1[0]);
        sort(arr1, arr1 + s);
        sort(arr2, arr2 + s, greater<int>());

        for(int i=0;i<k;i++){
            if(arr2[i] > arr1[i])
                swap(arr1[i], arr2[i]);
        }


        for(int i=0;i<n;i++){
            count += arr1[i];
        }

        cout << count << endl;
    }
    return 0;
}
