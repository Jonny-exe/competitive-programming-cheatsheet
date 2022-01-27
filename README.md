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
 - _Problems_: this is used in problems where you want to compute a local value for each (constant length) sub-array in the original array.
 - _Time complexity_: `O(n * log n)` **If the window is very large** `O(n²)`
 - _Example problem_: [Subarray Distinct Values](https://cses.fi/problemset/task/2428)

### [Binary search](https://en.wikipedia.org/wiki/Binary_search_algorithm)
 - _Problems_: this is usually not enough to solve an entire problem, but it helps finding items in a sorted array.
 - _Time complexity_: `O(log n)` **If the array is sorted, else** `O(n * log n)`
 - _Example problem_: [Social Distancing](http://www.usaco.org/index.php?page=viewproblem2&cpid=1038)
 - <details>
   <summary><i>Pseudocode:</i></summary>

   <pre>
   # Source: https://en.wikipedia.org/wiki/Binary_search_algorithm#Procedure

   function binary_search(A, n, T) is # A: array, n: length, T: target
    L := 0
    R := n − 1
    while L ≤ R do
        m := floor((L + R) / 2)
        if A[m] < T then
            L := m + 1
        else if A[m] > T then
            R := m − 1
        else:
            return m
    return unsuccessful

   </pre>
   </details>

### Depth-first search
 - _Description_: this is an algorithm which traverses a graph by searching into all reachable nodes, while keeping track of visited ones.
 - _Problems_: this is used in problems where you need to traverse a graph.
 - _Time complexity_: `O(n)`
 - _Example problem_: [Closing the farm](http://www.usaco.org/index.php?page=viewproblem2&cpid=644)
 - <details>
   <summary><i>Code:</i></summary>

   <pre>
   // c++
   // Source: Competitive programmer's handbook, Chapter 12
   vector<int> adj[N];
   bool visited[N];

   void dfs(int s) {
     if (visited[s]) return;
     visited[s] = true;
     // process node s
     for (auto u: adj[s]) {
       dfs(u);
     }
   }
   </pre>
   </details>

### Breadth-first search
  - _Description_: this is an algorithm which traverses a graph by searching into all nodes in increasing order of their distance
from the starting node.
  - _Problems_: this is used in problems where you traverse a graph while keeping track of the distance between nodes.
  - _Time complexity_: `O(n)`
  - <details>
    <summary><i>Code:</i></summary>

    <pre>
    // c++
    // Source: Competitive programmer's handbook, Chapter 12
    queue<int> q;
    bool visited[N];
    int distance[N];

    visited[x] = true;
    distance[x] = 0;
    q.push(x);
    while (!q.empty()) {
      int s = q.front(); q.pop();
      // process node s
      for (auto u : adj[s]) {
        if (visited[u]) continue;
        visited[u] = true;
        distance[u] = distance[s]+1;
        q.push(u);
      }
    }
    </pre>
    </details>


If none from these approaches will do it for your problem, maybe using the right  data type will. Usually these data types will have to be mixed with one of the approaches seen above.

## Data types

### Maps
 - _Problems_: this is used in problems where you need to associate 2 values, and read them in `O(1)` time.
 - _Example problem_: [Team Tic Tac Toe](http://www.usaco.org/index.php?page=viewproblem2&cpid=831)
 - _Note_: in `C++` there is a `map` and an `unordered_map`.

### Sets
 - _Problems_: this is used in problems where: you need to be able to check if a value exist, you need to get unique values in `O(n)` (standard way with array is `O(n * log n)` time.
 -  _Example problem_: [Sum of two values](https://cses.fi/problemset/task/1640)
 - _Note_: in `C++` there is a `set` and an `unordered_set`.

## Miscelaneous
Sometimes you're using the right approach but things still don't work. I that case you can try these small fixes/optimizations.

### Fast I/O
 - _Description_: Adding these two lines will spead up the reading/writing of your program.
 - _Note_: this only works with `C++`.
 - <details>
   <summary><i>Code:</i></summary>

   <pre>
   // c++
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   </pre>
   </details>

### Integer overflow
 - _Description_: some problems require using a `long long` type instead of an `int`. If you experience some kind of `int` overflow, try with a `long long`.

## Sources
 - [Wikipedia](https://wikipedia.org) for some descriptions
 - [CSES](https://cses.fi), [Codeforces](https://codeforces.com), [USACO](http://usaco.org) for the problems
 - [Usaco Guide](https://usaco.guide) for the problem selection and some explanations

## Improvements?
If you feel like something is missing or you'd like to improve it, PR's are appreciated.
