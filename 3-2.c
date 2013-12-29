#include <stdio.h>

void escape(char t1[], char s1[]);
void unescape(char t1[], char s1[]);
int main() 
{
	char s[50] = "\aHello,\n\tWorld! Mistakee\b was \"Extra 'e'\"!\n";
	char t[60];
	
	printf("Original text: %s\n", s);
	escape(t, s);
	printf("Escaped text: %s\n", t);
	unescape(t, s);
	printf("Unescaped text: %s\n", t);
	
}

void escape(char t1[], char s1[])
{
	int i, j;
	
	i = j = 0;
	while (s1[i]){
		switch(s1[i]){
			case '\n':
				t1[j] = '\\';
				t1[++j] = 'n';
				break;
		    case '\t':
		    	t1[j] = '\\';
				t1[++j] = 't';
				break;
			case '\r':
		    	t1[j] = '\\';
				t1[++j] = 'r';
				break;
			case '\a':
		    	t1[j] = '\\';
				t1[++j] = 'a';
				break;	
			case '\\':
		    	t1[j] = '\\';
				t1[++j] = '\\';
				break;
			case '\"':
		    	t1[j] = '\\';
				t1[++j] = '"';
				break;		
			default:
			    t1[j] = s1[i];
				break;	
		}
	++i;
	++j;
    }
	t1[j] = s1[i];	
	
}
void unescape(char t1[], char s1[])
{
	int i, j;
	
	i = j = 0;
	
	while (s1[i]) {
		switch(s1[i]){
			case '\\':
				switch(s1[++i]) {
					case 'n':
				    	t1[j] = '\n';
				    	break;
			        case 'b':
			        	t1[j] = '\t';
			        	break;
			        case 'a':
					    t1[j] = '\a';
						break;
					case 'r':
					    t1[j] = '\r';
						break;
					case '\\':
					    t1[j] = '\\';
						break;
					case '\"':
					    t1[j] = '\"';
						break;						
			        default :
			        	t1[j] = '\\';
					    t1[++j] = s1[i];
						break;
				}
				    	
			default :
			    t1[j] = s1[i];
				break;        	
		}
		++i;
		++j;
	}
	t1[j] = s1[i];
}


