#include "../leetcode_common.h"

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        // find the max candies
        int max_candies = *max_element(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); i++)
        {
            // check if the kid can have the greatest number of candies after giving them extra candies
            if(candies[i] + extraCandies >= max_candies)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};

int main(){
    Solution solution;
    
    // Test Case 1
    {
        vector<int> candies = {2, 3, 5, 1, 3};
        int extraCandies = 3;
        vector<bool> expected = {true, true, true, false, true};
        vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
        cout << "Test Case 1:" << endl;
        cout << "Input: candies = ";
        printVector(candies);
        cout << ", extraCandies = " << extraCandies << endl;
        cout << "Output: ";
        printVector(result);
        cout << "\nExpected: ";
        printVector(expected);
        cout << "\nResult: " << (result == expected ? "✓" : "✗") << endl;
        cout << "------------------------" << endl;
    }
    
    // Test Case 2
    {
        vector<int> candies = {4, 2, 1, 1, 2};
        int extraCandies = 1;
        vector<bool> expected = {true, false, false, false, false};
        vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
        cout << "Test Case 2:" << endl;
        cout << "Input: candies = ";
        printVector(candies);
        cout << ", extraCandies = " << extraCandies << endl;
        cout << "Output: ";
        printVector(result);
        cout << "\nExpected: ";
        printVector(expected);
        cout << "\nResult: " << (result == expected ? "✓" : "✗") << endl;
        cout << "------------------------" << endl;
    }
    
    // Test Case 3
    {
        vector<int> candies = {12, 1, 12};
        int extraCandies = 10;
        vector<bool> expected = {true, false, true};
        vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
        cout << "Test Case 3:" << endl;
        cout << "Input: candies = ";
        printVector(candies);
        cout << ", extraCandies = " << extraCandies << endl;
        cout << "Output: ";
        printVector(result);
        cout << "\nExpected: ";
        printVector(expected);
        cout << "\nResult: " << (result == expected ? "✓" : "✗") << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}
