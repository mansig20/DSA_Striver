// subsequence -->
// a contiguous sequence which follows the order of array elements
// time complexity -> 2^n*n
// space complexity -> O(n)

#include <bits/stdc++.h>
using namespace std;

// sum of subsequence
// count only the number of sequences with the given sum
int count_of_sequence(int ind, int s, int sum, vector<int> &arr, int n)
{
    // if array conatains positives only
    if (s > sum)
        return 0;
    if (ind == n)
    {
        // condition satisfied
        if (s == sum)
            return 1;
        // condition not satisfied
        else
            return 0;
    }

    s += arr[ind];

    int l = count_of_sequence(ind + 1, s, sum, arr, n);

    s -= arr[ind];

    // not pick
    int r = count_of_sequence(ind + 1, s, sum, arr, n);

    return l + r;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    vector<int> seq;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elem : ";
        cin >> arr[i];
    }

    int sum;
    cout << "Enter sum : ";
    cin >> sum;

    cout << "Count of Subsequences with sum " << sum << " : ";
    cout << count_of_sequence(0, 0, sum, arr, n);
    return 0;
}
