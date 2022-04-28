#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    if(n<m || m ==0 || n==0){
        cout << 0 << endl;
        return 0;
    }
    int mult = m * n;
    int maxPiece = mult/2;

    cout << maxPiece << endl;
    return 0;
}
