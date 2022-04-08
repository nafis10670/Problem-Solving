#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> given = {2,5,7,6,6};
    vector<int> sum(given.size(), 0);
    vector<int> result(given.size()+1);
    int carry = 0;
    int given_int = 90025;
    int temp = given_int, count = 0;

    for(int i=0;i<3;i++){
        temp /= 10;
        count++;
        if(temp == 0) break;
    }

    for(int i=given.size()-1;i>=0;i--){
        sum[i] = given_int % 10;
        given_int /= 10;
    }

//    for(int i=0;i<given.size();i++){
//        cout << given[i];
//    }
//    cout << endl;
//
//    for(int i=0;i<sum.size();i++){
//        cout << sum[i];
//    }
//    cout << endl;

    for(int i=result.size()-1;i>=1;i--){
        result[i] = given[i-1] + sum[i-1] + carry; //result.size() = 6
        if(result[i] > 9){
            result[i] %= 10;
            carry = 1;
        }
        else carry = 0;
    }

    if(carry == 1){
        result[0] = 1;
    }
    else{
        result.erase(result.begin());
    }

    //if(result.back() == 0) result.pop_back();
    for(int i=0;i<result.size();i++){
        cout << result[i];
    }
    return 0;
}
