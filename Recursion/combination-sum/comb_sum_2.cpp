// Problem Statement -> given an array of distinct integers and a target integer , return a list of unique combinations of integers where the choosen numbers sum to the target

// Each number in array may only be used once in the combination and the solution set must not contain duplicate combinations.

#include <bits/stdc++.h>
using namespace std;

void findCombination2(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target)
            break;
        ds.push_back(arr[i]);
        findCombination2(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}

// Function to find all combinations
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds; // Temporary storage for each combination
    findCombination2(0, target, candidates, ans, ds);
    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum2(candidates, target);

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