package main

import (
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	j := 1
	for j <= 1100 {
		num := 0
		_, err := fmt.Scanln(&num)
		if err != nil {
			os.Exit(0)
		}

		count := 0
		i := 1

		for i <= num {
			count++

			if !isValid(count) {
				i--
			}
			i++
		}

		fmt.Println(reverseAndUpsideDown(count))
	}
}

func isValid(n int) bool {
	nS := strconv.Itoa(n)
	valid := true

	if strings.ContainsAny(nS, "3") {
		valid = false
	} else if strings.ContainsAny(nS, "4") {
		valid = false
	} else if strings.ContainsAny(nS, "7") {
		valid = false
	}

	return valid
}

func reverseAndUpsideDown(n int) string {
	//Upside down
	nS := strconv.Itoa(n)
	str := strings.ReplaceAll(nS, "6", "-")
	str = strings.ReplaceAll(str, "9", "6")
	str = strings.ReplaceAll(str, "-", "9")

	//Reverse
	length := len(str)
	runes := make([]rune, length)

	for _, rune := range str {
		length--
		runes[length] = rune
	}
	return string(runes[length:])
}
