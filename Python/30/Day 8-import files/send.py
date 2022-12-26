from formatting import format
from datetime import datetime 

def send(name, website=None):
    msg=format(Mname=name,Mwebsite=website)    
    return msg 