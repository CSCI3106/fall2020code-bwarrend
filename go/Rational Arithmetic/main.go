package main

import (
	"fmt"
	"math"
)

func main() {
	cases := 0
	x1 := 0
	y1 := 0
	x2 := 0
	y2 := 0
	op := ""
	fmt.Scan(&cases)

	////Loop for each case
	//
	for i := 0; i < cases; i++ {
		fmt.Scan(&x1)
		fmt.Scan(&y1)
		fmt.Scan(&op)
		fmt.Scan(&x2)
		fmt.Scan(&y2)

		////Correct for negative numbers
		//
		if y1 < 0 {
			x1 *= -1
			y1 *= -1
		}
		if y2 < 0 {
			x2 *= -1
			y2 *= -1
		}

		////Which operator?
		//
		if op == "+" || op == "-" {
			addOrSubtract(&x1, &y1, &op, &x2, &y2)
		} else if op == "*" {
			multiply(&x1, &y1, &x2, &y2)
		} else {
			divide(&x1, &y1, &x2, &y2)
		}

	}

}

func gcd(x int, y int) int {
	if y == 0 {
		return x
	}

	return gcd(y, x%y)
}

////Adding or Subtracting
//
func addOrSubtract(x1 *int, y1 *int, op *string, x2 *int, y2 *int) {
	*x1 *= *y2
	*x2 *= *y1
	y := *y1 * *y2

	x := 0

	if *op == "+" {
		x = *x1 + *x2
	} else {
		x = *x1 - *x2
	}

	GCD := gcd(int(math.Abs(float64(x))), int(math.Abs(float64(y))))

	x /= GCD
	y /= GCD

	fmt.Println(x, " / ", y)
}

////Multiply
//
func multiply(x1 *int, y1 *int, x2 *int, y2 *int) {
	x := *x1 * *x2
	y := *y1 * *y2
	GCD := gcd(int(math.Abs(float64(x))), int(math.Abs(float64(y))))

	x /= GCD
	y /= GCD

	fmt.Println(x, " / ", y)
}

////Divide
//
func divide(x1 *int, y1 *int, x2 *int, y2 *int) {
	x := *x1 * *y2
	y := *x2 * *y1

	GCD := gcd(int(math.Abs(float64(x))), int(math.Abs(float64(y))))

	x /= GCD
	y /= GCD

	if y < 0 {
		x *= -1
		y *= -1
	}

	fmt.Println(x, " / ", y)
}
