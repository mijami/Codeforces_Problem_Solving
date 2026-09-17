<h2><a href="https://codeforces.com/contest/1699/problem/A" target="_blank" rel="noopener noreferrer">1699A — The Third Three Number Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1699A](https://codeforces.com/contest/1699/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. The Third Three Number Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$n$$$. Your task is to find <span class="tex-font-style-bf">any</span> three integers $$$a$$$, $$$b$$$ and $$$c$$$ ($$$0 \le a, b, c \le 10^9$$$) for which $$$(a\oplus b)+(b\oplus c)+(a\oplus c)=n$$$, or determine that there are no such integers.</p><p>Here $$$a \oplus b$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a> of $$$a$$$ and $$$b$$$. For example, $$$2 \oplus 4 = 6$$$ and $$$3 \oplus 1=2$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The following lines contain the descriptions of the test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^9$$$). </p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print <span class="tex-font-style-bf">any</span> three integers $$$a$$$, $$$b$$$ and $$$c$$$ ($$$0 \le a, b, c \le 10^9$$$) for which $$$(a\oplus b)+(b\oplus c)+(a\oplus c)=n$$$. If no such integers exist, print $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008463939808372267" id="id0008447293935247213" class="input-output-copier">Copy</div></div><pre id="id0008463939808372267"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-odd test-example-line-3">12</div><div class="test-example-line test-example-line-even test-example-line-4">2046</div><div class="test-example-line test-example-line-odd test-example-line-5">194723326</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001878723395359423" id="id007275896041985097" class="input-output-copier">Copy</div></div><pre id="id001878723395359423">3 3 1
-1
2 4 6
69 420 666
12345678 87654321 100000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$a=3$$$, $$$b=3$$$, $$$c=1$$$, so $$$(3 \oplus 3)+(3 \oplus 1) + (3 \oplus 1)=0+2+2=4$$$.</p><p>In the second test case, there are no solutions.</p><p>In the third test case, $$$(2 \oplus 4)+(4 \oplus 6) + (2 \oplus 6)=6+2+4=12$$$.</p></div>