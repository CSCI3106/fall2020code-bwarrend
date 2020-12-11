package main

import (
	"fmt"
	"os"
)

func main() {
	cup1 := true
	cup2 := false
	cup3 := false

	movesS := ""

	_, err := fmt.Scanln(&movesS)
	if err != nil {
		os.Exit(0)
	}

	moves := []rune(movesS)

	for i := range moves {
		if moves[i] == 'A' {
			if cup1 {
				cup1 = false
				cup2 = true
			} else if cup2 {
				cup1 = true
				cup2 = false
			}
		} else if moves[i] == 'B' {
			if cup2 {
				cup2 = false
				cup3 = true
			} else if cup3 {
				cup2 = true
				cup3 = false
			}
		} else {
			if cup1 {
				cup1 = false
				cup3 = true
			} else if cup3 {
				cup1 = true
				cup3 = false
			}
		}
	}

	cup := 0

	if cup1 {
		cup = 1
	} else if cup2 {
		cup = 2
	} else {
		cup = 3
	}

	fmt.Println(cup)

}
