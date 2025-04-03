public class test {
    public static void runTestCases() {
        int[][] testCases = {
            {0},  // Test case 1
            {1},  // Test case 2
            {0, 1, 3},  // Test case 3
            {0, 1, 2, 3, 4, 5, 6, 7, 8},  // Test case 4
            {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},  // Test case 5
            {0, 1, 2, 3, 4, 6, 7, 8, 9, 10}  // Test case 6
        };

        int[] expectedOutputs = {1, 0, 2, 9, 0, 5};

        Solution solution = new Solution();
        
        for (int i = 0; i < testCases.length; i++) {
            int result = solution.missingNumber(testCases[i]);

            System.out.println("-------------------------------");
            System.out.println("Test Case " + (i + 1));
            System.out.print("Given Input: {");
            for (int j = 0; j < testCases[i].length; j++) {
                System.out.print(testCases[i][j]);
                if (j < testCases[i].length - 1) System.out.print(", ");
            }
            System.out.println("}");
            
            System.out.println("Expected Output: " + expectedOutputs[i]);
            System.out.println("Your Output: " + result);
            
            System.out.println("Test Case: " + (result == expectedOutputs[i] ? "✅ Passed" : "❌ Failed"));
        }
        System.out.println("-------------------------------");
    }

    public static void main(String[] args) {
        runTestCases();
    }
}
