from app_a import A
from app_b import B

def main():
    a = A()
    a.generate(10,3)
    b = B(5)
    a.display()
    b.display()
    b.dif(a)
    b.display()

if __name__ == "__main__":
    main()
