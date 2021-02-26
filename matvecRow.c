#include <stdio.h>
#include <stdlib.h>
#define COLUMN_SIZE 4096
extern int v[COLUMN_SIZE]; 
extern int num_rows;
typedef int Array[][COLUMN_SIZE];
void matvec(Array matrix,int result[]){
     	for(int a=0;a<num_rows;a+=1){
            int sum=0;
         	for(int b=0;b<COLUMN_SIZE;b+=1){
            sum += matrix[a][b] * v[b];	   
            }
            result[a] = sum;
        }
        
    }
