fn simple_multiplication(number: u8) -> u8 {
    match number % 2 {
        0 => number * 8,
        _ => number * 9,
    }
}
