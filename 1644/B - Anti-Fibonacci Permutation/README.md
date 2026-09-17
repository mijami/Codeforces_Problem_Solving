<h2><a href="https://codeforces.com/contest/1644/problem/B" target="_blank" rel="noopener noreferrer">1644B — Anti-Fibonacci Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1644B](https://codeforces.com/contest/1644/problem/B) |

## Topics
`brute force` `constructive algorithms` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Anti-Fibonacci Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call a permutation $$$p$$$ of length $$$n$$$ <span class="tex-font-style-bf">anti-Fibonacci</span> if the condition $$$p_{i-2} + p_{i-1} \ne p_i$$$ holds for all $$$i$$$ ($$$3 \le i \le n$$$). Recall that the permutation is the array of length $$$n$$$ which contains each integer from $$$1$$$ to $$$n$$$ exactly once.</p><p>Your task is for a given number $$$n$$$ print $$$n$$$ <span class="tex-font-style-bf">distinct</span> anti-Fibonacci permutations of length $$$n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 48$$$) — the number of test cases. </p><p>The single line of each test case contains a single integer $$$n$$$ ($$$3 \le n \le 50$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$n$$$ lines. Each line should contain an anti-Fibonacci permutation of length $$$n$$$. In each test case, you cannot print any permutation more than once.</p><p>If there are multiple answers, print any of them. It can be shown that it is always possible to find $$$n$$$ different anti-Fibonacci permutations of size $$$n$$$ under the constraints of the problem.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005825289574039486" id="id008154670313053903" class="input-output-copier">Copy</div></div><pre id="id005825289574039486"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-even test-example-line-2">3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002935580693889319" id="id007089015813056827" class="input-output-copier">Copy</div></div><pre id="id002935580693889319">4 1 3 2
1 2 4 3
3 4 1 2
2 4 1 3
3 2 1
1 3 2
3 1 2
</pre></div></div></div>