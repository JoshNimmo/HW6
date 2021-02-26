#include <stdio.h>
#include <stdlib.h>
#define COLUMN_SIZE 4096
extern int v[COLUMN_SIZE]; 
extern int num_rows;
typedef int Array[][COLUMN_SIZE];
void matvec(Array matrix,int result[]){              
        for(int b=0;b<num_rows;b+=1){           
        	result[b] = 0;
        }
     	for(int a=0;a<COLUMN_SIZE;a+=1){           
         	for(int b=0;b<num_rows;b+=1){           
            result[b] += matrix[b][a] * v[a];
            }
        }
        
    }
