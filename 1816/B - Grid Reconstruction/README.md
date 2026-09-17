<h2><a href="https://codeforces.com/contest/1816/problem/B" target="_blank" rel="noopener noreferrer">1816B — Grid Reconstruction</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1816B](https://codeforces.com/contest/1816/problem/B) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Grid Reconstruction</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Consider a $$$2 \times n$$$ grid, where $$$n$$$ is an <span class="tex-font-style-bf">even</span> integer. You may place the integers $$$1, 2, \ldots, 2n$$$ on the grid, using each integer <span class="tex-font-style-bf">exactly once</span>.</p><p>A <span class="tex-font-style-it">path</span> is a sequence of cells achieved by starting at $$$(1, 1)$$$, then repeatedly walking either downwards or to the right, and stopping when $$$(2, n)$$$ is reached. The path should not extend beyond the grid.</p><p>The <span class="tex-font-style-it">cost</span> of a path is the alternating sum of the numbers written on the cells in a path. That is, let the numbers written on the cells be $$$a_1, a_2, \ldots, a_k$$$ (in the order that it is visited), the cost of the path is $$$a_1 - a_2 + a_3 - a_4 + \ldots = \sum_{i=1}^k a_i \cdot (-1)^{i+1}$$$.</p><p>Construct a way to place the integers $$$1, 2, \ldots, 2n$$$ on the grid, such that the minimum cost over all paths from $$$(1, 1)$$$ to $$$(2, n)$$$ is maximized. If there are multiple such grids that result in the maximum value, output any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases. The description of test cases follows.</p><p>The first and the only line of each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 10^5$$$, $$$n$$$ is even) — the number of the columns in the grid.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$2$$$ lines, each containing $$$n$$$ integers — the desired grid. If there are multiple solutions, output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007183426743896173" id="id006354290977117001" class="input-output-copier">Copy</div></div><pre id="id007183426743896173"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007878978013289851" id="id007256528847832407" class="input-output-copier">Copy</div></div><pre id="id007878978013289851">3 2
1 4
8 2 6 4
1 5 3 7
11 5 9 1 7 3
6 10 2 8 4 12
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there are only two paths from cell $$$(1, 1)$$$ to cell $$$(2, 2)$$$. Their costs are $$$3-1+4=6$$$ and $$$3-2+4=5$$$. Then the minimum cost is $$$5$$$, which is the maximum possible value.</p><p>In the second test case, there are four paths from cell $$$(1, 1)$$$ to cell $$$(2, 4)$$$. Their costs are $$$8-1+5-3+7=16$$$, $$$8-2+5-3+7=15$$$, $$$8-2+6-3+7=16$$$, and $$$8-2+6-4+7=15$$$. Then the minimum value is $$$15$$$, which is the maximum possible value.</p></div>