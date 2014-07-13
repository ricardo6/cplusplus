#include "cstdio"
#include "cstdlib"
#include "cstring"

struct Node
{
	char* value;
	Node* next; 
};

struct CircularList
{
	Node* last;
};

void init_cl(CircularList* cl)
{
	cl->last = NULL;
}

void add_value_cl(CircularList* cl, const char* value)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
	size_t len = strlen(value);
	new_node -> value = (char*)malloc(sizeof(len + 1));
	memcpy(new_node -> value, value, len + 1);

    if(cl -> last == NULL)
    {
    	cl -> last = new_node;
    	new_node -> next = cl -> last;
    	return; 
    }
    new_node -> next = cl -> last -> next;
    cl -> last -> next = new_node;
    cl -> last = new_node;
}

void show_cl(CircularList* cl)
{
	Node* last = cl -> last;	
	if (last == NULL)
	{
		puts("empty...");
		return;
	}
	Node* aux = last -> next;
	while(1)
	{
		puts(aux -> value);
		if (aux == last)
		{
			break;
		}
		aux = aux -> next;
	}
}

int main(int argc, char const *argv[])
{
	CircularList cl;
	init_cl(&cl); 
	add_value_cl(&cl, "one");
	add_value_cl(&cl, "two");
	add_value_cl(&cl, "three");
	add_value_cl(&cl, "for");
	add_value_cl(&cl, "five");
	add_value_cl(&cl, "six");
	add_value_cl(&cl, "seven");
	add_value_cl(&cl, "eight");
	add_value_cl(&cl, "nine");
	add_value_cl(&cl, "ten");
	show_cl(&cl);
	return 0;
}