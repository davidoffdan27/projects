import numpy as np

import matplotlib.pyplot as pt

N = 2 #размерность

M = 100 #кол-во активных агентов

L = 1000 #ограничение на итерации

alpha = 0.95 #параметры функции изм скорости

beta = 0.2

gamma = 0.2

def F(x):
    res=np.sin(x[0])
    #res=abs(np.tan(x[0]))
    #res = (1 - x[0]) * (1 - x[0]) + 100 * (x[1] - x[0] * x[0]) * (x[1] - x[0] * x[0])
    #res = x[0]*x[0]+x[1]*x[1]-4
    return res

def CalcMinAll(Xmin): #поиск минимума
    Res = Xmin[0]

    for x in Xmin:
        if F(x) < F(Res):
            Res = x

    return Res

X = [] #координата
V = [] #покомпонентная скорость 
Xmin = [] #минимум агента
XMinAll = np.zeros(N) #минимум всех агентов

for m in range(M): #заполняем рандомно координаты и скорости
    x = np.zeros(N)
    x[0] = np.random.uniform(-100, 100)
    x[1] = np.random.uniform(-100, 100)

    X.append(x)    
    Xmin.append(x)

    v = np.zeros(N)
    v[0] = np.random.uniform(-10, 10)
    v[1] = np.random.uniform(-10, 10)

    V.append(v)

XMinAll = CalcMinAll(Xmin)

for l in range(L): #алгоритм роя
    for m in range(M):
        V[m] = alpha * V[m] + beta * np.random.uniform() * (Xmin[m] - X[m]) + gamma * np.random.uniform() * (XMinAll - X[m])

        X[m] = X[m] + V[m]

        if F(X[m]) < F(Xmin[m]):
            Xmin[m] = X[m]

    XMinAll = CalcMinAll(Xmin)

print("{0}\tЗначение = {1}".format(XMinAll, F(XMinAll)))