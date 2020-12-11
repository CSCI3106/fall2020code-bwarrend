i = 0
fbis = 0
for i in range(1, 6):
    if "FBI" in input():
        fbis += 1
        print(i, end = " ")

if fbis < 1:
    print("HE GOT AWAY!")