# A code collection for my programmming exercises

For a long time, I have been doing BSP related work. Although I am very interested in programming, I have been learning too much without a solid foundation, and have poor programming skills. This makes me sad, so I am ready to learn again, and to do enough proactive programming.

# C Language

First, start with the C language I am most familiar with.

| #   | Summary                                                        |            Solution            | Comment                                                                                 |
| --- | -------------------------------------------------------------- | :----------------------------: | --------------------------------------------------------------------------------------- |
| 1   | Caculate the decimal digits of an input integer                | [C](C/decimal_digits_of_int.c) | return value of printf/sprintf/scanf/... clusters                                       |
| 2   | Input one line included space                                  | [C](C/input_line_with_space.c) | scanf("%[^\n]s",str);                                                                   |
| 3   | Output with color                                              |   [C](C/output_with_color.c)   | Format：\033[attribute{;attribut...}moutput\033[0m                                      |
| 4   | Output the date x days after the specified date                |     [C](C/caculate_date.c)     |                                                                                         |
| 5   | 9*9 mutiplication table                                        |  [C](C/mutiplication_table.c)  | j == 1 \| printf("\t");                                                                 |
| 6   | Output random numbers between 1 and 100                        |      [C](C/1_100_rand.c)       | Euler's function, Euler's theorem, Fermat's little theorem, remainder cycle knots, etc. |
| 7   | Caculate PI                                                    |          [C](C/PI.c)           | π*r^2/(2r)^2 == m/n. ->  π = 4 * m/n.                                                   |
| 8   | Caculate the bits of integer from 1 to n                       |      [C](bits_caculate.c)      | Methematical induction: f[x] = f[x & (x-1)] + 1                                         |
| 9   | Implement strlen,strcat,strcpy with sprintf                    | [C](C/str_func_with_sprintf.c) |                                                                                         |
| 10  | Input and output a random float                                |     [C](C/random_float.c)      | str_func_with_sprintf                                                                   |
| 11  | Output the nums which couldn't be divided by n intigers in 1~m |       [C](C/rm_multy.c)        |                                                                                         |

