<h2><a href="https://codeforces.com/contest/1778/problem/A" target="_blank" rel="noopener noreferrer">1778A — Flip Flop Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1778A](https://codeforces.com/contest/1778/problem/A) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Flip Flop Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array of $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$. The integers are either $$$1$$$ or $$$-1$$$. You have to perform the following operation <span class="tex-font-style-bf">exactly once</span> on the array $$$a$$$:</p><ul> <li> Choose an index $$$i$$$ ($$$1 \leq i  \lt  n$$$) and flip the signs of $$$a_i$$$ and $$$a_{i+1}$$$. Here, flipping the sign means $$$-1$$$ will be $$$1$$$ and $$$1$$$ will be $$$-1$$$. </li></ul><p>What is the maximum possible value of $$$a_1 + a_2 + \ldots + a_n$$$ after applying the above operation?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 500$$$). Description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 10^5$$$), the length of the array $$$a$$$.</p><p>The next line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$a_i = 1$$$ or $$$a_i = -1$$$).</p><p>The sum of $$$n$$$ over all cases doesn't exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the maximum possible sum of the array $$$a$$$ you can get in a separate line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00360941677803322" id="id006448747130051541" class="input-output-copier">Copy</div></div><pre id="id00360941677803322"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">-1 1 1 -1 -1</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">1 1 -1 -1 -1</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">1 -1 -1 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00029882976183656762" id="id0020605467599367167" class="input-output-copier">Copy</div></div><pre id="id00029882976183656762">3
3
-2
4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first case, we can choose index $$$4$$$ and flip the signs of $$$a_4$$$ and $$$a_5$$$. After this operation, the sum will be $$$-1+1+1+1+1 = 3$$$. We can't make the sum larger than this.</p><p>In the third case, the only option is to choose the index $$$1$$$.</p></div>