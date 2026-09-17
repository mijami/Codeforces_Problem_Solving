<h2><a href="https://codeforces.com/contest/1779/problem/A" target="_blank" rel="noopener noreferrer">1779A — Hall of Fame</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1779A](https://codeforces.com/contest/1779/problem/A) |

## Topics
`constructive algorithms` `greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Hall of Fame</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Thalia is a Legendary Grandmaster in chess. She has $$$n$$$ trophies in a line numbered from $$$1$$$ to $$$n$$$ (from left to right) and a lamp standing next to each of them (the lamps are numbered as the trophies).</p><p>A lamp can be directed either to the left or to the right, and it illuminates all trophies in that direction (but not the one it is next to). More formally, Thalia has a string $$$s$$$ consisting only of characters '<span class="tex-font-style-tt">L</span>' and '<span class="tex-font-style-tt">R</span>' which represents the lamps' current directions. The lamp $$$i$$$ illuminates:</p><ul> <li> trophies $$$1,2,\ldots, i-1$$$ if $$$s_i$$$ is '<span class="tex-font-style-tt">L</span>'; </li><li> trophies $$$i+1,i+2,\ldots, n$$$ if $$$s_i$$$ is '<span class="tex-font-style-tt">R</span>'. </li></ul><p>She can perform the following operation <span class="tex-font-style-bf">at most</span> once:</p><ul> <li> Choose an index $$$i$$$ ($$$1 \leq i  \lt  n$$$); </li><li> Swap the lamps $$$i$$$ and $$$i+1$$$ (without changing their directions). That is, swap $$$s_i$$$ with $$$s_{i+1}$$$. </li></ul><p>Thalia asked you to illuminate all her trophies (make each trophy illuminated by at least one lamp), or to tell her that it is impossible to do so. If it is possible, you can choose to perform an operation or to do nothing. Notice that lamps <span class="tex-font-style-bf">cannot</span> change direction, it is only allowed to swap adjacent ones.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \leq t \leq 10\,000$$$). The description of the test cases follows.</p><p>The first line of each test case contains a positive integer $$$n$$$ ($$$2 \leq n \leq 100\,000$$$)  — the number of trophies.</p><p>The second line of each test case contains a string $$$s$$$ of length $$$n$$$ consisting only of characters '<span class="tex-font-style-tt">L</span>' and '<span class="tex-font-style-tt">R</span>'  — the $$$i$$$-th character describes the direction of the $$$i$$$-th lamp.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$100\,000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$-1$$$ if it is impossible to illuminate all trophies by performing one operation (or doing nothing). Otherwise, print $$$0$$$ if you choose not to perform the operation (i.e., the trophies are illuminated by the initial positioning of the lamps), or an index $$$i$$$ ($$$1 \leq i  \lt  n$$$) if you choose to swap lamps $$$i$$$ and $$$i+1$$$.</p><p>If there are multiple answers, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002709765511331551" id="id009362020821145428" class="input-output-copier">Copy</div></div><pre id="id002709765511331551">6
2
LL
2
LR
2
RL
2
RR
7
LLRLLLR
7
RRLRRRL
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007220716304414113" id="id0006101274643566079" class="input-output-copier">Copy</div></div><pre id="id007220716304414113">-1
1
0
-1
3
6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, it is possible to swap lamps $$$1$$$ and $$$2$$$, or do nothing. In any case, the string "<span class="tex-font-style-tt">LL</span>" is obtained. Not all trophies are illuminated since trophy $$$2$$$ is not illuminated by any lamp  — lamp $$$1$$$ illuminates nothing and lamp $$$2$$$ illuminates only the trophy $$$1$$$.</p><p>In the second example, it is necessary to swap lamps $$$1$$$ and $$$2$$$. The string becomes "<span class="tex-font-style-tt">RL</span>". Trophy $$$1$$$ is illuminated by lamp $$$2$$$ and trophy $$$2$$$ is illuminated by lamp $$$1$$$, hence it is possible to illuminate all trophies.</p><p>In the third example, all trophies are initially illuminated  — hence, not performing any operation is a valid solution.</p><p>In the last two examples performing swaps is not necessary as all trophies are illuminated initially. But, the presented solutions are also valid.</p></div>