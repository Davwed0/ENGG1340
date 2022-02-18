FLAGS = -pedantic-errors -std=c++11

gcd.o : gcd.cpp gcd.h
	g++ $(FLAGS) -c $<

lcm.o : lcm.cpp lcm.h
	g++ $(FLAGS) -c $<
	
calc.o : calc.cpp
	g++ $(FLAGS) -c $<

calc : calc.o gcd.o lcm.o
	g++ $(FLAGS) $^ -o $@

clean : 
	rm -f *.o calc

.PHONY : clean