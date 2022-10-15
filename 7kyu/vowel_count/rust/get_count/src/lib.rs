fn get_count(string: &str) -> usize {
    string.chars().filter(|&x| "aeiou".contains(x)).count()
}
