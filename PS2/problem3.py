"""
************************************************
  ____ ____    _  ___   __
 / ___/ ___|  / |/ _ \ / /_
| |   \___ \  | | (_) | '_ \
| |___ ___) | | |\__, | (_) |
 \____|____/  |_|  /_/ \___/

Problem Set 3
Problem 3

Find the python bug!
Should print 'CS196' when completed
************************************************
"""

def printStatement(foo):
    length = foo.length;
    for i in xrange(length+1):
        System.out.println(i[foo]);

printStatement(['CS','1','9','6'])
