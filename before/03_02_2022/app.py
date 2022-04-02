import random
from app_a import add_1, add_1_t,add_x_r

def f(V, n):
    for i in range(0,n):
        V.append(random.randint(0,i))

def main():
    V=[]
    f(V,10)
    print(V) 
    print(add_1(V))
    print(add_1_t(V))
    print(add_x_r(V))

if __name__ == "__main__":
    main()
