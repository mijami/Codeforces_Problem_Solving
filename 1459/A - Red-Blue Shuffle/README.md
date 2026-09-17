<h2><a href="https://codeforces.com/contest/1459/problem/A" target="_blank" rel="noopener noreferrer">1459A — Red-Blue Shuffle</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1459A](https://codeforces.com/contest/1459/problem/A) |

## Topics
`math` `probabilities`

---

## Problem Statement

<div class="header"><div class="title">A. Red-Blue Shuffle</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ cards numbered $$$1, \ldots, n$$$. The card $$$i$$$ has a red digit $$$r_i$$$ and a blue digit $$$b_i$$$ written on it.</p><p>We arrange all $$$n$$$ cards in random order from left to right, with all permutations of $$$1, \ldots, n$$$ having the same probability. We then read all red digits on the cards from left to right, and obtain an integer $$$R$$$. In the same way, we read all blue digits and obtain an integer $$$B$$$. When reading a number, leading zeros can be ignored. If all digits in a number are zeros, then the number is equal to $$$0$$$. Below is an illustration of a possible rearrangement of three cards, and how $$$R$$$ and $$$B$$$ can be found.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/9e7b5b218d96e21d7848a13cf50a5d4a62b8dfa9.png" style="zoom: 30.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>Two players, Red and Blue, are involved in a bet. Red bets that after the shuffle $$$R  \gt  B$$$, and Blue bets that $$$R  \lt  B$$$. If in the end $$$R = B$$$, the bet results in a draw, and neither player wins.</p><p>Determine, which of the two players is more likely (has higher probability) to win the bet, or that their chances are equal. Refer to the Note section for a formal discussion of comparing probabilities.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1 \leq T \leq 100$$$) — the number of test cases.</p><p>Descriptions of $$$T$$$ test cases follow. Each test case description starts with a line containing a single integer $$$n$$$ ($$$1 \leq n \leq 1000$$$) — the number of cards.</p><p>The following line contains a string of $$$n$$$ digits $$$r_1, \ldots, r_n$$$ — red digits on cards $$$1, \ldots, n$$$ respectively.</p><p>The following line contains a string of $$$n$$$ digits $$$b_1, \ldots, b_n$$$ — blue digits on cards $$$1, \ldots, n$$$ respectively.</p><p>Note that digits in the same line are not separated with any delimiters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$T$$$ answers for the test cases in order, one per line.</p><p>If Red has a <span class="tex-font-style-bf">strictly</span> higher change to win, print "<span class="tex-font-style-tt">RED</span>".</p><p>If Blue has a <span class="tex-font-style-bf">strictly</span> higher change to win, print "<span class="tex-font-style-tt">BLUE</span>".</p><p>If both players are equally likely to win, print "<span class="tex-font-style-tt">EQUAL</span>".</p><p>Note that all answers are <span class="tex-font-style-bf">case-sensitive</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015206389943702647" id="id008023712560040651" class="input-output-copier">Copy</div></div><pre id="id0015206389943702647">3
3
777
111
3
314
159
5
09281
09281
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0023432152151260943" id="id0037001104549556185" class="input-output-copier">Copy</div></div><pre id="id0023432152151260943">RED
BLUE
EQUAL
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Formally, let $$$n_R$$$ be the number of permutations of cards $$$1, \ldots, n$$$ such that the resulting numbers $$$R$$$ and $$$B$$$ satisfy $$$R  \gt  B$$$. Similarly, let $$$n_B$$$ be the number of permutations such that $$$R  \lt  B$$$. If $$$n_R  \gt  n_B$$$, you should print "<span class="tex-font-style-tt">RED</span>". If $$$n_R  \lt  n_B$$$, you should print "<span class="tex-font-style-tt">BLUE</span>". If $$$n_R = n_B$$$, print "<span class="tex-font-style-tt">EQUAL</span>".</p><p>In the first sample case, $$$R = 777$$$ and $$$B = 111$$$ regardless of the card order, thus Red always wins.</p><p>In the second sample case, there are two card orders when Red wins, and four card orders when Blue wins:</p><ul><li> order $$$1, 2, 3$$$: $$$314  \gt  159$$$;</li><li> order $$$1, 3, 2$$$: $$$341  \gt  195$$$;</li><li> order $$$2, 1, 3$$$: $$$134  \lt  519$$$;</li><li> order $$$2, 3, 1$$$: $$$143  \lt  591$$$;</li><li> order $$$3, 1, 2$$$: $$$431  \lt  915$$$;</li><li> order $$$3, 2, 1$$$: $$$413  \lt  951$$$.</li></ul><p>Since $$$R  \lt  B$$$ is more frequent, the answer is "<span class="tex-font-style-tt">BLUE</span>".</p><p>In the third sample case, $$$R = B$$$ regardless of the card order, thus the bet is always a draw, and both Red and Blue have zero chance to win.</p></div>