import random

def generate(V,n):
    if(n>0):
        for i in range(n):
            V.append(random.randint(0,i))
