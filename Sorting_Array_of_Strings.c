#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef unsigned char           uint8_t;
typedef unsigned long int      uint32_t;


int lexicographic_sort(const char *a,const char *b)
{
	/*lexicographic_sort (increasing) = An arrangement of characters, words, or numbers in alphabetical order */
	
    int ret=0;
	
	ret=strcmp(a,b);
    
	return ret;
}

int lexicographic_sort_reverse(const char *a,const char *b) 
{
    /*lexicographic_sort_reverse (decreasing) = An arrangement of characters, words, or numbers in alphabetical order */
    
    int ret=0;
	
	ret=strcmp(a,b);
    
	return ret;
}

int sort_by_number_of_distinct_characters(const char *a,const char *b) 
{
	/* increasing */
    /*distinct = (non-repeating characters) */
	int ret=0;
	uint32_t i=0;
	uint32_t j=0;
	uint32_t result_1=0;
	uint32_t result_2=0;
	uint32_t indicator=0;
	
	for (i=0;i<strlen(a);i++)
	{
		for (j=i+1;j<strlen(a);j++)
		{
			if(a[i]==a[j])         
			{
				indicator=1;
			}
		}
		if(indicator==0) result_1++;
		indicator=0;
	}	
	
	indicator=0;
	
	for (i=0;i<strlen(b);i++)
	{
		for (j=i+1;j<strlen(b);j++)
		{
			if(b[i]==b[j])         
			{
				indicator=1;
			}
		}
		if(indicator==0) result_2++;
		indicator=0;
	}
	
	if (result_1>result_2) ret=1;
	else if (result_1<result_2) ret=-1;
	else if (result_1==result_2)  ret=lexicographic_sort( a , b );
	
	return ret;
}

int sort_by_length(const char *a,const char *b) 
{
    /*sort_by_length (increasing) = to sort the strings in order of their lengths of characters*/
	
    int ret=0;
	uint32_t len_a=0; 
    uint32_t len_b=0; 
	
	len_a= strlen(a);
	len_b= strlen(b);
	if (len_a>len_b) ret=1;
	if (len_a<len_b) ret=-1;
	if (len_a==len_b)  ret=lexicographic_sort( a , b );
	
    return ret;
}

void string_sort( char** arr ,const int len , int (*cmp_func)(const char *a,const char *b)  )
{
	uint32_t index1=0;
	uint32_t index2=0;
	uint32_t counter=0;
	int ret=0;
	uint8_t *temp_arr=NULL;
	
	
	for (index1=0;index1<len;index1++)
	{
		for (index2=index1+1;index2<len;index2++)
		{
			ret=cmp_func( arr[index1] , arr[index2] );
			if (cmp_func==lexicographic_sort)
			{
				if (ret>0)
				{
					temp_arr=arr[index1];
					arr[index1]=arr[index2];
					arr[index2]=temp_arr;
				}
			}
			else if (cmp_func==lexicographic_sort_reverse)
			{
				if (ret<0)
				{
					temp_arr=arr[index1];
					arr[index1]=arr[index2];
					arr[index2]=temp_arr;
				}
			}
			else if (cmp_func==sort_by_number_of_distinct_characters)
			{
				if (ret>0)
				{
					temp_arr=arr[index1];
					arr[index1]=arr[index2];
					arr[index2]=temp_arr;
				}
				
			}
			else if (cmp_func==sort_by_length)
			{
				if (ret>0)
				{
					temp_arr=arr[index1];
					arr[index1]=arr[index2];
					arr[index2]=temp_arr;
				}
			}
			
		}
	}
	
}


int main() 
{
    int n;       //    n --->>>  Number of strings 
    scanf("%d", &n);
  
    char **arr;
	arr = (char **)malloc( n * sizeof(char *) );       //    arr ---->>>    Array of pointers(strings)
    
    for(int i = 0; i < n; i++)
	{
        *(arr + i) = malloc(1024 * sizeof(char));   //   Each string consists of maximum of (1024) characters
        scanf("%s", arr[i] );
        arr[i] = realloc( arr[i] , strlen( arr[i] ) + 1 );
    }
  
    string_sort(arr , n , lexicographic_sort);
	
    for(int i = 0; i < n; i++)
	{
        printf("%s\n", arr[i]);
	}
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
	{
        printf("%s\n", arr[i]); 
	}
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
	{
        printf("%s\n", arr[i]);  
	}		
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
	{
        printf("%s\n", arr[i]); 
	}
    printf("\n");
	
	return 0;
}