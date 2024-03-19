// subsequence -->
// a contiguous sequence which follows the order of array elements
// time complexity -> 2^n*n
// space complexity -> O(n)

#include <bits/stdc++.h>
using namespace std;

// sum of subsequence
// prints all the possible sequences with the sum
void sum_of_sequences(int ind, vector<int> &seq, int s, int sum, vector<int> &arr, int n)
{ 
    if (ind == n)
    {
        if (s == sum)
        {
            for (auto it : seq)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    seq.push_back(arr[ind]);
    s += arr[ind];

    sum_of_sequences(ind + 1, seq, s, sum, arr, n);

    s -= arr[ind];
    seq.pop_back(); 

    sum_of_sequences(ind + 1, seq, s, sum, arr, n);
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

    cout << "Subsequences with sum " << sum << " are: " << endl;
    sum_of_sequences(0, seq, 0, sum, arr, n);
    return 0;
}
