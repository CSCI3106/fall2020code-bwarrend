package main

import "fmt"

func main() {
	hours := 0
	mins := 0

	fmt.Scan(&hours)
	fmt.Scan(&mins)

	mins -= 45

	if mins < 0 {
		hours--
		mins = 60 - (mins * -1)
	}

	if hours < 0 {
		hours = 23
	}

	fmt.Println(hours, mins)

}
