import math

def isPerfectSquare(x):
    # Find floating point value of
    # square root of x.
    sr = math.sqrt(x)

    # If square root is an integer
    return (sr - math.floor(sr)) == 0

for i in range(1, 1000):
    for j in range(i, 1000):
        num = (i * i) + (j * j)
        if isPerfectSquare(num):
            _sr = math.sqrt(num)
            #print("first number: ", i, " Second Number: ", j,  " Last Number: ", _sr)
            if _sr + i + j == 1000:
                print("first number: ", i, " Second Number: ", j, " Last Number: ", _sr)
                print(_sr * i * j)
                break
