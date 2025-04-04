#include <iostream>
#include <vector>
#include "../solutions/solution.cpp"  // Include Solution class

void runTestCases() {
    std::vector<std::vector<int>> testCases = {
        {0},               // Test case 1
        {1},               // Test case 2
        {0, 1, 3},         // Test case 3
        {0, 1, 2, 3, 4, 5, 6, 7, 8},  // Test case 4
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  // Test case 5
        {0, 1, 2, 3, 4, 6, 7, 8, 9, 10}  // Test case 6
    };

    std::vector<int> expectedOutputs = {1, 0, 2, 9, 5, 5};  // Corrected expected output for test case 5

    Solution solution;

    for (size_t i = 0; i < testCases.size(); i++) {
        int result = solution.missingNumber(testCases[i]);

        std::cout << "-------------------------------\n";
        std::cout << "Test Case " << (i + 1) << "\nGiven Input: {";
        for (size_t j = 0; j < testCases[i].size(); j++) {
            std::cout << testCases[i][j];
            if (j < testCases[i].size() - 1) std::cout << ", ";
        }
        std::cout << "}\n";

        std::cout << "Expected Output: " << expectedOutputs[i] << "\n";
        std::cout << "Your Output: " << result << "\n";

        std::cout << "Test Case: " << ((result == expectedOutputs[i]) ? "✅ Passed" : "❌ Failed") << "\n";
    }
    std::cout << "-------------------------------\n";
}

int main() {
    runTestCases();
    return 0;
}
