obj-m := test_kernel_thread.o
test_kernel_thread-objs := test_kernel_thread_module.o utilities.o
ccflags-y := -std=gnu99 -Wno-declaration-after-statement
KERNEL_DIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.dwo *.mod *.order Module.symvers