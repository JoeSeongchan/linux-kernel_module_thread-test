//
// Created by seongchan-joe on 21. 11. 8..
//

#ifndef TEST_KERNEL_THREAD_MODULE_UTILITIES_H
#define TEST_KERNEL_THREAD_MODULE_UTILITIES_H

#define log(...) logFn(__func__,##__VA_ARGS__)

#include <linux/string.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

void logFn(const char *caller_name, const char *fmt, ...);

#endif //TEST_KERNEL_THREAD_MODULE_UTILITIES_H
