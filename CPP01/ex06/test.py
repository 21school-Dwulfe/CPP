import os
import sys

if not  (os.access("./karenFilter", os.X_OK)):
    print("\33[31mError: ./karenFilter not found\33[0m: Enter 'make' command")
    exit(1)
try:
    while True:
        line = input("Choose regime: 0 - Without stdout result/ 1 - with stdout result\n")
        if line == '1' or line == '0':
            break
except EOFError as e:
    print("EOF in the line")
    exit(0)

cases = ('DEBUG', 'INFO', 'WARNING','ERROR')
answers = (
    "\n[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" ,
    "\n[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n",
    "\n[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n",
    "\n[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n",
)

for i, item in enumerate(cases):
    r, w = os.pipe()

    pid = os.fork()
    if  not pid:
        os.close(r)
        os.dup2(w, 1, True)        
        os.execvp('./karenFilter', ['./karenFilter', cases[i]])
    else:
        os.wait()
        os.close(w)
        os.dup2(r, 0, True)
        str = os.read(0, 500)
        str_dec = str.decode('UTF-8')
        # re = os.fdopen(r)
        # str = re.read()
        comp_str = ""
        j = i
        while j < 4:
            comp_str = comp_str.__add__(answers[j])
            j += 1
        if str_dec == comp_str:
            print(f"\33[32m Test {cases[i]}: OK!\33[0m\n")
        else:
            print(print(f"\33[31m Test {cases[i]}: KO!\33[0m\n"))
        if line == '1':
            print(str)
            print(comp_str.encode())
        os.close(r)
    i += 1