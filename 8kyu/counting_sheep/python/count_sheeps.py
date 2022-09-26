def count_sheeps(sheep: list[bool]) -> bool:
    return sum(1 for x in sheep if x)
