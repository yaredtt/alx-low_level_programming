#include 

int i, j, count = 0;
    
    for (i = 0; s[i] != '\0' && i == count; i++)
    		for (j = 0; accept[j] != '\0'; j++)
					if (s[i] == accept[j])
					count++;
						
						return count;
