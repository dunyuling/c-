objects=Demo.o SayHello.o Say.o libsay.a
Demo:$(objects)
	g++ -o Demo Demo.cpp libsay.a
libsay.a:
	ar -r libsay.a SayHello.o Say.o
.PHONY:clean
clean:
	rm Demo $(objects) 
