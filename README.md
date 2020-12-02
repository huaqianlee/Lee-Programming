A code collection for my programmming exercises
===

For a long time, I have been doing BSP related work. Although I am very interested in programming, I have been learning too much without a solid foundation, and have poor programming skills. This makes me sad, so I am ready to learn again, and to do enough proactive programming.

# Tips
1. Coding to verify when confused about some knowledge.
2. Coding with algorithmic thinking.

# [Free practice](http://huaqianlee.github.io/)

| #   | Summary                                                        |                   Solution                   | Comment                                                                                               | Difficulty |
| --- | -------------------------------------------------------------- | :------------------------------------------: | ----------------------------------------------------------------------------------------------------- | ---------- |
| 1   | Caculate the decimal digits of an input integer                | [C](freepractice/c/decimal_digits_of_int.c)  | return value of `printf/sprintf/scanf/...` clusters                                                   | Easy       |
| 2   | Input one line included space                                  | [C](freepractice/c/input_line_with_space.c)  | `scanf("%[^\n]s",str);`                                                                               | Easy       |
| 3   | Output with color                                              |   [C](freepractice/c/output_with_color.c)    | Format：`\033[attribute{;attribut...}moutput\033[0m`                                                  | Easy       |
| 4   | Output the date x days after the specified date                |     [C](freepractice/c/caculate_date.c)      |                                                                                                       | Easy       |
| 5   | 9*9 mutiplication table                                        |  [C](freepractice/c/mutiplication_table.c)   | `j == 1 \| printf("\t");`                                                                             | Easy       |
| 6   | Output random numbers between 1 and 100                        |       [C](freepractice/c/1_100_rand.c)       | Euler's function, theorem, Fermat's little theorem, remainder cycle knots, etc.                       | Hard       |
| 7   | Caculate PI                                                    |           [C](freepractice/c/PI.c)           | `π*r^2/(2r)^2 == m/n. ->  π = 4 * m/n`                                                                | Easy       |
| 8   | Caculate the bits of integer from 1 to n                       |     [C](freepractice/c/bits_caculate.c)      | Methematical induction: `f[x] = f[x & (x-1)] + 1`                                                     | Medium     |
| 9   | Implement strlen,strcat,strcpy with sprintf                    | [C](freepractice/c/str_func_with_sprintf.c)  |                                                                                                       | Easy       |
| 10  | Input and output a float with random digits                    |      [C](freepractice/c/random_float.c)      |                                                                                                       | Easy       |
| 11  | Output the nums which couldn't be divided by n intigers in 1~m |        [C](freepractice/c/rm_multy.c)        |                                                                                                       | Easy       |
| 12  | Output a string recursively                                    |     [C](freepractice/c/recurse_string.c)     | Termination condition: `str[i]`                                                                       | Easy       |
| 13  | Imitate scanf to implement my_scanf                            |        [C](freepractice/c/my_scanf.c)        |                                                                                                       | Easy       |
| 14  | Implement fibonacci with recursion and loop                    |   [C](freepractice/c/fibonacci_by_loop.c)    | How to implement with loop?                                                                           | Medium     |
| 15  | Implement the loop program of indefinite layers                | [C](freepractice/c/indefinite_layers_loop.c) |                                                                                                       | Medium     |
| 16  | Find the sum of all 3 or 5 multiples within 1000               |       [C](freepractice/c/sum_of_3_5.c)       | `sum += i * (i % 3 == 0 \|\| i % 5 == 0)` <br/>Let the computer caculate<br/>**Algorithmic thinking** | Easy       |


# [Hackerrank](https://www.hackerrank.com/)

| #   | Title                                                                                             | Solution                                                                              | Comment                                                                     | Difficulty |
| --- | ------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------- | --------------------------------------------------------------------------- | ---------- |
| 1   | [Data Types](https://www.hackerrank.com/challenges/30-data-types/problem)                         | [C](hackerrank/c/data_types.c)                                                        | `while(getchar != '\n')` to clean input buffer                              | Easy       |
| 2   | [Operators](https://www.hackerrank.com/challenges/30-operators/problem)                           | [C](hackerrank/c/operators.c)                                                         | Review questions carefully                                                  | Easy       |
| 3   | [Conditional Statements](https://www.hackerrank.com/challenges/30-conditional-statements/problem) | [C](hackerrank/c/conditional_statements.c)                                            |                                                                             | Easy       |
| 4   | [Class vs Instance](https://www.hackerrank.com/challenges/30-class-vs-instance/problem)           | [Python](hackerrank/python/class_vs_instance.py), [Java](hackerrank/java/Person.java) |                                                                             | Easy       |
| 5   | [Loop](https://www.hackerrank.com/challenges/30-loops/problem)                                    | [C](hackerrank/c/loop.c)                                                              |                                                                             | Easy       |
| 6   | [Let's Review](https://www.hackerrank.com/challenges/30-review-loop/problem)                      | [C](hackerrank/c/review_loop.c)                                                       | `Length of string - 1`                                                      | Easy       |
| 7   | [Arrays](https://www.hackerrank.com/challenges/30-arrays/problem)                                 | [C](hackerrank/c/arrays.c)                                                            |                                                                             | Easy       |
| 8   | [Dictionaries and Maps](https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem)   | [C](hackerrank/c/dictionaries_maps.c), [Python](hackerrank/python/dictinaries.py)     |                                                                             | Easy       |
| 9   | [Recursion](https://www.hackerrank.com/challenges/30-recursion/problem)                           | [C](hackerrank/c/recursion.c)                                                         |                                                                             | Easy       |
| 10  | [Binary number](https://www.hackerrank.com/challenges/30-binary-numbers/problem)                  | [C](hackerrank/c/binary_num.c)                                                        | `(n = n >> 1) == 0`                                                         | Easy       |
| 11  | [2D arrays](https://www.hackerrank.com/challenges/30-2d-arrays/problem)                           | [C](hackerrank/c/2d_arrays.c)                                                         | `if (ret < tmp || i == 0 && j == 0)`<br/>Do not forget the first hourglass` | Easy       |

# [GeeksforGeeks](https://practice.geeksforgeeks.org/home/)


# [Project Euler](https://projecteuler.net/)
> Sharing solution is safe untill #100.

| #   | Title                                                             | Solution                                          | Comment                                                                                   | Difficulty |
| --- | ----------------------------------------------------------------- | ------------------------------------------------- | ----------------------------------------------------------------------------------------- | ---------- |
| 1   | [Multiples of 3 and 5](https://projecteuler.net/problem=1)        | [C](projecteuler/c/multi_of_3_5.c)                |                                                                                           | Easy       |
| 2   | [Even Fibonacci numbers](https://projecteuler.net/problem=2)      | [C](projecteuler/c/even_fibonacci_num.c)          | Regard four million as million, be careful                                                | Easy       |
| 3   | [Largest prime factor](https://projecteuler.net/problem=3)        | [C](projecteuler/c/largest_prime_factor.c)        |                                                                                           | Easy       |
| 4   | [Largest palindrome product](https://projecteuler.net/problem=4)  | [C](projecteuler/c/palindrome_product.c)          | The temp valuse must be initialized, otherwise the value will be messy                    | Easy       |
| 5   | [Smallest multiple](https://projecteuler.net/problem=5)           | [C](projecteuler/c/smallest_mutiple.c)            | [GeeksforGeeks](https://www.geeksforgeeks.org/smallest-number-divisible-first-n-numbers/) | Easy       |
| 6   | [Sum square difference](https://projecteuler.net/problem=6)       | [C](projecteuler/c/sum_square_diff.c)             |                                                                                           | Easy       |
| 7   | [10001st prime](https://projecteuler.net/problem=7)               | [C](projecteuler/c/10001_prime_number.c)          | No algorithm mind                                                                         | Easy       |
| 8   | [Largest product in a series](https://projecteuler.net/problem=8) | [C](projecteuler/c/largest_product_in_a_series.c) |                                                                                           | Easy       |

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
