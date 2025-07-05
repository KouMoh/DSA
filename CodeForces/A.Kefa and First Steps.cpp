#include<bits/stdc++.h>
using namespace std;


int solve(int n, vector<int> &arr) {
    int ans = 1;
    int left = 0;
    for(int right = 1; right < n; right++) {
        if(arr[right] >= arr[right-1]) {
            ans = max(ans, right - left + 1);
        } else {
            left = right;
        }
    }
    return ans;
}


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << solve(n, arr);
    return 0;
}