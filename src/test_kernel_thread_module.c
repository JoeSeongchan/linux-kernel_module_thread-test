//
// Created by seongchan-joe on 21. 11. 8..
//
#include "utilities.h"
#include <linux/kthread.h>
#include <linux/slab.h>
#include <linux/delay.h>


MODULE_LICENSE ("GPL v2");

int test_thread(void *_arg) {
    int *arg = (int *) _arg;
    log("argument : %d\n",*arg);
    kfree(arg);
    return 0;
}

void create_thread(void) {
    static const int THREAD_NUM = 5;
    for (int i = 0; i < THREAD_NUM; i++) {
        int *arg = (int *) kmalloc(sizeof(int), GFP_KERNEL);
        *arg = i;
        kthread_run(&test_thread,(void*)arg,"test_thread");
    }
}

// function to run assignment 9.
void run_assign_9(void) {
    create_thread();
    log("End. Thank you.");
}

int __init

test_kernel_thread_module_init(void) {
    run_assign_9();
    return 0;
}

void __exit

test_kernel_thread_module_cleanup(void) {
    log("Module that tests the kernel thread in linux kernel.\n"
        "LINUX SYSTEM AND ITS APPLICATIONS\n"
        "Subclass : 02\n"
        "ID : 20160570\n"
        "Name : Joe Seong-chan\n");
    return;
}

module_init(test_kernel_thread_module_init);
module_exit(test_kernel_thread_module_cleanup);

