#!/usr/bin/python3
safe_print_list = __import__('0-safe_print_list').safe_print_list

def safe_print_list(my_list=[], x=0):
    
    count = 0
    i=0

    for i in range(0,x):
        
        try:
            print(my_list[i], end="")
            count += 1
        except:
            break
    print()
    return count
