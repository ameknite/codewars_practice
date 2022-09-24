def count_positives_sum_negatives(arr: list[int]) -> list[int]:
    if arr == []:
        return []
    count = sum(1 for x in arr if x > 0)
    s = sum(x for x in arr if x < 0)
    return [count, s]
