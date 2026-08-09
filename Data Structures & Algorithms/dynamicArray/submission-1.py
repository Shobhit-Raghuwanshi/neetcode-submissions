class DynamicArray:
    
    def __init__(self, capacity: int):
        self.l = []
        self.size = capacity


    def get(self, i: int) -> int:
        return self.l[i]


    def set(self, i: int, n: int) -> None:
        self.l[i] = n
        

    def pushback(self, n: int) -> None:
        self.l.append(n)
        if len(self.l) > self.size:
            self.resize()
        

    def popback(self) -> int:
        x = self.l.pop()
        
        return x

    def resize(self) -> None:
        self.size = self.size*2


    def getSize(self) -> int:
        return len(self.l)
    
    def getCapacity(self) -> int:
        return self.size