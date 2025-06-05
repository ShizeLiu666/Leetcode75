#ifndef LEETCODE_COMMON_H
#define LEETCODE_COMMON_H

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <limits>

using namespace std;

// 可以在这里添加一些通用的辅助函数
void printResult(const string& result, const string& expected) {
    cout << "Output: " << result << endl;
    cout << "Expected: " << expected << endl;
    cout << "Result: " << (result == expected ? "✓" : "✗") << endl;
    cout << "------------------------" << endl;
}

template<typename T>
void printVector(const vector<T>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ",";
    }
    cout << "]";
}

void printBoolResult(bool result, bool expected) {
    cout << "Output: " << (result ? "true" : "false") << endl;
    cout << "Expected: " << (expected ? "true" : "false") << endl;
    cout << "Result: " << (result == expected ? "✓" : "✗") << endl;
    cout << "------------------------" << endl;
}

template<>
void printVector(const vector<bool>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); i++) {
        cout << (vec[i] ? "true" : "false");
        if (i < vec.size() - 1) cout << ",";
    }
    cout << "]";
}

#endif 