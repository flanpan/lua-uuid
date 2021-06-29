all : linux

linux :
	gcc -g -O3 -Wall -fPIC --shared -I../skynet/3rd/lua -luuid -o uuid.so lua-uuid.c

macosx :
	gcc -g -Wall --shared -undefined dynamic_lookup -I../skynet/3rd/lua -o uuid.so lua-uuid.c

clean :
	rm -rf *.o *.so *.dSYM
