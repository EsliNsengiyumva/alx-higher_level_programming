#!/usr/bin/python3
import sys
if len(sys.argv) != 4:
    print("Usage: ./100-my_calculator.py <a> <operator> <b>")
    sys.exit(1)

a = int(sys.argv[1])
operator = sys.argv[2]
b = int(sys.argv[3])

if operator == "+":
    result = add(a, b)
    print("{:d} + {:d} = {:d}".format(a, b, result))

elif operator == "-":
    result = sub(a, b)
    print("{:d} - {:d} = {:d}".format(a, b, result))

elif operator == "*":
    result = mul(a, b)
    print("{:d} * {:d} = {:d}".format(a, b, result))

elif operator == "/":
    result = div(a, b)
    print("{:d} / {:d} = {:d}".format(a, b, result))

else:
    print("Unknown operator. Available operators: +, -, * and /")
    sys.exit(1)

