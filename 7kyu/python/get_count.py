def get_count(sentence: str) -> int:
    return sum(1 for x in sentence if x in "aeiou")
