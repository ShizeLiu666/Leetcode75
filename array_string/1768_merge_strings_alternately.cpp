#include "../leetcode_common.h"

class Solution
{
public:
    // string mergeAlternately(string word1, string word2) {
    //     // Determine which string is longer
    //     string longer = word1.length() > word2.length() ? word1 : word2;
    //     string shorter = word1.length() < word2.length() ? word1 : word2;
    //     string result = "";

    //     // Merge characters alternately up to the length of shorter string
    //     for (int i = 0; i < shorter.length(); i++)
    //     {
    //         result += word1[i];
    //         result += word2[i];
    //     }

    //     // Append remaining characters from the longer string
    //     for (int i = shorter.length(); i < longer.length(); i++)
    //     {
    //         result += longer[i];
    //     }

    //     return result;
    // }

    string mergeAlternately(string word1, string word2)
    {
        // Cache string lengths
        const int len1 = word1.length();
        const int len2 = word2.length();

        // Pre-allocate result string with exact size needed
        string result;
        result.reserve(len1 + len2);

        // Merge alternately until shorter string's end
        const int minLen = min(len1, len2);
        for (int i = 0; i < minLen; i++)
        {
            result += word1[i];
            result += word2[i];
        }

        // Append remaining characters directly using substr
        result += (len1 > minLen)? word1.substr(minLen) : word2.substr(minLen);

        return result;
    }
};

int main()
{
    Solution solution;

    // Test Case 1
    {
        string word1 = "abc";
        string word2 = "pqr";
        string expected = "apbqcr";
        string result = solution.mergeAlternately(word1, word2);
        cout << "Test Case 1:" << endl;
        cout << "Input: word1 = \"" << word1 << "\", word2 = \"" << word2 << "\"" << endl;
        printResult(result, expected);
    }

    // Test Case 2
    {
        string word1 = "ab";
        string word2 = "pqrs";
        string expected = "apbqrs";
        string result = solution.mergeAlternately(word1, word2);
        cout << "Test Case 2:" << endl;
        cout << "Input: word1 = \"" << word1 << "\", word2 = \"" << word2 << "\"" << endl;
        printResult(result, expected);
    }

    // Test Case 3
    {
        string word1 = "abcd";
        string word2 = "pq";
        string expected = "apbqcd";
        string result = solution.mergeAlternately(word1, word2);
        cout << "Test Case 3:" << endl;
        cout << "Input: word1 = \"" << word1 << "\", word2 = \"" << word2 << "\"" << endl;
        printResult(result, expected);
    }

    return 0;
}
