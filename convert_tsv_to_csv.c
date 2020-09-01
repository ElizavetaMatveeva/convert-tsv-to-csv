/*
ITMO University homework, 2015
Task: convert TSV file named "test_data.txt" to CSV file 
*/

#include <stdio.h>

void TSVtoCSV(FILE* f, FILE* f1)
{
	char c;
	while (c!= EOF)
	{
		c=fgetc(f);
		if (c=='\t') 
			c=','; // Заменяем табуляцию на запятые
		putc(c, f1); 
	}
}

int main()
{
	FILE* f=fopen("test_data.txt", "r");
	FILE* f1=fopen("data_in_csv.txt", "w");
	TSVtoCSV(f, f1); // Применяем функцию для создания или перезаписи нового файла
	fclose(f);
	fclose(f1);
	return 0;
}
