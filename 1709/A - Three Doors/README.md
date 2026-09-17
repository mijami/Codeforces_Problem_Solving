<h2><a href="https://codeforces.com/contest/1709/problem/A" target="_blank" rel="noopener noreferrer">1709A — Three Doors</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1709A](https://codeforces.com/contest/1709/problem/A) |

## Topics
`brute force` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Three Doors</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are three doors in front of you, numbered from $$$1$$$ to $$$3$$$ from left to right. Each door has a lock on it, which can only be opened with a key with the same number on it as the number on the door.</p><p>There are three keys — one for each door. Two of them are hidden behind the doors, so that there is no more than one key behind each door. So two doors have one key behind them, one door doesn't have a key behind it. To obtain a key hidden behind a door, you should first unlock that door. The remaining key is in your hands.</p><p>Can you open all the doors?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 18$$$) — the number of testcases.</p><p>The first line of each testcase contains a single integer $$$x$$$ ($$$1 \le x \le 3$$$) — the number on the key in your hands.</p><p>The second line contains three integers $$$a, b$$$ and $$$c$$$ ($$$0 \le a, b, c \le 3$$$) — the number on the key behind each of the doors. If there is no key behind the door, the number is equal to $$$0$$$.</p><p>Values $$$1, 2$$$ and $$$3$$$ appear exactly once among $$$x, a, b$$$ and $$$c$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print "<span class="tex-font-style-tt">YES</span>" if you can open all the doors. Otherwise, print "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007839998382107178" id="id00755748762056181" class="input-output-copier">Copy</div></div><pre id="id007839998382107178"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">0 1 2</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-even test-example-line-2">0 3 2</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">3 1 0</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-even test-example-line-4">1 3 0</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002817204258531023" id="id003521827795291128" class="input-output-copier">Copy</div></div><pre id="id002817204258531023">YES
NO
YES
NO
</pre></div></div></div>