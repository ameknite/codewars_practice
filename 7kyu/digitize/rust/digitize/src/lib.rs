fn digitize(mut n: u64) -> Vec<u8> {
    if n == 0 {
        return vec![0];
    }
    let mut digits = Vec::new();
    while n > 0 {
        digits.push((n % 10) as u8);
        n /= 10;
    }
    digits
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_fixed() {
        assert_eq!(digitize(348597), vec![7, 9, 5, 8, 4, 3]);
        assert_eq!(digitize(35231), vec![1, 3, 2, 5, 3]);
        assert_eq!(digitize(0), vec![0]);
    }
}
