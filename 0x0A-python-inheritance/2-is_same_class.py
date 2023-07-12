#!/usr/bin/python3
"""Module is_same_class
Finds if an object is exactly an instance of a class
"""


def is_same_class(obj, a_class):
    """ This function takes two arguments: obj is the object to be checked, and cls is the specified class. 
    It compares the __class__ attribute of the object with the specified class
    and returns True if they match exactly. Otherwise, it returns False.
    """
    
    return obj.__class__ == a_class
