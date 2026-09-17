<h2><a href="https://codeforces.com/contest/1647/problem/A" target="_blank" rel="noopener noreferrer">1647A — Madoka and Math Dad</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1647A](https://codeforces.com/contest/1647/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Madoka and Math Dad</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Madoka finally found the administrator password for her computer. Her father is a well-known popularizer of mathematics, so the password is the answer to the following problem.</p><p>Find the maximum decimal number without zeroes and with no equal digits in a row, such that the sum of its digits is $$$n$$$.</p><p>Madoka is too tired of math to solve it herself, so help her to solve this problem!</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. Description of the test cases follows.</p><p>The only line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 1000$$$) — the required sum of the digits.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the maximum number you can obtain.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0039577811416020947" id="id0024604286756762106" class="input-output-copier">Copy</div></div><pre id="id0039577811416020947"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0039557902198891803" id="id008495371894645559" class="input-output-copier">Copy</div></div><pre id="id0039557902198891803">1
2
21
121
212
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The only numbers with the sum of digits equal to $$$2$$$ without zeros are $$$2$$$ and $$$11$$$. But the last one has two ones in a row, so it's not valid. That's why the answer is $$$2$$$.</p><p>The only numbers with the sum of digits equal to $$$3$$$ without zeros are $$$111$$$, $$$12$$$, $$$21$$$, and $$$3$$$. The first one has $$$2$$$ ones in a row, so it's not valid. So the maximum valid number is $$$21$$$.</p><p>The only numbers with the sum of digits equals to $$$4$$$ without zeros are $$$1111$$$, $$$211$$$, $$$121$$$, $$$112$$$, $$$13$$$, $$$31$$$, $$$22$$$, and $$$4$$$. Numbers $$$1111$$$, $$$211$$$, $$$112$$$, $$$22$$$ aren't valid, because they have some identical digits in a row. So the maximum valid number is $$$121$$$.</p></div>