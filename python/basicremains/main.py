def base10tobaseB(n, b):
    if n == 0:
        return 0;
    number = []

    while n > 0:
        number.append(int(n%b))
        n //= b
    return "".join(map(str, number[::-1]))

def baseBtobase10(n, b):
    return int(n, b)

while True:
    line = input()
    line = line.split(" ")
    base = int(line[0])

    if base == 0:
        exit(0)
    
    numberA = baseBtobase10(line[1], base)
    numberB = baseBtobase10(line[2], base)
    
    num = numberA % numberB
    
    print(base10tobaseB(num, base))  
