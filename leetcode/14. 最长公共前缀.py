from typing import List
"""编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

示例 1：

输入：strs = ["flower","flow","flight"]
输出："fl"
示例 2：

输入：strs = ["dog","racecar","car"]
输出：""
解释：输入不存在公共前缀。"""

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        lcp = len(min(strs, key=len))
        for s in strs:
            for i in range(len(s)):
                if(s[i] != strs[0][i]):
                    lcp = i
                    break
        return s[0:lcp]


if __name__ == '__main__':
    s = Solution()

    print(s.longestCommonPrefix(["aaa", "aa", "aaa"]))