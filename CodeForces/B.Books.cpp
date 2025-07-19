#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &arr, int n, int time)
{
    sort(arr.begin(), arr.end());
    int ans = 0;
    int curr_time=0;
    for (int i = 0; i < n; i++)
    {
        curr_time = time - arr[i];
        if (curr_time < 0) return ans;
        else if (curr_time ==0) {
            ans++;
            return ans;
        }
        else {
            curr_time-=arr[i];
            ans++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int time;
    cin >> time;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << solve(arr, n, time);
    return 0;
}