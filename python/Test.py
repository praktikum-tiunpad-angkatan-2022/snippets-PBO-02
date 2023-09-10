from child1.File1 import File1

class Test:
    def main(self):
            
        tes = [File1(f"Ini tes ke-{i}") for i in range(5)]

        for f in tes:
            print(f.get_data())

if __name__ == "__main__":
    test = Test()
    test.main()
