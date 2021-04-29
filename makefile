OBJ = main.o getscore.o eval.o classify.o output.o
APPNAME = scoreApp

test : $(APPNAME)
	./$(APPNAME)

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c
	gcc -c -o $@ $<

clean :
	rm $(OBJ) $(APPNAME)

