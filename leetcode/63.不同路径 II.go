package main

import "fmt"

func main() {
	var obstacleGrid [][]int
	obstacleGrid = [][]int{
		[]int{1, 0},
	}
	fmt.Println(uniquePathsWithObstacles(obstacleGrid))
}

func uniquePathsWithObstacles(obstacleGrid [][]int) int {
	var x, y int = len(obstacleGrid), len(obstacleGrid[0])
	// Initialize dp array
	dp := make([][]int, x)
	for i := 0; i < x; i++ {
		dp[i] = make([]int, y)
	}
	for i := 0; i < x; i++ {
		for j := 0; j < y; j++ {
			if obstacleGrid[i][j] == 1 {
				dp[i][j] = 0
				// dp[i][j+1] = 1
				// dp[i+1][j] = 1
			} else if i == 0 && j == 0 {
				dp[i][j] = 1
			} else if i == 0 {
				dp[i][j] = dp[i][j-1]
			} else if j == 0 {
				dp[i][j] = dp[i-1][j]
			} else {
				dp[i][j] = dp[i-1][j] + dp[i][j-1]
			}
		}
	}

	return dp[x-1][y-1]
}
