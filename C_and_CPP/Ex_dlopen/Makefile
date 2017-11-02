all:
	g++ -fPIC -shared -I/usr/include/libxml2/ MyClass1.cpp -o libMyClass1.so -lxml2
	g++ ClassUser.cpp -o class_user -ldl

clean:
	rm -f *.so class_user
