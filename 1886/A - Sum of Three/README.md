<h2><a href="https://codeforces.com/contest/1886/problem/A" target="_blank" rel="noopener noreferrer">1886A — Sum of Three</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1886A](https://codeforces.com/contest/1886/problem/A) |

## Topics
`brute force` `constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Sum of Three</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp has an integer $$$n$$$.</p><p>He wants to represent his number as a sum of three <span class="tex-font-style-bf">distinct</span> positive integers $$$x$$$, $$$y$$$, and $$$z$$$. Additionally, Monocarp wants none of the numbers $$$x$$$, $$$y$$$, and $$$z$$$ to be divisible by $$$3$$$.</p><p>Your task is to help Monocarp to find any valid triplet of distinct positive integers $$$x$$$, $$$y$$$, and $$$z$$$, or report that such a triplet does not exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of testcases.</p><p>The only line of each testcase contains a single integer $$$n$$$ ($$$1 \le n \le 10^{9}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, if there is no valid triplet $$$x$$$, $$$y$$$, and $$$z$$$, print <span class="tex-font-style-tt">NO</span> on the first line.</p><p>Otherwise, print <span class="tex-font-style-tt">YES</span> on the first line. On the second line, print any valid triplet of distinct positive integers $$$x$$$, $$$y$$$, and $$$z$$$ such that $$$x + y + z = n$$$, and none of the printed numbers are divisible by $$$3$$$. If there are multiple valid triplets, you can print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005444381133050441" id="id008025809059039247" class="input-output-copier">Copy</div></div><pre id="id005444381133050441"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">10</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">15</div><div class="test-example-line test-example-line-even test-example-line-4">9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010647004687997952" id="id007545192844200235" class="input-output-copier">Copy</div></div><pre id="id0010647004687997952">YES
4 5 1
NO
YES
2 8 5
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, one of the valid triplets is $$$x = 4$$$, $$$y = 5$$$, $$$z = 1$$$. None of these numbers are divisible by three, and $$$4 + 5 + 1 = 10$$$.</p><p>In the second testcase, there is no valid triplet.</p><p>In the third testcase, one of the valid triplets is $$$x = 2$$$, $$$y = 8$$$, $$$z = 5$$$. None of these numbers are divisible by three, and $$$2 + 8 + 5 = 15$$$.</p><p>In the fourth testcase, there is no valid triplet.</p></div>