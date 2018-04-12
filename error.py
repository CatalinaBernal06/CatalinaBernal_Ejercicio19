import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt('dato_p.txt')
x = datos[:,0]
y = datos[:,1]
h = 0.1
N = 3/h

yr = np.exp(-x)

e = np.abs((yr - y)/yr)*100

plt.figure()
plt.semilogy(x, e, label='Error')
plt.savefig('primer_e.pdf')
