fn cockroach_speed(s: f64) -> i64 {
    (s * 1000.0 * 100.0 / 60.0 / 60.0) as i64
}

#[test]
fn basic_tests() {
    assert_eq!(cockroach_speed(1.08), 30);
    assert_eq!(cockroach_speed(1.09), 30);
    assert_eq!(cockroach_speed(0.0), 0);
}
