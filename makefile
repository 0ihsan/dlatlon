default: dlatlon
dlatlon:
	cc dlatlon.c -o dlatlon -lm
install: dlatlon
	chmod +x dlatlon
	cp dlatlon /usr/local/bin/dlatlon
clean:
	rm -rf ./dlatlon
uninstall:
	rm -rf /usr/local/bin/dlatlon
