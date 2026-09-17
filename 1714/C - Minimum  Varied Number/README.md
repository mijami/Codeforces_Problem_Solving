<h2><a href="https://codeforces.com/contest/1714/problem/C" target="_blank" rel="noopener noreferrer">1714C — Minimum  Varied Number</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1714C](https://codeforces.com/contest/1714/problem/C) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Minimum Varied Number</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Find the minimum number with the given sum of digits $$$s$$$ such that <span class="tex-font-style-bf">all</span> digits in it are distinct (i.e. all digits are unique).</p><p>For example, if $$$s=20$$$, then the answer is $$$389$$$. This is the minimum number in which all digits are different and the sum of the digits is $$$20$$$ ($$$3+8+9=20$$$).</p><p>For the given $$$s$$$ print the required number.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 45$$$) — the number of test cases.</p><p>Each test case is specified by a line that contains the only integer $$$s$$$ ($$$1 \le s \le 45$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ integers — the answers to the given test cases.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00612618347077886" id="id0013222856169856756" class="input-output-copier">Copy</div></div><pre id="id00612618347077886"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">20</div><div class="test-example-line test-example-line-even test-example-line-2">8</div><div class="test-example-line test-example-line-odd test-example-line-3">45</div><div class="test-example-line test-example-line-even test-example-line-4">10</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006179946298538698" id="id0005626011819332044" class="input-output-copier">Copy</div></div><pre id="id006179946298538698">389
8
123456789
19
</pre></div></div></div>