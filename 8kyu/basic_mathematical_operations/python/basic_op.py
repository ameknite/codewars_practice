def basic_op(operator: str, value1: int, value2: int) -> int | float:
    match operator:
        case '+':
            return value1 + value2
        case '-':
            return value1 - value2
        case '*':
            return value1 * value2
        case '/':
            return value1 / value2
        case _:
            raise Exception('Invalid operator')
