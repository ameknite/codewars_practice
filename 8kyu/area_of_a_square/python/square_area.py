import math


def square_area(A: int | float) -> int | float:
    radio = (2 * A / math.pi)
    return round(radio * radio, 2)
