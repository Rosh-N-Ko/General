class Stuff:
    def __init__(self,name:str,type:str,price:float,quant:int=0):
        
        self.name=name
        self.pri=price
        self.quan=quant
    
    def TotVal(self):
        return self.pri*self.quan

        
#input("Give me ṇthe items that you have ")-use this to get inputs form the user         
item1=Stuff("Bhujiya","Food",15,32)
print(item1.TotVal())
item2=Stuff("dettol","healthcare",50,500)
print(item2.TotVal())


        

        
        
    
        

    