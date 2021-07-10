select : selectmain.o selectout.o selectinput.o selectsort.o
	g++ $^ -o $@
%.o : %.cpp
	g++ -c $^
clean :
	rm -r *.o select 
