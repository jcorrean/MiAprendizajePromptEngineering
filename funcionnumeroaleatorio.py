# -*- coding: utf-8 -*-
"""FuncionNumeroAleatorio.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1UEAdsZf_bQ7Bvg2Ii9vSYcC-Wxbbp4Er
"""

import random

def generar_numero_aleatorio(inferior, superior):
    """
    Genera un número aleatorio en el rango [inferior, superior).

    Parámetros:
    - inferior (int): Límite inferior del rango.
    - superior (int): Límite superior del rango.

    Retorna:
    - int: Número aleatorio generado.
    """
    return random.randint(inferior, superior - 1)

# Ejemplo de uso
inferior = 1
superior = 10
numero_aleatorio = generar_numero_aleatorio(inferior, superior)

print(f"Número aleatorio entre {inferior} y {superior - 1}: {numero_aleatorio}")