package kata

func Digitize(n int) []int {
	if n == 0 {
		return []int{0}
	}
	var output []int
	for n != 0 {
		output = append(output, n%10)
		n /= 10
	}
	return output
}
