<h2><a href="https://codeforces.com/contest/1933/problem/C" target="_blank" rel="noopener noreferrer">1933C — Turtle Fingers: Count the Values of k</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1933C](https://codeforces.com/contest/1933/problem/C) |

## Topics
`brute force` `implementation` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Turtle Fingers: Count the Values of k</div><div class="time-limit"><div class="property-title">time limit per test</div>5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three <span class="tex-font-style-bf">positive</span> integers $$$a$$$, $$$b$$$ and $$$l$$$ ($$$a,b,l \gt 0$$$). </p><p>It can be shown that there always exists a way to choose <span class="tex-font-style-bf">non-negative</span> (i.e. $$$\ge 0$$$) integers $$$k$$$, $$$x$$$, and $$$y$$$ such that $$$l = k \cdot a^x \cdot b^y$$$. </p><p>Your task is to find the number of distinct possible values of $$$k$$$ across all such ways.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The following $$$t$$$ lines contain three integers, $$$a$$$, $$$b$$$ and $$$l$$$ ($$$2 \le a, b \le 100$$$, $$$1 \le l \le 10^6$$$) — description of a test case.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines, with the $$$i$$$-th ($$$1 \le i \le t$$$) line containing an integer, the answer to the $$$i$$$-th test case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005641393855825847" id="id0013329528576583272" class="input-output-copier">Copy</div></div><pre id="id005641393855825847"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">2 5 20</div><div class="test-example-line test-example-line-even test-example-line-2">2 5 21</div><div class="test-example-line test-example-line-odd test-example-line-3">4 6 48</div><div class="test-example-line test-example-line-even test-example-line-4">2 3 72</div><div class="test-example-line test-example-line-odd test-example-line-5">3 5 75</div><div class="test-example-line test-example-line-even test-example-line-6">2 2 1024</div><div class="test-example-line test-example-line-odd test-example-line-7">3 7 83349</div><div class="test-example-line test-example-line-even test-example-line-8">100 100 1000000</div><div class="test-example-line test-example-line-odd test-example-line-9">7 3 2</div><div class="test-example-line test-example-line-even test-example-line-10">2 6 6</div><div class="test-example-line test-example-line-odd test-example-line-11">17 3 632043</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006385691161997886" id="id001713069061961301" class="input-output-copier">Copy</div></div><pre id="id006385691161997886">6
1
5
12
6
11
24
4
1
3
24
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$a=2, b=5, l=20$$$. The possible values of $$$k$$$ (and corresponding $$$x,y$$$) are as follows: </p><ul> <li> Choose $$$k = 1, x = 2, y = 1$$$. Then $$$k \cdot a^x \cdot b^y = 1 \cdot 2^2 \cdot 5^1 = 20 = l$$$. </li><li> Choose $$$k = 2, x = 1, y = 1$$$. Then $$$k \cdot a^x \cdot b^y = 2 \cdot 2^1 \cdot 5^1 = 20 = l$$$. </li><li> Choose $$$k = 4, x = 0, y = 1$$$. Then $$$k \cdot a^x \cdot b^y = 4 \cdot 2^0 \cdot 5^1 = 20 = l$$$. </li><li> Choose $$$k = 5, x = 2, y = 0$$$. Then $$$k \cdot a^x \cdot b^y = 5 \cdot 2^2 \cdot 5^0 = 20 = l$$$. </li><li> Choose $$$k = 10, x = 1, y = 0$$$. Then $$$k \cdot a^x \cdot b^y = 10 \cdot 2^1 \cdot 5^0 = 20 = l$$$. </li><li> Choose $$$k = 20, x = 0, y = 0$$$. Then $$$k \cdot a^x \cdot b^y = 20 \cdot 2^0 \cdot 5^0 = 20 = l$$$. </li></ul><p>In the second test case, $$$a=2, b=5, l=21$$$. Note that $$$l = 21$$$ is not divisible by either $$$a = 2$$$ or $$$b = 5$$$. Therefore, we can only set $$$x = 0, y = 0$$$, which corresponds to $$$k = 21$$$.</p><p>In the third test case, $$$a=4, b=6, l=48$$$. The possible values of $$$k$$$ (and corresponding $$$x,y$$$) are as follows: </p><ul> <li> Choose $$$k = 2, x = 1, y = 1$$$. Then $$$k \cdot a^x \cdot b^y = 2 \cdot 4^1 \cdot 6^1 = 48 = l$$$. </li><li> Choose $$$k = 3, x = 2, y = 0$$$. Then $$$k \cdot a^x \cdot b^y = 3 \cdot 4^2 \cdot 6^0 = 48 = l$$$. </li><li> Choose $$$k = 8, x = 0, y = 1$$$. Then $$$k \cdot a^x \cdot b^y = 8 \cdot 4^0 \cdot 6^1 = 48 = l$$$. </li><li> Choose $$$k = 12, x = 1, y = 0$$$. Then $$$k \cdot a^x \cdot b^y = 12 \cdot 4^1 \cdot 6^0 = 48 = l$$$. </li><li> Choose $$$k = 48, x = 0, y = 0$$$. Then $$$k \cdot a^x \cdot b^y = 48 \cdot 4^0 \cdot 6^0 = 48 = l$$$. </li></ul></div>