from app_a import generate

def operation(N,M):
    V=[]
    V.append("operation")
    V.append(N)
    V.append(M)
    V.append(N+M)
    V.append(N-M)
    V.append(N*M)
    V.append(N/M)
    V.append(N//M)
    V.append(N**M)
    V.append(N%M)
    V.append(N<<M)
    V.append(N>>M)
    V.append(N and M)
    V.append(N or M)
    V.append(N ^ M)
    V.append(N & M)
    V.append(N | M)
    V.append(N is M)
    V.append(N is not M)
    V.append(~N)
    V.append((3 in V))
    V.append(3 not in V)
    return V
   

def types():
    V=[]
    U={}
    T=(4,5)
    R = range(10)
    S = {1,2,3}
    print(5, type(5))
    print(6.0, type(6))
    print(V,type(V))
    print(U, type(U))
    print("uv",type("uv"))
    print(1+5j,type(1+5j))
    print(T,type(T))
    print(R, type(R))
    print(S,type(S))

def add_x(V,x):
    for i in range(len(V)):
        V[i] =  V[i] + x

def reference_or_not(V,x):
    for u in V:
        u = u + x
        
def add_r(V,n,x):
    generate(V,n)
    add_x(V,x)

def add(s):
    s = s + 'a'
    return s

def describe(s):
    print("object = ", end=" ")
    print(s, end="\nsize = ")
    print(len(s))

def main():
    V=[1,3,4,5]
    add_x(V,8)
    print(V)
    add_r(V,10,2)
    print(V)
    s = "hello"
    print(s)
    print(add(s))
    print("DESCRIPTION")
    describe(V)
    describe(s)
    print(operation(4,2))
    print("TYPES")
    types()

if __name__ == "__main__":
    main()



