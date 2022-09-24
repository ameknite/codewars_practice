package kata

func CountPositivesSumNegatives(numbers []int) []int {
	if len(numbers) <= 0 {
		return []int{}
	}
	var count, sum int
	for _, x := range numbers {
		if x > 0 {
			count++
		} else {
			sum += x
		}
	}
	return []int{count, sum}
}
