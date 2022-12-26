import csv
from csv import DictReader


nl="\n"
class stuff():
    disc=0.8
    all=[]
    def tot(self):
        tota=self.price*self.quant
        return tota
    
    def __init__(self,name,price,quant:int=0):
        assert price >=0,f"The price {price}is lesser than 0,Please change asap"
        assert quant >=0,f"The quantity{quant} is lesser than 0,Please change asap"
 
        self.name=name        
        self.price=price
        self.quant=quant

        stuff.all.append(self)
    
    
    def discount(self):
        self.price=self.price*self.disc        
        return self.price 
    
    @classmethod
    def csv_open(cls):
        with open('items.csv','r')as f:
            reade=csv.DictReader(f)
            items=list(reade)
            
            for a in items:
                print(items[a])             
        
        
    
    def __repr__(self) :        
        return f"1.{self.name},{self.price},{self.quant},{self.tot(),{nl}}"

        #for a in range(len(stuff.all)):
            #print (all[a])            
        


stuff.csv_open()