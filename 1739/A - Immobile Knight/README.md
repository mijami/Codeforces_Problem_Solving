<h2><a href="https://codeforces.com/contest/1739/problem/A" target="_blank" rel="noopener noreferrer">1739A — Immobile Knight</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1739A](https://codeforces.com/contest/1739/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Immobile Knight</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a chess board of size $$$n \times m$$$. The rows are numbered from $$$1$$$ to $$$n$$$, the columns are numbered from $$$1$$$ to $$$m$$$.</p><p>Let's call a cell <span class="tex-font-style-it">isolated</span> if a knight placed in that cell can't move to any other cell on the board. Recall that a chess knight moves two cells in one direction and one cell in a perpendicular direction: </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/b6bbbb06eee1764fdbfd3606fc1c1c083c2d4ad8.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>Find any <span class="tex-font-style-it">isolated</span> cell on the board. If there are no such cells, print any cell on the board.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 64$$$) — the number of testcases.</p><p>The only line of each testcase contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 8$$$) — the number of rows and columns of the board.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print two integers — the row and the column of any <span class="tex-font-style-it">isolated</span> cell on the board. If there are no such cells, print any cell on the board.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007304277917197083" id="id0009235564560452725" class="input-output-copier">Copy</div></div><pre id="id007304277917197083"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 7</div><div class="test-example-line test-example-line-even test-example-line-2">8 8</div><div class="test-example-line test-example-line-odd test-example-line-3">3 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00028959946285116667" id="id006209869556853244" class="input-output-copier">Copy</div></div><pre id="id00028959946285116667">1 7
7 2
2 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, all cells are <span class="tex-font-style-it">isolated</span>. A knight can't move from any cell of the board to any other one. Thus, any cell on board is a correct answer.</p><p>In the second testcase, there are no <span class="tex-font-style-it">isolated</span> cells. On a normal chess board, a knight has at least two moves from any cell. Thus, again, any cell is a correct answer.</p><p>In the third testcase, only the middle cell of the board is <span class="tex-font-style-it">isolated</span>. The knight can move freely around the border of the board, but can't escape the middle.</p></div>