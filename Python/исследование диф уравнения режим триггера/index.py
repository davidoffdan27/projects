import numpy as np
from scipy.integrate import odeint
import matplotlib.pyplot as plt

def ode(y, t, b, c):
        x, yy = y
        dydt = [(-b*x*(x-1)*(x+1)-yy)/c, x-yy]
        return dydt

def calcODE(args, y0, dy0, ts = 30, nt = 301):
    y0 = [y0, dy0]
    t = np.linspace(0, ts, nt)
    sol = odeint(ode, y0, t, args)
    return sol

def drawPhasePortrait(args, deltaX = 1.0, deltaDX = 1.0, startX = 0.0,  stopX = 5.0, startDX = 0.0, stopDX = 5.0, ts = 10, nt = 101):
    for y0 in np.arange(startX, stopX, deltaX):
            for dy0 in np.arange(startDX, stopDX, deltaDX):
                sol = calcODE(args, y0, dy0, ts, nt)
                plt.plot(sol[:, 0], sol[:, 1], 'b')
    plt.xlabel('x')
    plt.ylabel('dx/dt')
    plt.grid()
    plt.show()
    
      
b = 3.0
c = 0.01
args=(b, c)
drawPhasePortrait(args)
drawPhasePortrait(args, 0.1, 0.1, -1.5, 1.5, -1.5, 1.5, ts = 30, nt = 301)