// subsequence -->
// a contiguous sequence which follows the order of array elements
// time complexity -> 2^n*n
// space complexity -> O(n)

#include <bits/stdc++.h>
using namespace std;

// sum of subsequence
// prints only single sequence with the sum
bool sum_of_sequence(int ind, vector<int> &seq, int s, int sum, vector<int> &arr, int n)
{
    if (ind == n)
    {
        // condition satisfied
        if (s == sum)
        {
            for (auto it : seq)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        // condition not satisfied
        else
            return false;
    }
    seq.push_back(arr[ind]);
    s += arr[ind];

    if (sum_of_sequence(ind + 1, seq, s, sum, arr, n) == true)
    {
        return true;
    }

    s -= arr[ind];
    seq.pop_back();

    // not pick
    if (sum_of_sequence(ind + 1, seq, s, sum, arr, n) == true)
    {
        return true;
    }

    return false;
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

    cout << "Subsequence with sum " << sum << " is: " << endl;
    sum_of_sequence(0, seq, 0, sum, arr, n);
    return 0;
}
