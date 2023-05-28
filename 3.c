#include <stdio.h>

struct Move
{
	int x;
	int y;
};

struct Move getFinishPoint(struct Move arr[], int n) { 
    struct Move res={.x=0, .y=0}; 
    for (int i=0; i<n; i++) {
        res.x+=arr[i].x;
        res.y+=arr[i].y;
    }
    return res;
}

int main() {
    struct Move fin;
    struct Move res[]={
        {12, 10},
        {-7, -5}
    };
    fin=getFinishPoint(res, 2);
    printf("%d %d\n", fin.x , fin.y);
}