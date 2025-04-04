from solutions.solution import Solution

def run_test_cases():
    test_cases = [
        [0], [1], [0, 1, 3], [0, 1, 2, 3, 4, 5, 6, 7, 8],  
        [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], [0, 1, 2, 3, 4, 6, 7, 8, 9, 10]  
    ]

    expected_outputs = [1, 0, 2, 9, 5, 5]

    solution = Solution()  # ✅ Correct class initialization

    for i, test_case in enumerate(test_cases):
        result = solution.missingNumber(test_case)

        print("-------------------------------")
        print(f"Test Case {i + 1}\nGiven Input: {test_case}")
        print(f"Expected Output: {expected_outputs[i]}")
        print(f"Your Output: {result}")
        print(f"Test Case: {'✅ Passed' if result == expected_outputs[i] else '❌ Failed'}")

    print("-------------------------------")

if __name__ == "__main__":
    run_test_cases()
