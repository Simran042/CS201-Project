//this is to generate the graph
#include <stdlib.h>
#include<time.h>
#include<stdio.h>
//min capacity
#define MIN 5
//max capacity
#define MAX 20
int main()
{
    int vertex = 9999;
    FILE *filePointer;
    filePointer = fopen("data.txt", "w");

    fprintf(filePointer,"%d %d\n", vertex, vertex +1);
    srand(time(0));
    for(int i = 0; i <vertex; i++)
    {
        int capacity;
        capacity = (rand()%(MAX - MIN)) + MIN;
        if(i == 0)
        {
            fprintf(filePointer,"%d %d %d\n", i , i+1, capacity);

            fprintf(filePointer,"%d %d %d\n",i, i +2, capacity);
        }

        else if(i<vertex-2)
        {
            if(i%2 == 0)
            {
                fprintf(filePointer,"%d %d %d\n", i, i-1, capacity);
                fprintf(filePointer,"%d %d %d\n",i, i +2, capacity);
            }
            else{
                fprintf(filePointer,"%d %d %d\n", i, i+2, capacity);
            }
        }
        if(i == vertex-2)
        {
            fprintf(filePointer,"%d %d %d\n",i, i+1, capacity);
        }
    }


}