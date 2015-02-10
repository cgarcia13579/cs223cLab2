# cs223cLab2
# This is lab 2 for CPSC 223c

Lake Wobegon is a fictional town in the radio show A Prairie Home Companion. Supposedly, everyone in Wobegon is above average, which is mathematically impossible, making for a weak joke.

You will write a C program that answers the question: what is the average of those above average?

Your program should do the following:

    Use a loop to read non-negative integer values from standard input, using the scanf function, storing them in an array. When a negative value is entered, the loop should stop, and the negative integer should not be stored. You can assume that every value fits in the "int" data type.
    Compute the average (mean) of the value. Note that the mean of a set of integers is not necessarily an integer itself, so the average must be stored in a floating point variable.
    Now, compute the average (mean) of the input values that are above (strictly greater than) the average. Note that only approximately half of the values will be above average.
    Print the above-average-mean to standard output with the printf function.

For example, if you enter the following input

3
6
2
1
4
5
-1

 

the output should be

5.000000

because the average of 1, 2, 3, 4, 5, 6 is 3.5, so the above-average values are 4, 5, 6, and the average of them is (4+5+6)/3 = 5.

To complete this, you may need to review the following sections of the C Programming Wikibook:

    Basics of Compilation
    Variables
    Simple Input and Output

Also, I recommend copying the test case above into a text file and using I/O redirection to feed the inputs into your program, instead of typing them in by hand. Recall that I/O Redirection was explained in the Learning the Shell text.

After you have your .c file running and working, commit and push it to your github repository. I will grade what is in that repository, so you should double check that it really is there, before the deadline.

Keep in mind that I may test your code on inputs aside from the one given above.
