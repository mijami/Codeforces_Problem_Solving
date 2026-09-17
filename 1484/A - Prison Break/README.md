<h2><a href="https://codeforces.com/contest/1484/problem/A" target="_blank" rel="noopener noreferrer">1484A — Prison Break</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1484A](https://codeforces.com/contest/1484/problem/A) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">A. Prison Break</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Michael is accused of violating the social distancing rules and creating a risk of spreading coronavirus. He is now sent to prison. Luckily, Michael knows exactly what the prison looks like from the inside, especially since it's very simple.</p><p>The prison can be represented as a rectangle $$$a\times b$$$ which is divided into $$$ab$$$ cells, each representing a prison cell, common sides being the walls between cells, and sides on the perimeter being the walls leading to freedom. Before sentencing, Michael can ask his friends among the prison employees to make (very well hidden) holes in some of the walls (including walls between cells and the outermost walls). Michael wants to be able to get out of the prison after this, no matter which cell he is placed in. However, he also wants to break as few walls as possible.</p><p>Your task is to find out the smallest number of walls to be broken so that there is a path to the outside from every cell after this.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\leq t\leq 100$$$) — the number of test cases.</p><p>Each of the following $$$t$$$ lines contains two integers $$$a$$$ and $$$b$$$ ($$$1\leq a, b\leq 100$$$), representing a corresponding test case.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the single integer on a separate line — the answer to the problem.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003039599099683582" id="id006763426933323461" class="input-output-copier">Copy</div></div><pre id="id003039599099683582">2
2 2
1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009677518169070944" id="id009989284019199915" class="input-output-copier">Copy</div></div><pre id="id009677518169070944">4
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Some possible escape plans for the example test cases are shown below. Broken walls are shown in gray, not broken walls are shown in black. </p><p><img class="tex-graphics" src="https://espresso.codeforces.com/b362e4f37b05c03d42cc4fd305c4b6afc84f03ca.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p><img class="tex-graphics" src="https://espresso.codeforces.com/ca272aeb4b1032749972d1260785d080f0a71efa.png" style="max-width: 100.0%;max-height: 100.0%;"></p></div>