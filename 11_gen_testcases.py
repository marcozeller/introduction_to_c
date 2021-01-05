import numpy as np

datas = [None]*20
tests = []
groundtruths = []

for i in range(20):
    datas[i] = np.random.permutation(100000)[0:20]

for data in datas:
    data_sorted = np.sort(data)
    t = '{'
    for d in data[:-1]:
        t += f'{d}, '
    t += str(data[-1])
    t += '},'
    tests.append(t)

    s = '{'
    for d in data_sorted[:-1]:
        s += f'{d}, '
    s += str(data_sorted[-1])
    s += '},'
    groundtruths.append(s)

for t in tests:
    print(t)
for s in groundtruths:
    print(s)

