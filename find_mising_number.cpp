#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> given = {1,2,3,4,5,6,8};

    int count = 0;

    for(int i=0;i<given.size();i++){
        if(given[i+1] - given[i] != 1){
            cout << "The missing number is: " << given[i] + 1 << endl;
            break;
        }
    }
}
