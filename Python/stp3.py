''' in this program  i ewill be using lists 
and other containers 
'''
NL=list()
NL=[1,5,8,"qef"]
NL.pop()
print(NL)
print(5 in NL)#Shows when something is in the list 
print(23 not in NL)#shows when something is not in the list 
NL[2]=15
print(NL)
#you cant access an index that does not exist in the list , it will throw na exception
print("length is ",len(NL))
print(NL[0:2])#this is calledslicing, hwere you take apart list into parts ,based on the index you put in it 
