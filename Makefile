

sample: sample.o imageio.o
	g++ -o sample sample.o imageio.o

invert: invert.o imageio.o
	g++ -o invert invert.o imageio.o

box: box.o imageio.o
	g++ -o box box.o imageio.o

rest: rest.o imageio.o
	g++ -o rest rest.o imageio.o

rest.o: rest.cpp imageio.h

box.o: box.cpp imageio.h

invert.o: invert.cpp imageio.h

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h


clean:
	rm -f sample.o imageio.o invert.o box.o rest.o invert sample box rest
