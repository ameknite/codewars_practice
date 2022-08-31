def even_or_odd(number: int) -> str:
    match number % 2:
        case 0:
            return "Even"
        case other:
            return "Odd"
