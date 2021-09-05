all: pnt fail

pnt: utils/src/pnt.c
	@echo "Building pnt"
	cc utils/src/pnt.c -o utils/bin/pnt
	@echo "pnt OK"

fail: utils/src/fail.c
	@echo "Building fail"
	cc utils/src/fail.c -o utils/bin/fail
	@echo "fail OK"
