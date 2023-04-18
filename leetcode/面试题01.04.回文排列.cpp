/*
给定一个字符串，编写一个函数判定其是否为某个回文串的排列之一。
回文串是指正反两个方向都一样的单词或短语。排列是指字母的重新排列。
回文串不一定是字典当中的单词。

示例1：
输入："tactcoa"
输出：true（排列有"tacocat"、"atcocta"，等等）
*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Solution {
public:
    bool canPermutePalindrome(string s) {
        int bucket[128];
		memset(bucket, 0, sizeof(bucket));
		for (int i=0; i < int(s.size()); i++){
			bucket[int(s[i])]++;
		}
        int odd_count = 0;
		for (int i=0; i<128; i++){
			if (bucket[i] && bucket[i] % 2 == 1){
				odd_count++;
			}
		}
		if(s.size() %2 ==1){
			return odd_count == 1;
		}else{
			return odd_count == 0;
		}
    }
};

int main(){
    Solution *s = new Solution();
    cout << s->canPermutePalindrome("code") << endl;
}
