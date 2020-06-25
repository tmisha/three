package main

import "fmt"

func hello() {
	var x int
	for i := 0; i < 100000000; i++ {
		x++
	}
	fmt.Printf("hello %d\n", x)
}

func main() {
	hello()
}
