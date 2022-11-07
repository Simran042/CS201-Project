//this is to generate the graph
#include <stdlib.h>
#include<time.h>
#include<stdio.h>
//min capacity
#define MIN 30
//max capacity
#define MAX 60
int main()
{
    int vertex = 1000;
    FILE *filePointer;
    filePointer = fopen("data.txt", "w");

    fprintf(filePointer,"%d %d\n", vertex, vertex +1);
    srand(time(0));
    int count = 0;
    for(int i = 0; i <vertex; i++)
    {
        int capacity;
        capacity = (rand()%(MAX - MIN)) + MIN;
        if(i == 0)
        {
            count += 2;
        }

        else if(i<vertex-2)
        {
            if(i%2 == 0)
            {
                count +=2;
            }
            else{
                ++count;
            }
        }
        if(i == vertex-2)
        {
            ++count;
        }
    }
    fclose(filePointer);
    FILE *filePointer_1 = fopen("data.txt", "w");
    fprintf(filePointer_1,"%d %d\n", vertex, count);
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
    fclose(filePointer_1);
    // printf("%d", count);

}
