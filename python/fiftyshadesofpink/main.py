cases = int(input())

i = 0
matches = 0;
for i in range(1, cases + 1):
    inpy = input()
    if"pink" in inpy.lower() or "rose" in inpy.lower():
        matches += 1
        
if matches <= 0:
    print("I must watch Star Wars with my daughter")
else:
    print(matches)