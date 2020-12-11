lines = int(input())

for i in range(0, lines):
    inLine = input()
    if("simon says" in inLine):
        print(inLine[11:])
    else:
        print("\n")