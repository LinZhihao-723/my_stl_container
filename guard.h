//
// Created by Lin Zhihao

#ifndef MY_STL_GUARD_H
#define MY_STL_GUARD_H

#define SEGMENTATION_FAULT 10
#define ACCESS_VIOLATION 11

void check_null_pointer(void* ptr);
void check_access_violation(void* ptr);
void access_violation();

#endif //MY_STL_GUARD_H
