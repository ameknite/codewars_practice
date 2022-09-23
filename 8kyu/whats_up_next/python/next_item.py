def next_item(xs: list, item):
    xs = iter(xs)
    if item in xs:
        return next(xs, None)
