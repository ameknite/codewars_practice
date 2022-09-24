fn count_positives_sum_negatives(input: Vec<i32>) -> Vec<i32> {
    if input.is_empty() {
        return Vec::new();
    }
    let count = input.iter().filter(|x| x.is_positive()).count() as i32;
    let sum = input.iter().filter(|x| x.is_negative()).sum();
    vec![count, sum]
}
