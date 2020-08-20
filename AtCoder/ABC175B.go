package main

import (
	"fmt"
	"sort"
)

func main() {
	var n int
	fmt.Scan(&n)

	l := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&l[i])
	}
	sort.Ints(l)

	var cnt int
	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			if l[i] == l[j] {
				continue
			}
			for k := j + 1; k < n; k++ {
				if l[j] == l[k] {
					continue
				}
				if l[i]+l[j] > l[k] {
					cnt++
				}
			}
		}
	}
	fmt.Println(cnt)
}
