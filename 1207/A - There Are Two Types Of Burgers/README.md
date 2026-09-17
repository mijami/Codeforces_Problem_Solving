<h2><a href="https://codeforces.com/contest/1207/problem/A" target="_blank" rel="noopener noreferrer">1207A — There Are Two Types Of Burgers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1207A](https://codeforces.com/contest/1207/problem/A) |

## Topics
`brute force` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. There Are Two Types Of Burgers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are two types of burgers in your restaurant — hamburgers and chicken burgers! To assemble a hamburger you need two buns and a beef patty. To assemble a chicken burger you need two buns and a chicken cutlet. </p><p>You have $$$b$$$ buns, $$$p$$$ beef patties and $$$f$$$ chicken cutlets in your restaurant. You can sell one hamburger for $$$h$$$ dollars and one chicken burger for $$$c$$$ dollars. Calculate the maximum profit you can achieve.</p><p>You have to answer $$$t$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) – the number of queries.</p><p>The first line of each query contains three integers $$$b$$$, $$$p$$$ and $$$f$$$ ($$$1 \le b, ~p, ~f \le 100$$$) — the number of buns, beef patties and chicken cutlets in your restaurant.</p><p>The second line of each query contains two integers $$$h$$$ and $$$c$$$ ($$$1 \le h, ~c \le 100$$$) — the hamburger and chicken burger prices in your restaurant.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query print one integer — the maximum profit you can achieve.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002300642958262965" id="id007985067770947851" class="input-output-copier">Copy</div></div><pre id="id002300642958262965">3
15 2 3
5 10
7 5 2
10 12
1 100 100
100 100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007588906081993799" id="id0011024273435719567" class="input-output-copier">Copy</div></div><pre id="id007588906081993799">40
34
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In first query you have to sell two hamburgers and three chicken burgers. Your income is $$$2 \cdot 5 + 3 \cdot 10 = 40$$$.</p><p>In second query you have to ell one hamburgers and two chicken burgers. Your income is $$$1 \cdot 10 + 2 \cdot 12 = 34$$$.</p><p>In third query you can not create any type of burgers because because you have only one bun. So your income is zero.</p></div>