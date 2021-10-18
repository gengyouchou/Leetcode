### 1721. Swapping Nodes in a Linked List

此題應當用one pass來做，原理簡單但我卻常常忘記，通常以一個鍊表來說要存取其中的一個位置必須要一個
一個節點訪問他們的iterator，不可能跳著訪問或者是直接定址，因為鍊表iterator的值必須是一個挨一個的存儲於相鄰的節點之中。


為此限制要找到第K個iterator,我們必須從鍊表頭一路訪問至鍊表尾，那麼如何找到倒數第K個iterator呢？
只要在當iterator向前遍歷至第K個節點時，此時再將另一個新的iterator從鍊表頭開始訪問，當舊的iterator到達鍊表尾時，
新iterator勢必還差k步始能與舊iterator會合。

最後將新舊iterator的值swap即為答案。

[Leetcode](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)
