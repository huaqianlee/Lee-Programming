/* 
* 1. Overtime for almost a month.  2. I am sick. And other excuses.
* The algorithm is not the skill I need now, to keep up with the progress of ARTS, so I just understand what others have written.
*/
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) return "";
        String prefix = strs[0];
        for (int i = 1; i < strs.length; i++)
            while (strs[i].indexOf(prefix) != 0) {
                prefix = prefix.substring(0, prefix.length() - 1);
                if (prefix.isEmpty()) return "";
            }        
        return prefix;
    }
}