#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
if len(tuple_b) < 2:
    tuple_b += (0,) * (2 - len(tuple_b))
elif len(tuple_b) > 2:
    tuple_b = tuple_b[:2]

result = (tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1])
return result
