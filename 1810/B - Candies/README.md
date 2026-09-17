<h2><a href="https://codeforces.com/contest/1810/problem/B" target="_blank" rel="noopener noreferrer">1810B — Candies</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1810B](https://codeforces.com/contest/1810/problem/B) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Candies</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>This problem is about candy. Initially, you only have $$$1$$$ candy, and you want to have exactly $$$n$$$ candies.</p><p>You can use the two following spells in any order at most $$$40$$$ times in total.</p><ul> <li> Assume you have $$$x$$$ candies now. If you use the first spell, then $$$x$$$ candies become $$$2x-1$$$ candies. </li><li> Assume you have $$$x$$$ candies now. If you use the second spell, then $$$x$$$ candies become $$$2x+1$$$ candies. </li></ul><p>Construct a sequence of spells, such that after using them in order, you will have <span class="tex-font-style-bf">exactly</span> $$$n$$$ candies, or determine it's impossible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Their description follows.</p><p>Each test case contains one line with a single integer $$$n$$$ ($$$2 \le n \le 10^9$$$) — the required final number of candies.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the following.</p><p>If it's possible to eventually have $$$n$$$ candies within $$$40$$$ spells, in the first line print an integer $$$m$$$ ($$$1 \le m \le 40$$$), representing the total number of spells you use.</p><p>In the second print $$$m$$$ integers $$$a_{1}, a_{2}, \ldots, a_{m}$$$ ($$$a_{i}$$$ is $$$1$$$ or $$$2$$$) separated by spaces, where $$$a_{i} = 1$$$ means that you use the first spell in the $$$i$$$-th step, while $$$a_{i} = 2$$$ means that you use the second spell in the $$$i$$$-th step.</p><p>Note that you <span class="tex-font-style-bf">do not</span> have to minimize $$$m$$$, and if there are multiple solutions, you may output any one of them.</p><p>If it's impossible, output $$$-1$$$ in one line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005864679628052294" id="id004132270489352339" class="input-output-copier">Copy</div></div><pre id="id005864679628052294"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">7</div><div class="test-example-line test-example-line-even test-example-line-4">17</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00546715793863201" id="id004987248195174545" class="input-output-copier">Copy</div></div><pre id="id00546715793863201">-1
1
2 
2
2 2 
4
2 1 1 1 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For $$$n=3$$$, you can just use the second spell once, and then have $$$2 \cdot 1 + 1 = 3$$$ candies.</p><p>For $$$n=7$$$, you can use the second spell twice. After the first step, you will have $$$3$$$ candies. And after the second step, you will have $$$2 \cdot 3 + 1 = 7$$$ candies.</p></div>