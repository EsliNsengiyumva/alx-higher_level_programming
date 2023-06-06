#!/usr/bin/python3
# 100-print_tebahpla.py

""""Print the alphabet in reverse order alternating upper- and lower-case."""
for i in range(90, 64, -1):
    print(chr(i + 32 if i % 2 == 0 else i), end='')
