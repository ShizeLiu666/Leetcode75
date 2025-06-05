#include "../leetcode_common.h"

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // padding zeros at both ends of the flowerbed to simplify edge cases
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.insert(flowerbed.end(), 0);
        int count = 0;
        for(int i = 1; i < flowerbed.size() - 1; i++)
        {
            // Check each position with its neighbors
            if(flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
            {
                // If the position is empty and its neighbors are also empty, plant a flower
                flowerbed[i] = 1;
                count++;
                i++; // Skip the next position since it cannot be planted
            }
        }

        return count >= n;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    {
        vector<int> flowerbed = {1, 0, 0, 0, 1};
        int n = 1;
        bool expected = true;
        bool result = solution.canPlaceFlowers(flowerbed, n);
        cout << "Test Case 1:" << endl;
        cout << "Input: flowerbed = ";
        printVector(flowerbed);
        cout << ", n = " << n << endl;
        printBoolResult(result, expected);
    }
    
    // Test Case 2
    {
        vector<int> flowerbed = {1, 0, 0, 0, 1};
        int n = 2;
        bool expected = false;
        bool result = solution.canPlaceFlowers(flowerbed, n);
        cout << "Test Case 2:" << endl;
        cout << "Input: flowerbed = ";
        printVector(flowerbed);
        cout << ", n = " << n << endl;
        printBoolResult(result, expected);
    }

    // Test Case 3
    {
        vector<int> flowerbed = {1, 0, 0, 0, 0, 1};
        int n = 2;
        bool expected = false;
        bool result = solution.canPlaceFlowers(flowerbed, n);
        cout << "Test Case 3:" << endl;
        cout << "Input: flowerbed = ";
        printVector(flowerbed);
        cout << ", n = " << n << endl;
        printBoolResult(result, expected);
    }

    // Test Case 4
    {
        vector<int> flowerbed = {1,0,0,0,1,0,0};
        int n = 2;
        bool expected = true;
        bool result = solution.canPlaceFlowers(flowerbed, n);
        cout << "Test Case 4" << endl;
        cout << "Input: flowerbed = ";
        printVector(flowerbed);
        cout << ", n = " << n << endl;
        printBoolResult(result, expected);
    }

    // Test Case 5
    {
        vector<int> flowerbed = {1,0,0,0,0,0,0,0,1};
        int n = 3;
        bool expected = true;
        bool result = solution.canPlaceFlowers(flowerbed, n);
        cout << "Test Case 5:" << endl;
        cout << "Input: flowerbed = ";
        printVector(flowerbed);
        cout << ", n = " << n << endl;
        printBoolResult(result, expected);
    }

    return 0;
}
