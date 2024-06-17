#include<bits/stdc++.h>
using namespace std;

int maxNum(int arr[], int n, int k)
{
    int result = 0;
    for (int i = 0 ; i < k; ++ i)
    {
        result += arr[i];
    }
    int windowSum = result;
    for (int i = k; i < n; ++ i)
    {
        windowSum += arr[i] - arr[i - k];
        result = max(result, windowSum);
    }
    return result;
}
int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxNum(arr, n, k) << endl;
}