#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct 
{
    /* Define three fields of type int: length, width and height */
    int length;
    int width;
    int height;
}box;


int get_volume(box b) 
{
    /* Return the volume of the box */
    int ret;
    
    ret= (b.length)*(b.width)*(b.height);
    
    return ret;
}

int is_lower_than_max_height(box b) 
{
    /* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise  */
    int ret=0;
    
    if (b.height<41)  ret=1;
    else ret=0;
    
    return ret;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}