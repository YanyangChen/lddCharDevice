
obj-m += scull.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean


#https://github.com/avt-a003257/ldd/tree/32b02da23c5884c4b68b78d83f03045700ea8107
#http://gauss.ececs.uc.edu/Courses/c4029/code/drivers/Scull/scull.html
#https://github.com/jesstess/ldd4/tree/master/scull
#https://stackoverflow.com/questions/26808325/implicit-declaration-of-function-create-proc-entry
#https://stackoverflow.com/questions/61295277/passing-argument-4-of-proc-create-from-incompatible-pointer-type
