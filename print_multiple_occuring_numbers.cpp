#include<bits/stdc++.h>
using namespace std;

int main(){
    int given[8] = {1,2,1,4,5,4,4,9};
    vector<int> count(8);
    vector<int> result(8);
    int j=0;

    for(int i=0;i<8;i++){
        count[given[i]]++;
        if (count[given[i]] > 1){
            result[j] = given[i];
            j++;
        }
    }

    for(int i=0;i<result.size();i++){
        cout << result[i];
    }

}
