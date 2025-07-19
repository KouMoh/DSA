#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int k;
    cin>>k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    long long sum = 0;
    for (int i=0; i<k; i++) sum+=arr[i];
    
    long long res = sum;
    int start = 0;
    
    for (int i = k; i<n; i++){
        sum+= arr[i] - arr[i-k];
        if(sum< res){
            res = sum;
            start = i-k+1;
        }
    }
    
    cout << start + 1;
    
    return 0;
}