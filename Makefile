# linking objects
build/entry.o: build/Person.o build/main.o
	gcc build/Person.o build/main.o -o build/entry.o

# person object
build/Person.o: Person.cpp include/Person.h
	gcc -c Person.cpp -o build/Person.o

# main object
build/main.o: main.cpp
	gcc -c main.cpp -o build/main.o

clean:
	rm build/*.o