res.exe:ex1Imp.o ex1App.o
        cc ex1Imp.o ex1App.o -o res.exe
ex1Imp.o:ex1Imp.c
        cc -c ex1Imp.c
ex1App.o:ex1App.c
        cc -c ex1App.c
