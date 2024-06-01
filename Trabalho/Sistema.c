import matplotlib.pyplot as plt
import numpy as np

# Parâmetros da elipse
a = 10 / 3
b = 5 / 2

# Parâmetros do quadrado
L = 5 / np.sqrt(2)

# Coordenadas do quadrado centrado na origem
square_x = np.array([-L/2, L/2, L/2, -L/2, -L/2])
square_y = np.array([-L/2, -L/2, L/2, L/2, -L/2])

# Rotacionar o quadrado em 45 graus
theta = np.deg2rad(45)
cos_theta, sin_theta = np.cos(theta), np.sin(theta)
x_rot = cos_theta * square_x - sin_theta * square_y
y_rot = sin_theta * square_x + cos_theta * square_y

# Plot da elipse
t = np.linspace(0, 2*np.pi, 400)
x = a * np.cos(t)
y = b * np.sin(t)

# Criação do gráfico
fig, ax = plt.subplots()
ax.plot(x, y, label='Elipse: $\\frac{x^2}{(10/3)^2} + \\frac{y^2}{(5/2)^2} = 1$')
ax.plot(x_rot, y_rot, label='Quadrado Inscrito', color='red')

# Configurações do gráfico
ax.axhline(0, color='black',linewidth=0.5)
ax.axvline(0, color='black',linewidth=0.5)
ax.grid(color='gray', linestyle='--', linewidth=0.5)
ax.set_aspect('equal', 'box')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.title('Quadrado Inscrito na Elipse')
plt.show()
