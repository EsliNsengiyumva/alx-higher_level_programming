#!/usr/bin/python3
"""Module Mylist
Creates a class inheriting from list class
"""


class MyList(list):
    """Class MyList inherits from list"""

    def print_sorted(self):
        """Prints the list, in ascending order"""

        sorted_list = sorted(self)
        print(sorted_list)
