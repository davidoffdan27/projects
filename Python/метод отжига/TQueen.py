
import random as rnd

class TPole():
    def __init__(self, N):
        self.N = N #размерность списка
        self.Pos = list()
        for n in range(self.N): #заполняем список по умолчанию
            self.Pos.append(n)
            
    def Mix(self): #реализация функции кси(h)
        Pos = list()
        for p in self.Pos:
            Pos.append(p)
            
        i = 0 #выбираем 2 строки которые, меняем
        j = 0
        while i == j: 
            i = rnd.randint(0, self.N - 1)
            j = rnd.randint(0, self.N - 1)
            
        a = Pos[i]
        Pos[i] = Pos[j]
        Pos[j] = a
    
        return Pos
        
    def Calc(self, Pos): #поиск значения функции(сколько ферзей под боем)
        res = 0
        
        for n in range(self.N):
            k = n - 1
            while k >= 0:
                if Pos[k] == (Pos[n] + (n - k)):
                    res = res + 1

                if Pos[k] == (Pos[n] - (n - k)):
                    res = res + 1
                k = k - 1

            k = n + 1
            while k < self.N:
                if Pos[k] == (Pos[n] + (k - n)):
                    res = res + 1

                if Pos[k] == (Pos[n] - (k - n)):
                    res = res + 1
                k = k + 1
                
        return res

    def CalcSelf(self):
        return self.Calc(self.Pos)
    
    def Change(self, Pos):
        self.Pos = Pos