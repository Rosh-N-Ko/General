from re import I
from requests import get
from pprint import PrettyPrinter

Base="https://data.nba.net/"
Json="/prod/v1/today.json"

printe=PrettyPrinter()

def get_link():
    pune=get(Base+Json).json()#this is like telling a friend that you live in pune ,Pune *gets* the info about all of the people and things in PUne 
    #printe.pprint(pune) #This prints out all the data from pune 
    Wadi=pune['links']#Now you are increasing the specificity o fthat data ,now you are in Vishrantwadi
    #printe.pprint(Wadi.keys())
    return Wadi
    
    
def get_score():
    teams=get_link()['currentScoreboard'] #This will acts as your home ,the exact location for the exact data taht you need 
    games=get(Base+teams).json()['games']
    printe.pprint(games.keys())    
    
    for game in games:
        printe.pprint(game.keys())
        break
        
    #printe.pprint(team.keys())

def get_stats():
    stats=get_link()['leagueTeamStatsLeaders']
    teams=get(Base+stats).json()['league']['standard']["playoffs"]['series']
    
    for egg in teams:
        te=egg['teams']
        ser=egg['series']
        printe.pprint(f"{te}-----------------{ser}")












get_stats()
