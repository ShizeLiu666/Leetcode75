#include "../leetcode_common.h"

class Solution {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    // check if the character is a vowel
    bool isVowel(char c){
        return vowels.count(c) > 0;
    }
public:
    string reverseVowels(string s) {
        // two pointers to find the vowels
        int left = 0;
        int right = s.length() - 1;
        while(left < right)
        {
            while(left < right && !isVowel(s[left]))
            {
                left++;
            }
            while(left < right && !isVowel(s[right]))
            {
                right--;
            }
            swap(s[left++], s[right--]);
        }
        
        return s;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    {
        string s = "hello";
        string expected = "holle";
        string result = solution.reverseVowels(s);
        cout << "Test Case 1:" << endl;
        cout << "Input: s = \"" << s << "\"" << endl;
        cout << "Output: \"" << result << "\"" << endl;
        cout << "Expected: \"" << expected << "\"" << endl;
        cout << "Result: " << (result == expected ? "✓" : "✗") << endl;
        cout << "------------------------" << endl;
    }
    
    // Test Case 2
    {
        string s = "leetcode";
        string expected = "leotcede";
        string result = solution.reverseVowels(s);
        cout << "Test Case 2:" << endl;
        cout << "Input: s = \"" << s << "\"" << endl;
        cout << "Output: \"" << result << "\"" << endl;
        cout << "Expected: \"" << expected << "\"" << endl;
        cout << "Result: " << (result == expected ? "✓" : "✗") << endl;
        cout << "------------------------" << endl;
    }
    
    // Test Case 3 (包含大写元音)
    {
        string s = "aA";
        string expected = "Aa";
        string result = solution.reverseVowels(s);
        cout << "Test Case 3:" << endl;
        cout << "Input: s = \"" << s << "\"" << endl;
        cout << "Output: \"" << result << "\"" << endl;
        cout << "Expected: \"" << expected << "\"" << endl;
        cout << "Result: " << (result == expected ? "✓" : "✗") << endl;
        cout << "------------------------" << endl;
    }

    return 0;
}