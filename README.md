# [Competitive programming cheatsheet](https://jonny-exe.github.io/competitive-programming-cheatsheet)

This is a cheat sheet made for when you are stuck on a problem and can't find the optimal solution. This will refresh your memory and hopefully help you find the concept/approach you should be using for your problem.

This is not made to teach your any of these concepts/approaches, it's only made to help you quickly identify which one you should be using for each problem.

If you'd like to start in Competitive Programming, I'd recommend reading the [Competitive Programmer's Handbook](https://cses.fi/book/book.pdf) by Antti Laaksonen. Most, if not all of the things mentioned here are explained in detail in this book.

If you aren't familiar with one of these concepts/approaches I'd recommend you learn it at [Usaco Guide](https://usaco.guide/). That is also the source for most of the example problems.


_Note: time complexity and space complexity are very dependent on the input data and therefore the ones written here are purely an estimation of what they usually are in common problems._

## Approaches/Concepts

### Complete search
 - _Problems_: this is used in problems where you need to check every possible solution and pick out the one your need.
 - _Time complexity_: `O(n²) || O(n³)` **Depending on input dimensions**
 - _Example problem_:  [Cow Gymnastics](http://www.usaco.org/index.php?page=viewproblem2&cpid=963)

### Sorting
 - _Problems_: this is used in problems where sorting will make it easier to compare/find something.
 - _Time complexity_: `O(n * log n)`
 - _Example problem_:  [Kayaking](https://codeforces.com/contest/863/problem/B)

### [Greedy algorithms](https://en.wikipedia.org/wiki/Greedy_algorithm)
 - _Description_: greedy algorithms are those which always make the locally optimal choice at each stage of the problem.
 - _Problems_: this is used in problems where you can always make the right decision with your current information.
 - _Time complexity_: `O(n)`
 - _Example problem_:  [Coin Problem](https://cses.fi/problemset/task/1630)

### [Binary search](https://en.wikipedia.org/wiki/Binary_search_algorithm)
 - _Problems_: this is usually not enough to solve an entire problem, but it helps finding items in a sorted array.
 - _Time complexity_: `O(log n)` **If the array is sorted, else** `O(n * log n)`
 - _Example problem_: [Social Distancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=1038)

### [Prefix sum](https://en.wikipedia.org/wiki/Prefix_sum)
 - _Description_: a prefix sum is usually an array, where all the values are changed, with, the sum of all the previous values and the value you are changing.
 - _Problems_: this is used in problems where calculating a prefix/cumulative sum beforehand, avoids computation afterwards.
 - _Time complexity_: `O(n)`
 - _Example problem_: [Subsequences summing to 7](http://www.usaco.org/index.php?page=viewproblem2&cpid=595)

### [Dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming)
 - _Problems_: this is used in problems which you can divide in sub-problems. 
 - _Time complexity_: `O(2^n)`
 - _Example problem_: [Coin combinations](https://cses.fi/problemset/task/1635/)

### Sliding window
 - _Problems_: this is used in problems where want to compute a local value for each (constant length) sub-array in the original array.
 - _Time complexity_: `O(n * log n)` **If the window is very large** `O(n²)`
 - _Example problem_: [Subarray Distinct Values](https://cses.fi/problemset/task/2428)

If none from these approaches will do it for your problem, maybe using the right  data type will. Usually these data types will have to be mixed with one of the approaches seen above.

## Data types

### Maps
 - _Problems_: this is used in problems where you need to associate 2 values, and read them in `O(1)` time.
 - _Example problem_: [Team Tic Tac Toe](http://www.usaco.org/index.php?page=viewproblem2&cpid=831)
 - _Note_: in `C++` there is a `map` and an `unordered_map`.

### Sets
 - _Problems_: this is used in problems where: you need to be able to check if a value exist, you need to get unique values in `O(n)` (standard way with array is `O(log n))` time.
 -  _Example problem_: [Sum of two values](https://cses.fi/problemset/task/1640)
 - _Note_: in `C++` there is a `set` and an `unordered_set`.
 
## Fast I/O
Adding these two lines will spead up the reading of your program.
```
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

## Sources
 - [Wikipedia](https://wikipedia.org) for some descriptions
 - [CSES](https://cses.fi), [Codeforces](https://codeforces.com), [USACO](http://usaco.org) for the problems
 - [Usaco Guide](https://usaco.guide) for th

## Improvements?
If you feel like something is missing or you'd like to improve it, PR's are appreciated.
