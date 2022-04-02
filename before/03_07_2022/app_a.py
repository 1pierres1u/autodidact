import random

class A:
    def __init__(self):
        self.V = []

    def generate(self,N,M):
        self.V.append(N+M)
        self.V.append(N-M)
        self.V.append(N*M)
        self.V.append(N/M)
        self.V.append(N**M)
        self.V.append(N//M)
        self.V.append(N%M)
        self.V.append(N<<M)
        self.V.append(N>>M)
        self.V.append(N & M)
        self.V.append(N | M)
        self.V.append(N and M)
        self.V.append(N or M)

    def generate_1(self,N):
        for i in range(N):
            self.V.append(random.randint(0,i))

    def display(self):
        print(self.V)


    def __lt__(self,other):
        return len(self.V) < len(other.V)




