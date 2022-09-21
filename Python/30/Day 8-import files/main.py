mes_tem="""Hello {name},Thank you of 
visiting our {website}.We are happy to have you here 
"""

def format(name="rosh",website="k.lamar.com"):
    thismes=mes_tem.format(name=name,website=website)
    print(thismes)
    
def base(*args,**kwargs):
    print(args,kwargs)
    
base()