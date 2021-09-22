### 206. Reverse Linked List

翻轉一個鏈表，如同反轉陣列一樣需要有存儲值的地方，那麼陣列存的為元素值，鏈表存的為指標，我們並
不關心鏈表的元素值而是當前鏈表指標所指向的位置，因此可定義三個指標並初始化cur=head,pre=nullptr,next=nullptr，
首先需要移動cur->next=pre，但這樣會失去cur->next原本指向的位置，因此需先將next紀錄為cur->next，如此一來cur的指標便完成了一次翻轉，
同時也紀錄了原先cur指向的位置next，接著將pre與cur均往前移動一位，分別是pre=cur，cur=next，最後當cur為空代表遍歷完了整個鏈表，鏈表頭會存於pre這個指標。


[Leetcode](https://leetcode.com/problems/reverse-linked-list/)
