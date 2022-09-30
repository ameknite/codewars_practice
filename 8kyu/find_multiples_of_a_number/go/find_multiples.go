package kata

func FindMultiples(integer, limit int) []int {
	var multiples []int
	for i := 1; i <= limit/integer; i++ {
		multiples = append(multiples, i*integer)
	}
	return multiples
}
