#include <stdio.h>
#include <stdlib.h>

// Function prototype
int missingNumber(int* nums, int size);

void runTestCases() {
    int testCases[6][10] = {
        {0},  // Test case 1
        {1},  // Test case 2
        {0, 1, 3},  // Test case 3
        {0, 1, 2, 3, 4, 5, 6, 7, 8},  // Test case 4
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  // Test case 5
        {0, 1, 2, 3, 4, 6, 7, 8, 9, 10}  // Test case 6
    };

    int sizes[6] = {1, 1, 3, 9, 10, 10};
    int expectedOutputs[6] = {1, 0, 2, 9, 0, 5};

    for (int i = 0; i < 6; i++) {
        int result = missingNumber(testCases[i], sizes[i]);

        printf("\n-------------------------------\n");
        printf("Test Case %d\n", i + 1);

        printf("Given Input: {");
        for (int j = 0; j < sizes[i]; j++) {
            printf("%d", testCases[i][j]);
            if (j < sizes[i] - 1) printf(", ");
        }
        printf("}\n");

        printf("Expected Output: %d\n", expectedOutputs[i]);
        printf("Your Output: %d\n", result);

        printf("Test Case: %s\n", (result == expectedOutputs[i]) ? "✅ Passed" : "❌ Failed");
    }
    printf("\n-------------------------------\n");
}

int main() {
    runTestCases();
    return 0;
}
