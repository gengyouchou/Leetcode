### 46. Permutations

相較於慣用的遞歸解，這裡給出了插板法，有限集合X內我們可以任意先取出一個元素的集合a，爾後將a的每個相對位置|a|插入X中剩下的元素，
比方說集合{a,b,c}先將a取出插入剩下的元素=>{ba,ab}=>{cba,bca,bac,cab,acb,abc}。

[Leetcode](https://leetcode.com/problems/permutations/)
