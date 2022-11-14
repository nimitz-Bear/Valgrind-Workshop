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
___

## [Task 1: Add 2 numbers using pointers](task1.c)
Fix the `main` function

It should take in two integer values and store them in `*ptr` and `*qtr`, then store the value of the addition in `sum`.
 
 Input: 3 <br/>
        4 <br/>
 Expected Output: 7

## [Task 2: Pass by reference](task2.c)
Pass by reference involves a function, in our case, `main`, calling the function `increment` which updates a variable in `main`. For this task, increment the value of `i` using pass by reference.

Input: i = 20 <br/>
Expected Output: i = 21




### Getting More Practice
---
The best thing you can do to improve your skills in C (and programming in
general) is practice. These are some useful websites for you to try out if you
want to go further.

If you want to challenge yourself, try out the [Advent Of Code](https://adventofcode.com) 
this year. During Advent (1 - 25 Dec) there's a new programming problems every day, you can 
complete them in any programming language you want, and you can join the HackSoc leaderboard to
compete with other people at the university! 

Try some of them out if you want to push yourself! Some of the mentors may be
able to help with these if they've done them before too, so drop a message in
\#programming on the Discord server if you get stuck.

# References
https://dyclassroom.com/c/c-dynamic-memory-allocation-malloc-function
