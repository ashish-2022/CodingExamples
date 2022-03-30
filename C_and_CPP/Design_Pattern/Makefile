
all:
	g++ AdapterPattern.cpp -o AdapterPattern.o
	g++ -std=c++14 -Wall -Wextra -pedantic AdvBuilderPattern.cpp -o AdvBuilderPattern.o
	g++ BuilderPattern.cpp -o BuilderPattern.o
	g++ FactoryPattern.cpp -o FactoryPattern.o
	g++ SingletonPattern.cpp -o SingletonPattern.o
	g++ -std=c++0x -pthread SingletonPatternMutex.cpp -o SingletonPatternMutex.o

clean:
	rm -f *.o

