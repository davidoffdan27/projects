
import matplotlib.pyplot as plt

import TQueen

import TFun

a=int(input())

Pole = TQueen.TPole(a) # размерность доски

Run = TFun.TRun(Pole)

Curs = list()
i=0;
for n in range(1000):
    i=i+1
    cur = Run.Run()
    print(cur)
    Curs.append(cur)
    
    if cur == 0:
        print(Pole.Pos)
        print(i) #кол-во итераций
        break
    
plt.figure(1)
plt.plot(Curs)
plt.grid(True)
plt.xlabel("Time")
plt.ylabel("Solution")
plt.show()

