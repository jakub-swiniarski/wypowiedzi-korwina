SOURCES=$(wildcard *.cpp)
HEADERS=$(wildcard *.h)
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))

korwin: $(OBJECTS)
	g++ -o korwin $(OBJECTS)

$(OBJECTS): $(SOURCES) $(HEADERS)
	g++ -c $(SOURCES)

.PHONY: clean run

clean:
	rm *.o korwin

run: korwin
	./korwin
