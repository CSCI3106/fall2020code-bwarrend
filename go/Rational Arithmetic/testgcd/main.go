package main

func main() {

	print(gcd(10086, 23247))

}

func gcd(x int, y int) int {
	min := 0
	GCD := 0

	if x > y {
		min = y
	} else {
		min = x
	}

	for i := 1; i < min+1; i++ {
		if x%i == 0 && y%i == 0 {
			GCD = i
		}
	}

	return GCD
}
