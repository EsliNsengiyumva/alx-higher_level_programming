#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    rep = 0
    for j in sys.argv:
        if j != sys.argv[0]:
            rep += int(j)
    print(rep)
