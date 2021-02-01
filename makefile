calc: driver.o calculator.o printer.o
	g++ -o calc calculator.o printer.o driver.o

calculator.o: calculator.cpp calculator.h
	g++ -c calculator.cpp

driver.o: driver.cpp 
	g++ -c driver.cpp

printer.o: printer.cpp printer.h
	g++ -c printer.cpp

clean:
	rm *.o calc
