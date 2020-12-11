package main

import (
	"fmt"
	"os"
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

		finNum := make([]string, 100)
		for num > 0 {
			modu := num % 7
			num /= 7

			if modu == 3 {
				finNum = append(finNum, "5")
			} else if modu == 4 {
				finNum = append(finNum, "9")
			} else if modu == 5 {
				finNum = append(finNum, "8")
			} else {
				finNum = append(finNum, fmt.Sprint(modu))
			}
		}
		fmt.Println(strings.Join(finNum, ""))
	}
}
