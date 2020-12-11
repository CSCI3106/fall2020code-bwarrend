class Vertex:
    def __init__(self, name):
        self.name = name
        self.inTree = False
        


N = int(input())

while(N != 0):
    E = int(input())
    numQueries = int(input())
    s = int(input())

    vertices = []