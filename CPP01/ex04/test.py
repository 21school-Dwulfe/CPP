import os
import time

start = time.time()
testFiles = ("test1","test2")
replaceAims = (("qwerty", "Hello"), ('e', 'KGB'))
answers = ("Hellogood Hello!@# $%qwqerty \nHello\nqwe rty Qwerty",
            "rKGBmovKGB rKGBplacKGB unknown filKGB")
# fd = os.open(testFiles[0], os.O_CREAT | os.O_RDWR, 0o644)
# fp = os.fdopen(fd, 'w+')
# fp.write('qwertygood qwerty!@# $%qwqerty \nqwerty\nqwe rty Qwerty')
with open(os.open(testFiles[0], os.O_CREAT | os.O_RDWR, 0o644), 'w+') as fp:
    fp.write('qwertygood qwerty!@# $%qwqerty \nqwerty\nqwe rty Qwerty')
fd1 = os.open(testFiles[1], os.O_CREAT | os.O_RDWR, 0o644)
fp1 = os.fdopen(fd1, 'w+')
fp1.write("remove replace unknown file")
fp1.close()
if not  (os.access("./Sed", os.X_OK)):
    print("No ./Sed file: Enter 'make' command")
    os.remove(testFiles[0])
    os.remove(testFiles[1])
    exit(1)
for i, iter in enumerate(testFiles):
    pid = os.fork()
    if not pid:
        os.execvp("./Sed", [os.getcwd().__add__("/Sed"), iter, replaceAims[i][0], replaceAims[i][1]])
    else:
        os.wait()
        fd = os.open(iter.__add__('.replace'), os.O_CREAT | os.O_RDWR, 0o644)
        if fd == -1:
            exit(1)
        os.lseek(fd,0 ,0)
        text = os.read(fd,100)
        text = text.decode('UTF-8')
        if answers[i] == text[:-1]:
            print(f"\33[32m Test {i + 1}: OK!\33[0m\n")
        else:
            print(f"\33[31m Test {i + 1}: KO!\33[0m\n")
        os.close(fd)
        os.remove(testFiles[i])
        os.remove(testFiles[i].__add__(".replace"))
    i += 1

end = time.time()

print("Execution time:", end - start)
