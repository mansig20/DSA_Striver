// subsequence -->
// a contiguous sequence which follows the order of array elements
// time complexity -> 2^n*n
// space complexity -> O(n)

#include <bits/stdc++.h>
using namespace std;
void print_seq(int ind, vector<int> &seq, vector<int> &arr, int n)
{
    if (ind == n)
    {
        for (auto it : seq)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // take or pick the particular index into the sequence
    seq.push_back(arr[ind]);
    print_seq(ind + 1, seq, arr, n);
    seq.pop_back();

    // not pick, or not take condition, this element is not added to the sequence
    print_seq(ind + 1, seq, arr, n);
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

    print_seq(0, seq, arr, n);
    return 0;
}
