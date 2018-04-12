import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt('dato_s.txt')
x = datos[:,0]
y = datos[:,1]
h = 0.1

yr = np.cos(x)

e = np.abs((yr - y))*100
plt.figure()
plt.plot(x, yr)
plt.scatter(x, y)
plt.show()

plt.figure()
plt.semilogy(x, e, label='Error')
plt.legend()
plt.savefig('segunda_e.pdf')
