/**
 * @file library management.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>


/**
 * @brief 
 * 
 */
struct meroDate
{
    int mm,dd,yy;
};
/**
 * @brief 
 * 
 */
struct books
{
    int id;
    char stname[20];
    char name[20];
    char Author[20];
    int quantity;
    float Price;
    int count;
    int rackno;
    char *cat;
    struct meroDate issued;
    struct meroDate duedate;
};
/**
 * @brief 
 * 
 */
char catagories[][15]={"Computer","Electronics","Electrical","Civil","Mechnnical","Architecture"};
/**
 * @brief 
 * 
 */
void returnfunc(void);
/**
 * @brief 
 * 
 */
void mainmenu(void);
/**
 * @brief 
 * 
 */
void addbooks(void);
/**
 * @brief 
 * 
 */
void deletebooks(void);
//void searchbooks(void);
/**
 * @brief 
 * 
 */
void viewbooks(void);
/**
 * @brief 
 * 
 */
void closeapplication(void);
/**
 * @brief 
 * 
 * @return int 
 */
int  getdata();
/**
 * @brief 
 * 
 * @return int 
 */
int  checkid(int);
/**
 * @brief 
 * 
 * @return int 
 */
int t(void);
/**
 * @brief 
 * 
 */
void Password();
/**
 * @brief 
 * 
 */
void issuerecord();
