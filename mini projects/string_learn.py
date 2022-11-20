import curses
print("""
        line one
        line two
        line three
    """)

string="ayyo , wassup"
print(string[5])
print(string.upper())

s2="LIFE DO BE LIKE THAT DOE. AMIRITE?FELLAS.AMIRITE"
print(s2.capitalize())

a="i am "
b="learning to "
c="program"
s3="{}{}{}".format(a,b,c),"it is pretty cool"
#using .format ,helps you fill in the blanks,at the end , rather than defing each blank in each space  
print(s3)

s4="sentence one is cool,but sentence 2 is better".split(",")
print(s4)

s5=["i ","need","oxygen"]
s6="".join(s5)
print(s6)

s7="i"+"sleep"
print(s7)