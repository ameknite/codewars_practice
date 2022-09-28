def digitize(n: int) -> list[int]:
    if n == 0:
        return [0]
    output = []
    while n != 0:
        output.append(n % 10)
        n //= 10
    return output

