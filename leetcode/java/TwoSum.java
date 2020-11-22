/********************************************************************************** 
* 
* Given an array of integers, find two numbers such that they add up to a specific target number.
* 
* The function twoSum should return indices of the two numbers such that they add up to the target, 
* where index1 must be less than index2. Please note that your returned answers (both index1 and index2) 
* are not zero-based.
* 
* You may assume that each input would have exactly one solution.
* 
* Input: numbers={2, 7, 11, 15}, target=9
* Output: index1=1, index2=2
* 
* Source : https://oj.leetcode.com/problems/two-sum/
* Author : Andy.Lee
* Date   : 2014-10-23              
**********************************************************************************/
// package com.lee.leetcode;

import java.util.HashMap;

public class TwoSum {

	public static void main(String[] args) {
		int [] numbers = {2, 7, 1, 3, 9,11, 15};
		int target = 9;
		
		int[] result = new Solution().twoSum(numbers, target);
		System.out.println(result[0]+" & "+result[1]);
	}

}


class Solution {
    public int[] twoSum(int[] numbers, int target) {
    	HashMap<Integer, Integer> hashNum = new HashMap<>();
    	
        for(int i = 0; i < numbers.length; i++){
            hashNum.put(target - numbers[i], i);
        }
        
        for (int i = 0; i < numbers.length; i++) {
			Integer value = hashNum.get(numbers[i]);
			
			if (value != null && value != i) {     // avoid the half of target
				return new int[]{i +1, value + 1}; // notice the request,need to plus 1
			}
		}
        throw new RuntimeException();  // With reference to tgic
        
    }
}