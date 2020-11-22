/* 
* 1. Overtime for almost a month.  2. I am sick. And other excuses.
* The algorithm is not the skill I need now, to keep up with the progress of ARTS, so I just understand what others have written.
*/
class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) return 0;
        int i = 0;
        for (int j = 1; j < nums.length; j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
}