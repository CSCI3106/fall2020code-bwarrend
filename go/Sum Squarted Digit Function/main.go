package main

import (
	"fmt"
)

func main() {
	dataSets := 0

	fmt.Scan(&dataSets)

	for i := 0; i < dataSets; i++ {
		a := 0
		b := 0
		c := 0
		fmt.Scan(&a)
		fmt.Scan(&b)
		fmt.Scan(&c)
		total := 0
		for c > 0 {
			digit := int(c % b)
			total += digit * digit
			c = (c - digit) / b
		}
		fmt.Println(a, total)
	}
}
