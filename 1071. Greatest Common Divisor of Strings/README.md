### 1071. Greatest Common Divisor of Strings

找兩個String的最大公約substring的意思，那麼這兩個String肯定有著相同的前輟，於是我們由長的那個String不斷的檢查前輟是否等於短的String，是的話去掉長的前輟，這裡相當於取一次模，
不斷的交互取模，最終剩下的便是兩個String的最大公約substring，算是字串版本的輾轉相除法。

[Leetcode](https://leetcode.com/problems/greatest-common-divisor-of-strings/)
