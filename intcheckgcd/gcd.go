package main

import "fmt"

func gcd(m, n int) int {
	// Input must be positive
	if m <= 0 || n <= 0 {
		return -1
	}

	t := min(m, n)
	for t != 0 {
		if m%t == 0 && n%t == 0 {
			return t
		}

		t -= 1
	}

	return t
}

func main() {
	fmt.Println(gcd(60, 24))
}
