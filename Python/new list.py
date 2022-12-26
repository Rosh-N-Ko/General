sus=[1,2,3,4,5]
sum=0
for a in sus:
    print(sus[a-1])
    sum=sum+sus[a-1]

print(f"this is the sum {sum}")