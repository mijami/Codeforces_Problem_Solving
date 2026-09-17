<h2><a href="https://codeforces.com/contest/1635/problem/B" target="_blank" rel="noopener noreferrer">1635B — Avoid Local Maximums</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1635B](https://codeforces.com/contest/1635/problem/B) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Avoid Local Maximums</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of size $$$n$$$. Each element in this array is an integer between $$$1$$$ and $$$10^9$$$.</p><p>You can perform several operations to this array. During an operation, you can replace an element in the array with any integer between $$$1$$$ and $$$10^9$$$. </p><p>Output the minimum number of operations needed such that the resulting array doesn't contain any local maximums, and the resulting array after the operations.</p><p>An element $$$a_i$$$ is a local maximum if it is strictly larger than both of its neighbors (that is, $$$a_i  \gt  a_{i - 1}$$$ and $$$a_i  \gt  a_{i + 1}$$$). Since $$$a_1$$$ and $$$a_n$$$ have only one neighbor each, they will never be a local maximum.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line will contain a single integer $$$t$$$ $$$(1 \leq t \leq 10000)$$$ — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ $$$(2 \leq n \leq 2 \cdot 10^5)$$$ — the size of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots ,a_n$$$ $$$(1 \leq a_i \leq 10^9)$$$, the elements of array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, first output a line containing a single integer $$$m$$$ — minimum number of operations required. Then ouput a line consist of $$$n$$$ integers — the resulting array after the operations. Note that this array should differ in exactly $$$m$$$ elements from the initial array.</p><p>If there are multiple answers, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004271147309550597" id="id009640530928084655" class="input-output-copier">Copy</div></div><pre id="id004271147309550597">5
3
2 1 2
4
1 2 3 1
5
1 2 1 2 1
9
1 2 1 3 2 3 1 2 1
9
2 1 3 1 3 1 3 1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004804888148013712" id="id00021868591227857892" class="input-output-copier">Copy</div></div><pre id="id004804888148013712">0
2 1 2
1
1 3 3 1
1
1 2 2 2 1
2
1 2 3 3 2 3 3 2 1
2
2 1 3 3 3 1 1 1 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the array contains no local maximum, so we don't need to perform operations.</p><p>In the second example, we can change $$$a_2$$$ to $$$3$$$, then the array don't have local maximums.</p></div>