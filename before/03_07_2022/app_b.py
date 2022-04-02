from app_a import A 

class B(A):
    def __init__(self,N):
        super().__init__()
        if(N==1):
            self.generate(N)
        elif N==2:
            self.generate(N,N<<2)
        else:
            self.generate(N,N**2)


    def add(self,W):
        for i in range(min(len(W.V),len(self.V))):
            self.V[i] += W.V[i]


    def dif(self,W):
        for i in range(min(len(W.V),len(self.V))):
            self.V[i]-= W.V[i]


