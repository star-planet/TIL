import numpy as np

def solution(n):
    n = np.floor(n / 2)
    return n * (n + 1)