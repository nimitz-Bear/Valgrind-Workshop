# Valgrind Mentor Workshop
---

Welcome to the valgrind mentor session! 

To get a copy of this repo (so you can code your own solutions), clone this repo by running the following command:

```
git clone https://github.com/itsbishalb/C-Workshop.git
```

Feel free to ask any questions during the mentor session, or afterwards on discord.

## Theory Questions
---
### Question 1
How would you allocate memory to these variables C? Use any variable name you like.

<ul>
  <li>An integer array of length 16.</li>
  <li>An integer pointer, with a variable number of entries.</li>
  <li>A 2D Array of Strings</li>
</ul>
  
## Practical Tasks

These are some valgrind and memory managment related tasks for you to practice with. 
___



## [Task 1: Iterate through the Integer Array](task1.c)
Fix the `main` function to get rid of compiler/
 
 Expected Output: 
 0
         1
         2
         3
         4
         5
         6
         7
         8
         9
Enter this in terminal to check memory mangment: `valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./task2`

It should say this to indicate no errors `
ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)`

## [Task 2: Add together integers](task2.c)
Write a program that adds a variable amount of integers together

Write a program in C to dynamically allocate memory using malloc function to store N integer numbers entered by the user and then print the sum

Enter value of N [1-10]: 5
Enter 5 integer number(s)
Enter #1: 1
Enter #2: 23
Enter #3: 4
Enter #4: 2
Enter #5: 3
Sum: 33  

Enter this in terminal to check memory mangment: `valgrind --tool=memcheck --leak-check=yes --show-reachable=yes ./task2`

It should say this to indicate no errors `
ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)`



### Getting More Practice
---
The best thing you can do to improve your skills in C (and programming in
general) is practice. These are some useful websites for you to try out if you
want to go further.

If you're struggling with Memory allocation or pointers, like I was last year, the best options would probably be tutorials and the tutorial tasks on Gitlab. YouTube is a good resource to learn stuff, here are some videos I found helpful:

- [Pointers](https://www.youtube.com/watch?v=2ybLD6_2gKM&t=3s)
- [Valgrind Usage](https://www.youtube.com/watch?v=DyqstSE470s)
- [Valgrind Cheat Sheet](https://bytes.usc.edu/cs104/wiki/valgrind/)


If you're comfortable with pointers and memory management want to challenge yourself, try out the [Advent Of Code](https://adventofcode.com) this year. You can do this in C (will probably be hard) or any other language. Max might create a leaderboard on the server for Advent of Code.

Try some of them out if you want to push yourself! Some of the mentors may be
able to help with these if they've done them before too, so drop a message in
\#programming or \#mentor-sessions on the Discord server if you get stuck.

# References
https://dyclassroom.com/c/c-dynamic-memory-allocation-malloc-function
