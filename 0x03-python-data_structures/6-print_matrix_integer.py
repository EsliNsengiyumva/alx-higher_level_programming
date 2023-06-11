#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for row in matrix:
        for num in row:
            print("{:d}".format(num), end=' ')
            if num != (len(matrix[row]) - 1):
                print(" ", end="")
        print("")
    
