<h2><a href="https://codeforces.com/contest/1816/problem/A" target="_blank" rel="noopener noreferrer">1816A — Ian Visits Mary</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1816A](https://codeforces.com/contest/1816/problem/A) |

## Topics
`constructive algorithms` `geometry` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Ian Visits Mary</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ian and Mary are frogs living on lattice points of the Cartesian coordinate plane, with Ian living on $$$(0,0)$$$ and Mary living on $$$(a,b)$$$. </p><p>Ian would like to visit Mary by jumping around the Cartesian coordinate plane. Every second, he jumps from his current position $$$(x_p, y_p)$$$ to another lattice point $$$(x_q, y_q)$$$, such that no lattice point other than $$$(x_p, y_p)$$$ and $$$(x_q, y_q)$$$ lies on the segment between point $$$(x_p, y_p)$$$ and point $$$(x_q, y_q)$$$. </p><p>As Ian wants to meet Mary as soon as possible, he wants to jump towards point $$$(a,b)$$$ using <span class="tex-font-style-bf">at most $$$2$$$ jumps</span>. Unfortunately, Ian is not good at maths. Can you help him?</p><p>A lattice point is defined as a point with both the $$$x$$$-coordinate and $$$y$$$-coordinate being integers.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases. The description of test cases follows.</p><p>The first and only line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$1\le a,b\le 10^9$$$) — the coordinates of the lattice point where Mary lives.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print an integer $$$n$$$ ($$$1 \le n \le 2$$$) on the first line, denoting the number of jumps Ian uses in order to meet Mary. Note that you do not need to minimize the number of jumps.</p><p>On the $$$i$$$-th line of the next $$$n$$$ lines, print two integers $$$0 \le x_i,y_i \le 10^9$$$ separated by a space, denoting Ian's location $$$(x_i,y_i)$$$ after the $$$i$$$-th jump. $$$x_n = a$$$, $$$y_n = b$$$ must hold.</p><p>Ian's initial location and his locations after each of the $$$n$$$ jumps <span class="tex-font-style-bf">need not</span> be distinct.</p><p>If there are multiple solutions, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007279508194273333" id="id00780919225809115" class="input-output-copier">Copy</div></div><pre id="id007279508194273333"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">3 4</div><div class="test-example-line test-example-line-even test-example-line-2">4 4</div><div class="test-example-line test-example-line-odd test-example-line-3">3 6</div><div class="test-example-line test-example-line-even test-example-line-4">2 2</div><div class="test-example-line test-example-line-odd test-example-line-5">1 1</div><div class="test-example-line test-example-line-even test-example-line-6">7 3</div><div class="test-example-line test-example-line-odd test-example-line-7">2022 2023</div><div class="test-example-line test-example-line-even test-example-line-8">1000000000 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011052953637214957" id="id0006365605491884885" class="input-output-copier">Copy</div></div><pre id="id0011052953637214957">1
3 4
2
3 2
4 4
2
5 3
3 6
2
1 0
2 2
1
1 1
1
7 3
1
2022 2023
2
69420420 469696969
1000000000 1000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/27abc51622aca98d68f3cc445015d9b2279b6caf.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>$$$(0,0) \to (3,4)$$$</p><p>In the second test case:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/65d0b6a11d97b999dbdb2a39f57524d770fd68eb.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>$$$(0,0) \to (3,2) \to (4,4)$$$</p><p>In the third test case:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/0aaa297c3bdb777ac0945bd88313c37ee404491c.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>$$$(0,0) \to (5,3) \to (3,6)$$$</p></div>