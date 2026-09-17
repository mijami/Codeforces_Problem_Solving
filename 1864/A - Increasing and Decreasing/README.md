<h2><a href="https://codeforces.com/contest/1864/problem/A" target="_blank" rel="noopener noreferrer">1864A — Increasing and Decreasing</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1864A](https://codeforces.com/contest/1864/problem/A) |

## Topics
`constructive algorithms` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Increasing and Decreasing</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three integers $$$x$$$, $$$y$$$, and $$$n$$$.</p><p>Your task is to construct an array $$$a$$$ consisting of $$$n$$$ integers which satisfies the following conditions:</p><ol> <li> $$$a_1=x$$$, $$$a_n=y$$$; </li><li> $$$a$$$ is <span class="tex-font-style-bf">strictly</span> increasing (i.e. $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_n$$$); </li><li> if we denote $$$b_i=a_{i+1}-a_{i}$$$ for $$$1 \leq i \leq n-1$$$, then $$$b$$$ is <span class="tex-font-style-bf">strictly</span> decreasing (i.e. $$$b_1  \gt  b_2  \gt  \ldots  \gt  b_{n-1}$$$). </li></ol><p>If there is no such array $$$a$$$, print a single integer $$$-1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$). The description of the test cases follows.</p><p>The only line of each test case contains three integers $$$x$$$, $$$y$$$, $$$n$$$ ($$$1 \le x  \lt  y \le 1000,3 \le n \le 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$. If there are multiple solutions, print any of them.</p><p>If there is no solution, print a single integer $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001746795399884753" id="id000658187463044625" class="input-output-copier">Copy</div></div><pre id="id001746795399884753"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 4 3</div><div class="test-example-line test-example-line-even test-example-line-2">1 3 3</div><div class="test-example-line test-example-line-odd test-example-line-3">100 200 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007918448458919403" id="id006596569788496924" class="input-output-copier">Copy</div></div><pre id="id0007918448458919403">1 3 4
-1
100 150 180 200
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$a=[1,3,4]$$$, which is strictly increasing. Next, $$$b_1=a_2-a_1=3-1=2$$$, $$$b_2=a_3-a_2=4-3=1$$$, thus $$$b=[2,1]$$$, which is strictly decreasing.</p><p>In the second test case, there is no array $$$a$$$ that satisfies all the conditions above.</p></div>