#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a;
    int arr[50];

    for(int i=0; i<n; i++){
        cin >> a;
        arr[i] = a;
    }

    int count=0;
    for(int i =0; i<n; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0){
            count++;
        }
    }
    cout << count << endl;
}
