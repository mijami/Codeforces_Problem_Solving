<h2><a href="https://codeforces.com/contest/1428/problem/C" target="_blank" rel="noopener noreferrer">1428C — ABBB</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1428C](https://codeforces.com/contest/1428/problem/C) |

## Topics
`brute force` `data structures` `greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">C. ABBB</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Zookeeper is playing a game. In this game, Zookeeper must use bombs to bomb a string that consists of letters '<span class="tex-font-style-tt">A</span>' and '<span class="tex-font-style-tt">B</span>'. He can use bombs to bomb a substring which is either "<span class="tex-font-style-tt">AB</span>" or "<span class="tex-font-style-tt">BB</span>". When he bombs such a substring, the substring gets deleted from the string and the remaining parts of the string get concatenated.</p><p>For example, Zookeeper can use two such operations: <span class="tex-font-style-tt">AAB</span><span class="tex-font-style-underline"><span class="tex-font-style-tt">AB</span></span><span class="tex-font-style-tt">BA</span> $$$\to$$$ <span class="tex-font-style-tt">AA</span><span class="tex-font-style-underline"><span class="tex-font-style-tt">BB</span></span><span class="tex-font-style-tt">A</span> $$$\to$$$ <span class="tex-font-style-tt">AAA</span>.</p><p>Zookeeper wonders what the shortest string he can make is. Can you help him find the length of the shortest string?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ $$$(1 \leq t \leq 20000)$$$  — the number of test cases. The description of the test cases follows.</p><p>Each of the next $$$t$$$ lines contains a single test case each, consisting of a non-empty string $$$s$$$: the string that Zookeeper needs to bomb. It is guaranteed that all symbols of $$$s$$$ are either '<span class="tex-font-style-tt">A</span>' or '<span class="tex-font-style-tt">B</span>'.</p><p>It is guaranteed that the sum of $$$|s|$$$ (length of $$$s$$$) among all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer: the length of the shortest string that Zookeeper can make.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021596429127870698" id="id008481924880929987" class="input-output-copier">Copy</div></div><pre id="id0021596429127870698">3
AAA
BABA
AABBBABBBB
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005319257507462003" id="id002246517141550456" class="input-output-copier">Copy</div></div><pre id="id005319257507462003">3
2
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, you can't make any moves, so the answer is $$$3$$$.</p><p>For the second test case, one optimal sequence of moves is <span class="tex-font-style-tt">B</span><span class="tex-font-style-underline"><span class="tex-font-style-tt">AB</span></span><span class="tex-font-style-tt">A</span> $$$\to$$$ <span class="tex-font-style-tt">BA</span>. So, the answer is $$$2$$$.</p><p>For the third test case, one optimal sequence of moves is <span class="tex-font-style-tt">AABBBAB<span class="tex-font-style-underline">BB</span>B</span> $$$\to$$$ <span class="tex-font-style-tt">AABBB<span class="tex-font-style-underline">AB</span>B</span> $$$\to$$$ <span class="tex-font-style-tt">A<span class="tex-font-style-underline">AB</span>BBB</span> $$$\to$$$ <span class="tex-font-style-tt">A<span class="tex-font-style-underline">BB</span>B</span> $$$\to$$$ <span class="tex-font-style-tt"><span class="tex-font-style-underline">AB</span></span> $$$\to$$$ (empty string). So, the answer is $$$0$$$.</p></div>