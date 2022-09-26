package kata

func CountSheeps(numbers []bool) int {
	var sum int
	for _, v := range numbers {
		if v {
			sum++
		}
	}
	return sum;
}
