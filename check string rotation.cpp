/*
You will be provided with an original string and its rotated version as input and you have to 
return by how many times does the original string have to be rotated to obtain the rotated version.

A rotation signifies removing a letter from the start of the string and appending it to the end of the same string.

Input format :
Line 1 : Original String
Line 2 : Rotated String

Sample Input:
hello
llohe

Sample Ouput:
2
*/




bool checck(char *original, char *rotated,int d,int ize)
{
    int k=1;
    for(int i=d+1;i<ize;i++)
    {
        if(rotated[i]!=original[k++])
        return false;
        
    }
    return true;
}



int checkRotated(char *original, char *rotated) {
	char a=original[0];
	char b=rotated[0];
	int i=0,j=0,k=0;
	if(a==b)
	return 0;
	int siz=0,x=0,flag=0;
	for(i=0;original[i]!='\0';i++)
	{
	    siz++;
	    
	}
	for(i=0;i<siz;i++)
	{
	    if(rotated[i]!=a)
	    x++;
	    else
	    {
	        if(checck(original,rotated,i,siz))
	        {
	            return siz-x;
	        }
	        else
	        {
	            x++;
	        }
	    }
	}
}
