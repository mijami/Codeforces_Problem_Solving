<h2><a href="https://codeforces.com/contest/1102/problem/C" target="_blank" rel="noopener noreferrer">1102C — Doors Breaking and Repairing</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 11-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1102C](https://codeforces.com/contest/1102/problem/C) |

## Topics
`games`

---

## Problem Statement

<div class="header"><div class="title">C. Doors Breaking and Repairing</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are policeman and you are playing a game with Slavik. The game is turn-based and each turn consists of two phases. During the first phase you make your move and during the second phase Slavik makes his move.</p><p>There are $$$n$$$ doors, the $$$i$$$-th door initially has durability equal to $$$a_i$$$.</p><p>During your move you can try to break one of the doors. If you choose door $$$i$$$ and its current durability is $$$b_i$$$ then you reduce its durability to $$$max(0, b_i - x)$$$ (the value $$$x$$$ is given).</p><p>During Slavik's move he tries to repair one of the doors. If he chooses door $$$i$$$ and its current durability is $$$b_i$$$ then he increases its durability to $$$b_i + y$$$ (the value $$$y$$$ is given). <span class="tex-font-style-bf">Slavik cannot repair doors with current durability equal to $$$0$$$</span>.</p><p>The game lasts $$$10^{100}$$$ turns. If some player cannot make his move then he has to skip it.</p><p>Your goal is to maximize the number of doors with durability equal to $$$0$$$ at the end of the game. You can assume that Slavik <span class="tex-font-style-bf">wants to minimize</span> the number of such doors. What is the number of such doors in the end if you both play optimally?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains three integers $$$n$$$, $$$x$$$ and $$$y$$$ ($$$1 \le n \le 100$$$, $$$1 \le x, y \le 10^5$$$) — the number of doors, value $$$x$$$ and value $$$y$$$, respectively.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^5$$$), where $$$a_i$$$ is the initial durability of the $$$i$$$-th door.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the number of doors with durability equal to $$$0$$$ at the end of the game, if you and Slavik both play optimally.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003354303626339721" id="id008652659041541804" class="input-output-copier">Copy</div></div><pre id="id003354303626339721">6 3 2
2 3 1 3 4 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00722032592614759" id="id0037080631386454954" class="input-output-copier">Copy</div></div><pre id="id00722032592614759">6
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0001607598973968738" id="id008352340581395639" class="input-output-copier">Copy</div></div><pre id="id0001607598973968738">5 3 3
1 2 4 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0004194402060402691" id="id00058219522512761634" class="input-output-copier">Copy</div></div><pre id="id0004194402060402691">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009533002892026498" id="id001426217943025283" class="input-output-copier">Copy</div></div><pre id="id009533002892026498">5 5 6
1 2 6 10 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0037806869679367183" id="id009037714796963503" class="input-output-copier">Copy</div></div><pre id="id0037806869679367183">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Clarifications about the optimal strategy will be ignored.</p></div>