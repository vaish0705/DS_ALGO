<h2><a href="https://leetcode.com/problems/even-odd-tree/">1609. Even Odd Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A binary tree is named <strong style="user-select: auto;">Even-Odd</strong> if it meets the following conditions:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The root of the binary tree is at level index <code style="user-select: auto;">0</code>, its children are at level index <code style="user-select: auto;">1</code>, their children are at level index <code style="user-select: auto;">2</code>, etc.</li>
	<li style="user-select: auto;">For every <strong style="user-select: auto;">even-indexed</strong> level, all nodes at the level have <strong style="user-select: auto;">odd</strong> integer values in <strong style="user-select: auto;">strictly increasing</strong> order (from left to right).</li>
	<li style="user-select: auto;">For every <b style="user-select: auto;">odd-indexed</b> level, all nodes at the level have <b style="user-select: auto;">even</b> integer values in <strong style="user-select: auto;">strictly decreasing</strong> order (from left to right).</li>
</ul>

<p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, <em style="user-select: auto;">return </em><code style="user-select: auto;">true</code><em style="user-select: auto;"> if the binary tree is <strong style="user-select: auto;">Even-Odd</strong>, otherwise return </em><code style="user-select: auto;">false</code><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/15/sample_1_1966.png" style="width: 362px; height: 229px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,10,4,3,null,7,9,12,8,6,null,null,2]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> The node values on each level are:
Level 0: [1]
Level 1: [10,4]
Level 2: [3,7,9]
Level 3: [12,8,6,2]
Since levels 0 and 2 are all odd and increasing and levels 1 and 3 are all even and decreasing, the tree is Even-Odd.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/15/sample_2_1966.png" style="width: 363px; height: 167px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [5,4,2,3,3,7]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The node values on each level are:
Level 0: [5]
Level 1: [4,2]
Level 2: [3,3,7]
Node values in level 2 must be in strictly increasing order, so the tree is not Even-Odd.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/22/sample_1_333_1966.png" style="width: 363px; height: 167px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [5,9,1,3,5,7]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Node values in the level 1 should be even integers.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">5</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>