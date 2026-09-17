<h2><a href="https://codeforces.com/contest/1294/problem/B" target="_blank" rel="noopener noreferrer">1294B — Collecting Packages</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1294B](https://codeforces.com/contest/1294/problem/B) |

## Topics
`implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Collecting Packages</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a robot in a warehouse and $$$n$$$ packages he wants to collect. The warehouse can be represented as a coordinate grid. Initially, the robot stays at the point $$$(0, 0)$$$. The $$$i$$$-th package is at the point $$$(x_i, y_i)$$$. It is guaranteed that there are no two packages at the same point. It is also guaranteed that the point $$$(0, 0)$$$ doesn't contain a package.</p><p>The robot is semi-broken and only can move up ('<span class="tex-font-style-tt">U</span>') and right ('<span class="tex-font-style-tt">R</span>'). In other words, in one move the robot can go from the point $$$(x, y)$$$ to the point ($$$x + 1, y$$$) or to the point $$$(x, y + 1)$$$.</p><p>As we say above, the robot wants to collect all $$$n$$$ packages (<span class="tex-font-style-bf">in arbitrary order</span>). He wants to do it with the minimum possible number of moves. If there are several possible traversals, the robot wants to choose the lexicographically smallest path.</p><p>The string $$$s$$$ of length $$$n$$$ is lexicographically less than the string $$$t$$$ of length $$$n$$$ if there is some index $$$1 \le j \le n$$$ that for all $$$i$$$ from $$$1$$$ to $$$j-1$$$ $$$s_i = t_i$$$ and $$$s_j  \lt  t_j$$$. It is the standard comparison of string, like in a dictionary. Most programming languages compare strings in this way.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Then test cases follow.</p><p>The first line of a test case contains one integer $$$n$$$ ($$$1 \le n \le 1000$$$) — the number of packages.</p><p>The next $$$n$$$ lines contain descriptions of packages. The $$$i$$$-th package is given as two integers $$$x_i$$$ and $$$y_i$$$ ($$$0 \le x_i, y_i \le 1000$$$) — the $$$x$$$-coordinate of the package and the $$$y$$$-coordinate of the package.</p><p>It is guaranteed that there are no two packages at the same point. It is also guaranteed that the point $$$(0, 0)$$$ doesn't contain a package.</p><p>The sum of all values $$$n$$$ over test cases in the test doesn't exceed $$$1000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the answer for each test case.</p><p>If it is impossible to collect all $$$n$$$ packages in some order starting from ($$$0,0$$$), print "<span class="tex-font-style-tt">NO</span>" on the first line.</p><p>Otherwise, print "<span class="tex-font-style-tt">YES</span>" in the first line. Then print the <span class="tex-font-style-bf">shortest</span> path — a string consisting of characters '<span class="tex-font-style-tt">R</span>' and '<span class="tex-font-style-tt">U</span>'. Among all such paths choose the lexicographically smallest path.</p><p><span class="tex-font-style-bf">Note that in this problem "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" can be only uppercase words, i.e. "<span class="tex-font-style-tt">Yes</span>", "<span class="tex-font-style-tt">no</span>" and "<span class="tex-font-style-tt">YeS</span>" are not acceptable</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020637963288946015" id="id0020380258506094429" class="input-output-copier">Copy</div></div><pre id="id0020637963288946015">3
5
1 3
1 2
3 3
5 5
4 3
2
1 0
0 1
1
4 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007511071798651786" id="id005527853710039252" class="input-output-copier">Copy</div></div><pre id="id007511071798651786">YES
RUUURRRRUU
NO
YES
RRRRUUU
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case in the example the optimal path <span class="tex-font-style-tt">RUUURRRRUU</span> is shown below: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/9d2b3d353d2a6c0e6b3cc24566f3fd193a183cac.png" style="zoom: 40.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>