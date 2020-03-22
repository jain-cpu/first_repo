all:
	echo "IT's  STarted COmpiling"
	cd add && make
	cd sub && make 
	cd add && cp add.o ~/Downloads/mounting/
	cd sub && cp sub.o ~/Downloads/mounting/
	ar rs libstat.a add.o sub.o
	gcc -o demo demo.c libstat.a
	echo "COmpiling FInished"
clean:
	echo "OH!! STarted CLeaning"
	rm -r *.o
	cd add && rm -r *.o
	cd sub && rm -r *.o
	echo "SWatch CLeaned"
