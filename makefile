prefix ?= /usr/local
bin = $(prefix)/bin

default: dlatlon

dlatlon:
	cc dlatlon.c -o dlatlon -lm

install: dlatlon
	install -d "$(bin)"
	install dlatlon "$(bin)"

uninstall:
	rm -rf "$(bin)/dlatlon"

clean:
	rm -rf dlatlon

.PHONY: dlatlon install uninstall clean

