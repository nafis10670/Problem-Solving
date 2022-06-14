#include<iostream>
using namespace std;

int main(){
    int a, b;
    int count = 0;

    cin >> a;
    cin >> b;

    for(int i=0;i>=0;i++){
        count++;
        a *= 3;
        b *= 2;

        if(a>b) break;
    }

    cout << count;
    return 0;
}
