#Rocio Jaimes lab 5

import matplotlib.pyplot as plt
import math
import numpy as np

datos= np.loadtxt("random_walks.txt")
random=datos[:]

plt.hist(datos, normed=True)
plt.title("Histograma Normalizado")
plt.xlabel("caminatas")
plt.ylabel("frecuencias")
plt.savefig("rand.png")
