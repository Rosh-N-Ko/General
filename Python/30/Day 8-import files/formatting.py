mes_tem="""Hello {name},Thank you of 
visiting our {website}.We are happy to have you here 
"""

def format(Mname="rosh",Mwebsite="k.lamar.com"):
    thismes=mes_tem.format(name=Mname,website=Mwebsite)
    print(thismes)
