#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    string temp;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> temp;

        if(temp == "Tetrahedron") count+= 4;
        else if(temp == "Cube") count += 6;
        else if(temp == "Octahedron") count += 8;
        else if(temp == "Dodecahedron") count += 12;
        else if(temp == "Icosahedron") count += 20;
    }
    cout << count << endl;
}
