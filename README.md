# A code collection for my programmming exercises

For a long time, I have been doing BSP related work. Although I am very interested in programming, I have been learning too much without a solid foundation, and have poor programming skills. This makes me sad, so I am ready to learn again, and to do enough proactive programming.

# [Free practice](http://huaqianlee.github.io/)

| #   | Summary                                                        |                   Solution                   | Comment                                                                         | Difficulty |
| --- | -------------------------------------------------------------- | :------------------------------------------: | ------------------------------------------------------------------------------- | ---------- |
| 1   | Caculate the decimal digits of an input integer                | [C](freepractice/c/decimal_digits_of_int.c)  | return value of `printf/sprintf/scanf/...` clusters                             | Easy       |
| 2   | Input one line included space                                  | [C](freepractice/c/input_line_with_space.c)  | `scanf("%[^\n]s",str);`                                                         | Easy       |
| 3   | Output with color                                              |   [C](freepractice/c/output_with_color.c)    | Format：`\033[attribute{;attribut...}moutput\033[0m`                            | Easy       |
| 4   | Output the date x days after the specified date                |     [C](freepractice/c/caculate_date.c)      |                                                                                 | Easy       |
| 5   | 9*9 mutiplication table                                        |  [C](freepractice/c/mutiplication_table.c)   | `j == 1 \| printf("\t");`                                                       | Easy       |
| 6   | Output random numbers between 1 and 100                        |       [C](freepractice/c/1_100_rand.c)       | Euler's function, theorem, Fermat's little theorem, remainder cycle knots, etc. | Hard       |
| 7   | Caculate PI                                                    |           [C](freepractice/c/PI.c)           | `π*r^2/(2r)^2 == m/n. ->  π = 4 * m/n`                                          | Easy       |
| 8   | Caculate the bits of integer from 1 to n                       |     [C](freepractice/c/bits_caculate.c)      | Methematical induction: `f[x] = f[x & (x-1)] + 1`                               | Medium     |
| 9   | Implement strlen,strcat,strcpy with sprintf                    | [C](freepractice/c/str_func_with_sprintf.c)  |                                                                                 | Easy       |
| 10  | Input and output a float with random digits                    |      [C](freepractice/c/random_float.c)      |                                                                                 | Easy       |
| 11  | Output the nums which couldn't be divided by n intigers in 1~m |        [C](freepractice/c/rm_multy.c)        |                                                                                 | Easy       |
| 12  | Output a string recursively                                    |     [C](freepractice/c/recurse_string.c)     | Termination condition: `str[i]`                                                 | Easy       |
| 13  | Imitate scanf to implement my_scanf                            |        [C](freepractice/c/my_scanf.c)        |                                                                                 | Easy       |
| 14  | Implement fibonacci with recursion and loop                    |   [C](freepractice/c/fibonacci_by_loop.c)    | How to implement with loop?                                                     | Medium     |
| 15  | Implement the loop program of indefinite layers                | [C](freepractice/c/indefinite_layers_loop.c) |                                                                                 | Medium     |

# [Hackerrank](https://www.hackerrank.com/)

| #   | Title                                                                                             | Solution                                                                              | Comment                                        | Difficulty |
| --- | ------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------- | ---------------------------------------------- | ---------- |
| 1   | [Data Types](https://www.hackerrank.com/challenges/30-data-types/problem)                         | [C](hackerrank/c/data_types.c)                                                        | `while(getchar != '\n')` to clean input buffer | Easy       |
| 2   | [Operators](https://www.hackerrank.com/challenges/30-operators/problem)                           | [C](hackerrank/c/operators.c)                                                         | Review questions carefully                     | Easy       |
| 3   | [Conditional Statements](https://www.hackerrank.com/challenges/30-conditional-statements/problem) | [C](hackerrank/c/conditional_statements.c)                                            |                                                | Easy       |
| 4   | [Class vs Instance](https://www.hackerrank.com/challenges/30-class-vs-instance/problem)           | [Python](hackerrank/python/class_vs_instance.py), [Java](hackerrank/java/Person.java) |                                                | Easy       |


# [Project Euler](https://projecteuler.net/)

| #   | Title                                                        | Solution                                   | Comment                                    | Difficulty |
| --- | ------------------------------------------------------------ | ------------------------------------------ | ------------------------------------------ | ---------- |
| 1   | [Multiples of 3 and 5](https://projecteuler.net/problem=1)   | [C](projecteuler/c/multi_of_3_5.c)         |                                            | Easy       |
| 2   | [Even Fibonacci numbers](https://projecteuler.net/problem=2) | [C](projecteuler/c/even_fibonacci_num.c)   | Regard four million as million, be careful | Easy       |
| 3   | [Largest prime factor](https://projecteuler.net/problem=3)   | [C](projecteuler/c/largest_prime_factor.c) |                                            | Easy       |


# [Leetcode](https://leetcode.com/problemset/all/)

| #   | Title                                                                                                     | Solution                                                    | Comment | Difficulty |
| --- | --------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------- | ------- | ---------- |
| 1   | [Two Sum](https://leetcode.com/problems/two-sum/)                                                         | [C](leetcode/c/twoSum.c), [Java](leetcode/java/TwoSum.java) |         | Easy       |
| 2   | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)                                         | [C](leetcode/c/addTwoNumbers.c)                             |         | Medium     |
| 7   | [Reverse Integer](https://leetcode.com/problems/reverse-integer/)                                         | [C](leetcode/c/reverseInteger.c)                            |         | Easy       |
| 9   | [Palindrome Number](https://leetcode.com/problems/palindrome-number/)                                     | [C](leetcode/c/isPalindrome.c)                              |         | Easy       |
| 13  | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/)                                       | [Java](leetcode/java/RomantoInteger.java)                   |         | Easy       |
| 14  | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)                             | [Java](leetcode/java/LongestCommonPrefix.java)              |         | Easy       |
| 20  | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)                                     | [Python](leetcode/python/ValidParentheses.py)               |         | Easy       |
| 21  | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)                           | [Java](leetcode/java/MergeTwoSortedLists.java)              |         | Esay       |
| 26  | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [Java](leetcode/java/RemoveDuplicatesfromSortedArray.java)  |         | Easy       |
