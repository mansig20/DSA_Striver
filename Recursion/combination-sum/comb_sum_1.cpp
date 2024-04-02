// Problem Statement -> given an array of distinct integers and a target integer , return a list of unique combinations of integers where the choosen numbers sum to the target

#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    // Base case: if we have traversed all elements
    if (ind == arr.size())
    {
        // if target achieved, add the current combination to the answer
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    // Pick up the current element
    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);                                // add current element to the combination
        findCombination(ind, target - arr[ind], arr, ans, ds); // recursively search for combinations with reduced target
        ds.pop_back();                                         // backtrack: remove the last element to explore other combinations
    }

    // Skip the current element and move to the next one
    findCombination(ind + 1, target, arr, ans, ds);
}

// Function to find all combinations
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds; // Temporary storage for each combination
    findCombination(0, target, candidates, ans, ds);
    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum(candidates, target);

    cout << "Combinations that sum up to " << target << ":" << endl;
    for (auto &combination : result)
    {
        cout << "[";
        for (auto num : combination)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}