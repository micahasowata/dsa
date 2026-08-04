package main

import (
	"fmt"
	"math"
	"slices"
)

func sieve(n int) []int {
	if n <= 1 {
		return nil
	}

	arr := []int{}

	for i := 2; i < n; i += 1 {
		arr = append(arr, i)
	}

	rootNFloored := int(math.Floor(math.Sqrt(float64(n))))

	for _, z := range arr[:rootNFloored] {
		x := z * z
		if x != 0 {
			for x < n {
				fmt.Println("hit")
				for b, c := range arr {
					if c == x {
						arr[b] = 0
					}
				}

				x += z
			}
		}
	}

	return slices.DeleteFunc(arr, func(n int) bool {
		return n == 0
	})
}
func main() {
	fmt.Println(sieve(10))
}
