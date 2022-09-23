fn feast(beast: &str, dish: &str) -> bool {
    let mut beast = beast.chars();
    let mut dish = dish.chars();
    beast.next() == dish.next() && beast.next_back() == dish.next_back()
}
