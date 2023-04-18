package main

import "fmt"

func main() {
	fmt.Println(CheckPermutation("abb", "aab"))
}

func CheckPermutation(s1 string, s2 string) bool {
	var bucket1 [27]int
	var bucket2 [27]int
	for i := 0; i < len(s1); i++ {
		bucket1[s1[i]-'a']++
	}
	for i := 0; i < len(s2); i++ {
		bucket2[s2[i]-'a']++
	}
	for i := 0; i < 27; i++ {
		if bucket1[i] != bucket2[i] {
			return false
		}
	}
	return true

}
