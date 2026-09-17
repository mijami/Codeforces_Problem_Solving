<h2><a href="https://codeforces.com/contest/1616/problem/A" target="_blank" rel="noopener noreferrer">1616A — Integer Diversity</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1616A](https://codeforces.com/contest/1616/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Integer Diversity</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$. You choose any subset of the given numbers (possibly, none or all numbers) and negate these numbers (i. e. change $$$x \to (-x)$$$). What is the maximum number of different values in the array you can achieve?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains one integer $$$t$$$ ($$$1 \leq t \leq 100$$$): the number of test cases.</p><p>The next lines contain the description of the $$$t$$$ test cases, two lines per a test case.</p><p>In the first line you are given one integer $$$n$$$ ($$$1 \leq n \leq 100$$$): the number of integers in the array.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$-100 \leq a_i \leq 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer: the maximum number of different elements in the array that you can achieve negating numbers in the array.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009157831124465172" id="id0014864482516505662" class="input-output-copier">Copy</div></div><pre id="id009157831124465172">3
4
1 1 2 2
3
1 2 3
2
0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008911878951672434" id="id005732141109728989" class="input-output-copier">Copy</div></div><pre id="id008911878951672434">4
3
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example we can, for example, negate the first and the last numbers, achieving the array $$$[-1, 1, 2, -2]$$$ with four different values.</p><p>In the second example all three numbers are already different.</p><p>In the third example negation does not change anything.</p></div>