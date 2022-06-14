#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[n];
    double sum=0;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] /= 100.00;
        sum += arr[i];
    }

    std::cout << std::fixed << std::setprecision(12) << (sum/n) * 100;
}
