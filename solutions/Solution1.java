package solutions;//packagee
public class Solution1 {
    public int missingNumber(int[] nums) {
        int actualSum = 0, totalSum = 0;
        int n = nums.length;
 
        for (int num : nums) {
            actualSum += num;
        }

        totalSum = (n * (n + 1)) / 2;

        return totalSum - actualSum;
    }
}
// #dhqhd
// dqdqwd
// cqqwdqwdqwd
// fqwfqwf
// 1234