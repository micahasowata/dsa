package main

import "fmt"

func gcd(m, n int) int {
	// Input must be non-negative, not-both-zero integers
	if (m < 0 || n < 0) || (m == 0 && n == 0) {
		return -1
	}

	for n != 0 {
		r := m % n
		m = n
		n = r
	}

	return m
}

func main() {
	// EUCLID GCD ALGORITHM

	fmt.Println(gcd(60, 24))
}
