package main

import (
	"fmt"
	"math"
)

func main() {
	a := 0
	b := 0
	c := 0

	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	jumps := 0

	//find the smallest gap, whether a..b or b..c
	//if a + (b+1) != c then keep going

	if b-a <= c-b {
		for a != b || a != c || b != c {
			min := int(math.Min(float64(a), float64(b)))
			if min == a && c != b+1 {
				a = b + 1
				jumps++
			} else if min == b && c != a+1 {
				b = a + 1
				jumps++
			} else {
				break
			}
		}
	} else {
		for a != b || a != c || b != c {
			min := int(math.Min(float64(b), float64(c)))

			if min == b && a != b-1 {
				c = b - 1
				jumps++
			} else if min == c && a != c-1 {
				b = c - 1
				jumps++
			} else {
				break
			}
		}
	}

	fmt.Println(jumps)

}
