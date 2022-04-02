def add_1(V):
    for i in range(len(V)):
        V[i] = V[i] + 1
    return V


def add_1_t(V):
    for x in V:
        x = x + 1
    return V


def add_x(V, x):
    for i in range(len(V)):
        V[i] = V[i] + x


def add_x_r(V):
    l = len(V)
    if(l%2==0):
        add_x(V,2)
    else:
        add_x(V,2)
    return V
