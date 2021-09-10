all: 
	pnt fail true repeat

pnt: utils/src/pnt.c
	mkdir -p utils/bin
	@echo "Building pnt"
	cc -c utils/src/pnt.c -o utils/bin/pnt.o
	cc -o utils/bin/pnt utils/src/pnt.c
	@echo "pnt OK"

fail: utils/src/fail.c
	@echo "Building fail"
	cc -c utils/src/fail.c -o utils/bin/fail.o
	cc -o utils/bin/fail utils/bin/fail.o
	@echo "fail OK"

true: utils/src/true.c
	@echo "Building true"
	cc -c utils/src/true.c -o utils/bin/true.o
	cc -o utils/bin/true utils/bin/true.o
	@echo "true OK"

repeat: utils/src/repeat.c
	@echo "Building repeat"
	cc -c utils/src/repeat.c -o utils/bin/repeat.o
	cc -o utils/bin/repeat utils/bin/repeat.o
	@echo "repeat OK"
