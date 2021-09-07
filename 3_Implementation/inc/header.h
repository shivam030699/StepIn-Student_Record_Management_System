/**
 * @file hearder.h
 * @author shivam (shivam030699@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HEADER_H__
#define __HEADER_H__


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/**
 * @brief gotoxy function is used to place cursor at a desired location.
 * It accepts two args as x and y coordinate of the location.
 * 
 */
void gotoxy(int ,int );

/**
 * @brief menu function will show you the menu of all the available choices/operations.
 * 
 */
void menu();

/**
 * @brief to add a record by providing some data about the student.
 * 
 */
void add();

/**
 * @brief to view all the database entries available in file.
 * 
 */
void view();

/**
 * @brief to search a particular database among the whole database of students by typing the name.
 * 
 */
void search();

/**
 * @brief if we want to update data about any student, type his/her name and enter details again.
 * 
 */
void modify();

/**
 * @brief if any student no longer exist in school then we can delete his/her data by searching his name.
 * 
 */
void deleterec();

/**
 * @brief a structure to define info stored in student data.
 * 
 */
struct student
{
    char name[20];
    char mobile[10];
    int sfid;
    char stream[20];
    char branch[20];
};
#endif
