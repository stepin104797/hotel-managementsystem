#makefile used to compile the movie reservation system
#Also includes a clean option

all:main.o logo.o food.o roombooking.o
	@echo '*Compiling program'
	@gcc -o hotels main.o logo.o food.o roombooking.o
main.o:main.c
	@echo '*Compiling main'
	@gcc -c main.c
logo.o:logo.c
	@echo '*Compiling logo'
	@gcc -c logo.c
food.o:food.c
	@echo '*Compiling food'
	@gcc -c food.c
roombooking.o:roombooking.c
	@echo '*Compiling roombooking'
	@gcc -c roombooking.c
clean:
	@echo '*Cleaning object and executable files'
	rm -f *.o hotels