#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int n, int time){
    int ans = 0;
    int left = 0;
    int curr_time = 0;

    for(int right=0; right<n; right++){
        curr_time +=arr[right];

        while(left<=right && curr_time > time){
            curr_time -= arr[left];
            left++;
        }
        ans = max(ans, right-left+1);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int time;
    cin>>time;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<solve(arr,n,time);
    return 0;
}