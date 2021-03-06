/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pri_queque.h
 * Author: syedy_000
 *
 * Created on January 6, 2020, 8:59 PM
 */

#ifndef PRI_QUEQUE_H
#define PRI_QUEQUE_H

typedef struct node
{
    int priority;
    char* data;
    struct node *next;
} Node_t, * Node_ptr_t;

extern void PQ_insert(int, char*);
extern Node_ptr_t PQ_delete();
extern Node_ptr_t PQ_get_head();
extern int PQ_get_size();

#endif /* PRI_QUEQUE_H */

