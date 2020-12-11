package main

import (
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	nS := ""
	valid := true
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

			nS = strconv.Itoa(count)
			valid = true

			if strings.ContainsAny(nS, "3") {
				valid = false
			} else if strings.ContainsAny(nS, "4") {
				valid = false
			} else if strings.ContainsAny(nS, "7") {
				valid = false
			}

			if !valid {
				i--
			}

			i++
		}

		//Upside down
		nS = strconv.Itoa(count)
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
		printIt := string(runes[length:])

		fmt.Println(printIt)
	}
}
