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
	min := 0
	GCD := 0
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

		////////////Which operator?
		//
		//
		//
		////Adding or Subtracting
		//
		if op == "+" || op == "-" {
			x1 *= y2
			x2 *= y1
			y := y1 * y2

			x := 0

			if op == "+" {
				x = x1 + x2
			} else {
				x = x1 - x2
			}

			min = 0
			GCD = 0

			xA := int(math.Abs(float64(x)))
			yA := int(math.Abs(float64(y)))

			if xA > yA {
				min = yA
			} else {
				min = xA
			}

			for i := 1; i <= min; i++ {
				if x%i == 0 && y%i == 0 {
					GCD = i
				}
			}

			x /= GCD
			y /= GCD

			fmt.Println(x, " / ", y)

			////Multiply
			//
		} else if op == "*" {
			x := x1 * x2
			y := y1 * y2

			min = 0
			GCD = 0

			xA := int(math.Abs(float64(x)))
			yA := int(math.Abs(float64(y)))

			if xA > yA {
				min = yA
			} else {
				min = xA
			}

			for i := 1; i <= min; i++ {
				if x%i == 0 && y%i == 0 {
					GCD = i
				}
			}

			x /= GCD
			y /= GCD

			fmt.Println(x, " / ", y)
			////Divide
			//
		} else {
			x := x1 * y2
			y := x2 * y1

			min = 0
			GCD = 0

			xA := int(math.Abs(float64(x)))
			yA := int(math.Abs(float64(y)))

			if xA > yA {
				min = yA
			} else {
				min = xA
			}

			for i := 1; i <= min; i++ {
				if x%i == 0 && y%i == 0 {
					GCD = i
				}
			}

			x /= GCD
			y /= GCD

			if y < 0 {
				x *= -1
				y *= -1
			}

			fmt.Println(x, " / ", y)

		}
	}
}
