from python.child1.File1 import File1


class File2:

    def main(self):
        test = File1("Tes package!")
        print(test.get_data())

if __name__ == "__main__":
    file2 = File2()
    file2.main()


# TO RUN 
# NAVIGATE TO THE DIRECTORY CONTAINING THE "python" directory
# IN THIS CASE "snippets-PBO-02"
# THEN RUN USING "python -m python.child2.File2"