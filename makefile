SRC = src/
OBJ = main.o $(SRC)getscore.o $(SRC)eval.o $(SRC)classify.o $(SRC)output.o
APPNAME = scoreApp

test : $(APPNAME)
	./$(APPNAME)

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c
	gcc -c -o $@ $<

clean :
	rm $(OBJ) $(APPNAME)

