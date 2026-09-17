<h2><a href="https://codeforces.com/contest/1492/problem/A" target="_blank" rel="noopener noreferrer">1492A — Three swimmers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1492A](https://codeforces.com/contest/1492/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Three swimmers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three swimmers decided to organize a party in the swimming pool! At noon, they started to swim from the left side of the pool.</p><p>It takes the first swimmer exactly $$$a$$$ minutes to swim across the entire pool and come back, exactly $$$b$$$ minutes for the second swimmer and $$$c$$$ minutes for the third. Hence, the first swimmer will be on the left side of the pool after $$$0$$$, $$$a$$$, $$$2a$$$, $$$3a$$$, ... minutes after the start time, the second one will be at $$$0$$$, $$$b$$$, $$$2b$$$, $$$3b$$$, ... minutes, and the third one will be on the left side of the pool after $$$0$$$, $$$c$$$, $$$2c$$$, $$$3c$$$, ... minutes.</p><p>You came to the left side of the pool exactly $$$p$$$ minutes after they started swimming. Determine how long you have to wait before one of the swimmers arrives at the left side of the pool.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases. Next $$$t$$$ lines contains test case descriptions, one per line.</p><p>Each line contains four integers $$$p$$$, $$$a$$$, $$$b$$$ and $$$c$$$ ($$$1 \leq p, a, b, c \leq 10^{18}$$$), time in minutes after the start, when you came to the pool and times in minutes it take the swimmers to cross the entire pool and come back.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — how long you have to wait (in minutes) before one of the swimmers arrives at the left side of the pool.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003273872372602933" id="id0007283675757713526" class="input-output-copier">Copy</div></div><pre id="id003273872372602933">4
9 5 4 8
2 6 10 9
10 2 5 10
10 9 9 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006932426490860248" id="id006131912115100713" class="input-output-copier">Copy</div></div><pre id="id006932426490860248">1
4
0
8
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the first swimmer is on the left side in $$$0, 5, 10, 15, \ldots$$$ minutes after the start time, the second swimmer is on the left side in $$$0, 4, 8, 12, \ldots$$$ minutes after the start time, and the third swimmer is on the left side in $$$0, 8, 16, 24, \ldots$$$ minutes after the start time. You arrived at the pool in $$$9$$$ minutes after the start time and in a minute you will meet the first swimmer on the left side.</p><p>In the second test case, the first swimmer is on the left side in $$$0, 6, 12, 18, \ldots$$$ minutes after the start time, the second swimmer is on the left side in $$$0, 10, 20, 30, \ldots$$$ minutes after the start time, and the third swimmer is on the left side in $$$0, 9, 18, 27, \ldots$$$ minutes after the start time. You arrived at the pool $$$2$$$ minutes after the start time and after $$$4$$$ minutes meet the first swimmer on the left side.</p><p>In the third test case, you came to the pool $$$10$$$ minutes after the start time. At the same time, all three swimmers are on the left side. A rare stroke of luck!</p><p>In the fourth test case, all swimmers are located on the left side in $$$0, 9, 18, 27, \ldots$$$ minutes after the start time. You arrived at the pool $$$10$$$ minutes after the start time and after $$$8$$$ minutes meet all three swimmers on the left side.</p></div>