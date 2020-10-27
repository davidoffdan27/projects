
import random as rnd

import numpy as np

class TRun():
    def __init__(self, Pole):
        self.Pole = Pole
        
        self.T = 100 #начальная температура
        self.alpha = 0.95 # альфа
        
    def Run(self):
        Pos = self.Pole.Mix() #шаг 2. функция Ck+1=кси(Ck).
        dh = self.Pole.Calc(Pos) - self.Pole.CalcSelf() #шаг 3. dh (разница между новой и текущей значиниями функций ферзей под боем).
        
        if dh < 0: #шаг 4. (если dh<0 K=K+1) возврат к шагу 2.
            self.Pole.Change(Pos)
        else:
            p = np.exp(- dh / self.T)  #шаг 5.(если dh>=0 с вероятностью e^(-dh/Tk) заменяем K=K+1 и с вероятностью 1-e^(-dh/Tk) не меняем, оставляем K=K)
            
            if p > rnd.random():
                self.Pole.Change(Pos)

            self.T = self.alpha * self.T #новое значение температуры.

        return self.Pole.CalcSelf()
        
        
    