## Contents

This part contains problems on these topics:
- BFS
- DFS
- Graph


## Algorithms

- [In-order iterative DFS](/vanilla-algorithms/iterative_in-order_dfs.cpp)
- [Breadth first search](/vanilla-algorithms/bfs.cpp)

## Notes

- For BST, the best solution one can get is usually `O(h)` time (not `O(N)`),
so try to get to that. In-order traversals are great for BST's.

- For tracking max, min values, use pointers/pass-by-reference in recursive functions.
No need to block the return value for this.

- Path-dependent problems are difficult to solve iteratively. You need to attach some data for
the path on each node in the stack, which can blow up the space complexity. Best to do recursively.
Example:
    - Path sums
    - Finding cycles in directed graphs (need to search in recursion stack)

- If it is difficult to backtrack using recursion, it may be usefult to save the parents of each
node in a map/vector and then go from the leaf to the root. See "minimum height trees" longest path
solution for an example


## Problems

(Some problems here are TODOs, so solutions links may give `404`s)

|Serial number|Difficulty|Problem|Solution(s)|
|-|-|-|-|
|01|Easy|[Average of Levels in Binary Tree](https://leetcode.com/problems/average-of-levels-in-binary-tree/)|[Solution](/part-03/1_01_average-of-levels-in-binary-tree.cpp)|
|02|Easy|[Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/)|[Solution (DFS)](/part-03/1_02_minimum-depth-of-binary-tree_DFS.cpp), [Solution (BFS)](/part-03/1_02_minimum-depth-of-binary-tree_BFS.cpp)|
|03|Easy|[Same Tree](https://leetcode.com/problems/same-tree/)|[Solution](/part-03/1_03_same-tree.cpp)|
|04|Easy|[Path Sum](https://leetcode.com/problems/path-sum/)|[Solution (Recursive DFS)](/part-03/1_04_path-sum_dfs-recursive.cpp), [Solution (Iterative DFS)](/part-03/1_04_path-sum_dfs-iterative.cpp)|
|05|Easy|[Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)|[Solution](/part-03/1_05_diameter-of-binary-tree.cpp)|
|06|Easy|[Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees/)|[Solution](/part-03/1_06_merge-two-binary-trees.cpp)|
|07|Easy|[Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)|[Solution](/part-03/1_07_maximum-depth-of-binary-tree.cpp)|
|08|Easy|[Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)|[Solution](/part-03/1_08_lowest-common-ancestor-of-a-binary-search-tree.cpp)|
|09|Easy|[Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)|[Solution](/part-03/1_09_subtree-of-another-tree.cpp)|
|10|Easy|[Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)|[Solution](/part-03/1_10_invert-binary-tree.cpp)|
|11|Medium|[Target Sum](https://leetcode.com/problems/target-sum/)|[Solution (brute force)](/part-03/2_11_target-sum_brute-force.cpp), [Solution (DP)](/part-03/2_11_target-sum_dp.cpp)|
|12|Medium|[Clone Graph](https://leetcode.com/problems/clone-graph/)|[Solution](/part-03/2_12_clone-graph.cpp)|
|13|Medium|[Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)|[Solution (TODO)](/part-03/2_13_pacific-atlantic-water-flow.cpp)|
|14|Medium|[Number of Islands](https://leetcode.com/problems/number-of-islands/)|[Solution](/part-03/2_14_number-of-islands.cpp)|
|15|Medium|[Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)|Needs premium|
|16|Medium|[Number of Connected Components in an Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/)|Needs premium|
|17|Medium|[Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)|[Solution](/part-03/2_17_kth-smallest-element-in-a-bst.cpp)|
|18|Medium|[Course Schedule](https://leetcode.com/problems/course-schedule/)|[Solution (Cycle detection)](/part-03/2_18_course-schedule_cycle-detection.cpp)|
|19|Medium|[Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)|[Solution (DFS)](/part-03/2_19_course-schedule-ii_dfs.cpp), [Solution (In-degree)](/part-03/2_19_course-schedule-ii_indegree.cpp)|
|20|Medium|[Minimum Height Trees](https://leetcode.com/problems/minimum-height-trees/)|[Solution (longest path, 2pass)](/part-03/2_20_minimum-height-trees_longest-path.cpp), [Solution (topo)](/part-03/2_20_minimum-height-trees_topo.cpp)|
|21|Medium|[Sequence Reconstruction](https://leetcode.com/problems/sequence-reconstruction)|Needs premium|
|22|Medium|[Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii/)|[Solution](/part-03/2_22_binary-tree-level-order-traversal-ii.cpp)|
|23|Medium|[Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)|[Solution](/part-03/2_23_binary-tree-level-order-traversal.cpp)|
|24|Medium|[Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)|[Solution (Using indices)](/part-03/2_24_binary-tree-zigzag-level-order-traversal_index-magic.cpp), [Solution (Actual zigzag traversal)](/part-03/2_24_binary-tree-zigzag-level-order-traversal_2stack.cpp)|
|25|Medium|[Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)|[Solution](/part-03/2_25_populating-next-right-pointers-in-each-node.cpp)|
|26|Medium|[Populating Next Right Pointers in Each Node II](https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/)|[Solution](/part-03/2_26_populating-next-right-pointers-in-each-node-ii.cpp)|
|27|Medium|[Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)|[Solution](/part-03/2_27_binary-tree-right-side-view.cpp)|
|28|Medium|[All Nodes Distance K in Binary Tree](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/)|[Solution](/part-03/2_28_all-nodes-distance-k-in-binary-tree.cpp)|
|29|Medium|[Path Sum II](https://leetcode.com/problems/path-sum-ii/)|[Solution](/part-03/2_29_path-sum-ii.cpp)|
|30|Medium|[Path Sum III](https://leetcode.com/problems/path-sum-iii/)|[Solution](/part-03/2_30_path-sum-iii.cpp)|
|31|Medium|[Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)|[Solution](/part-03/2_31_lowest-common-ancestor-of-a-binary-tree.cpp)|
|32|Medium|[Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/)|[Solution](/part-03/2_32_maximum-binary-tree.cpp)|
|33|Medium|[Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/)|[Solution](/part-03/2_33_maximum-width-of-binary-tree.cpp)|
|34|Medium|[Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)|[Solution](/part-03/2_34_construct-binary-tree-from-preorder-and-inorder-traversal.cpp)|
|35|Medium|[Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)|[Solution](/part-03/2_35_validate-binary-search-tree.cpp)|
|36|Hard|[Alien Dictionary](https://leetcode.com/problems/alien-dictionary)|[Solution](/part-03/3_36_alien-dictionary.cpp)|
|37|Hard|[Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)|[Solution](/part-03/3_37_binary-tree-maximum-path-sum.cpp)|
|38|Hard|[Word Search II](https://leetcode.com/problems/word-search-ii/)|[Solution](/part-03/3_38_word-search-ii.cpp)|
|39|Hard|[Sort Items by Groups Respecting Dependencies](https://leetcode.com/problems/sort-items-by-groups-respecting-dependencies/)|[Solution](/part-03/3_39_sort-items-by-groups-respecting-dependencies.cpp)|
