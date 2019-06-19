/*
** EPITECH PROJECT, 2019
** libc
** File description:
** salut.h
*/

#ifndef SALUT_H_
    #define SALUT_H_

#ifdef __cplusplus
    extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Counters
static int run = 0;
static int assert_ = 0;
static int failed = 0;

#ifdef __cplusplus
static int exceptions = 0;
#endif

// Declare tests and suites
#define SALUT(fname) static void (fname)(void)
#define SALUT_SUITE(sname) static void (sname)(void)

// Usefull
#define SAFE_ZONE(block) do {\
    block\
} while (0)
#define FAILED_TEST SAFE_ZONE(\
    printf("Test '%s', in file %s:%d failed\n", __func__, __FILE__, __LINE__);\
    failed++;\
)

// Run tests and suites
#define PLEASE(fname) SAFE_ZONE(\
    run++;\
    (fname)();\
)
#define PLEASE_SUITE(sname) SAFE_ZONE(\
    (sname)();\
)

// Report
#ifdef __cplusplus
#define CIAO() SAFE_ZONE (\
    printf("%d Test(s), %d Assertion(s), ", run, assert_);\
    if (!failed)\
        printf("0 Assertion failed\n");\
    else\
        printf("%d Assertion(s) failed\n", failed);\
	printf("%d Exceptions\n", exceptions);\
)
#else
#define CIAO() SAFE_ZONE (\
    printf("%d Test(s), %d Assertion(s), ", run, assert_);\
    if (!failed)\
        printf("0 Assertion failed\n");\
    else\
        printf("%d Assertion(s) failed\n", failed);\
)
#endif

// Assertions
#define slt_true(test) SAFE_ZONE(\
    assert_++;\
    if (!(test)) {\
        FAILED_TEST;\
    }\
)
#define slt_false(test) SAFE_ZONE(\
    assert_++;\
    if (test) {\
        FAILED_TEST;\
    }\
)
#define slt_eq(result, expected) SAFE_ZONE(\
    int res = (result);\
    int ex = (expected);\
    assert_++;\
    if (res != ex) {\
        FAILED_TEST;\
    }\
)
#define slt_neq(result, expected) SAFE_ZONE(\
    int res = (result);\
    int ex = (expected);\
    assert_++;\
    if (res == ex) {\
        FAILED_TEST;\
    }\
)
#define slt_double_eq(result, expected) SAFE_ZONE(\
    double res = (result);\
    double ex = (expected);\
    assert_++;\
    if (res != ex) {\
        FAILED_TEST;\
    }\
)
#define slt_double_neq(result, expected) SAFE_ZONE(\
    double res = (result);\
    double ex = (expected);\
    assert_++;\
    if (res == ex) {\
        FAILED_TEST;\
    }\
)
#define slt_str_eq(result, expected) SAFE_ZONE(\
    char *s1 = (result);\
    char *s2 = (expected);\
    assert_++;\
    if (strcmp(s1, s2)) {\
        FAILED_TEST;\
    }\
)
#define stl_str_neq(result, expected) SAFE_ZONE(\
    char *s1 = (result);\
    char *s2 = (expected);\
    assert_++;\
    if (!strcmp(s1, s2)) {\
        FAILED_TEST;\
    }\
)

#ifdef __cplusplus
    }
#endif

#endif /* !SALUT_H_ */
