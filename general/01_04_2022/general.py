import random
import sys

def f(V,L=10):
    V.clear()
    if L!=10:
        L = random.randrange(10)
    for i in range(0,L):
        V.append(random.randrange(100))

def main():
    V=[]
    f(V,9)
    print(V)

if __name__=="__main__":
    main()
