#include <bits/stdc++.h>
using namespace std;

int missingnum(int *arr, int n){
    int xorr = 0;
    for(int i=0; i<n-1; i++){
        xorr ^= arr[i];
    }
    for(int i=1; i<=n; i++){
        xorr ^= i;
    }
    return xorr;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    cout << missingnum(arr, n);
    return 0;
}
