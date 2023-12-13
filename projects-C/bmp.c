#include <stdio.h>
#include <stdlib.h>

struct BITMAP_header
{
		char name[2];
		unsigned int size;
		int garbage;
		unsigned int image_offset;
};

void fileopener()
{
		FILE *fp = fopen("pic.bmp", "rb");
		struct BITMAP_header header;
		fread(&header, sizeof(struct BITMAP_header), 1, fp);

		printf("%c, %c\n", header.name[0], header.name[1]);

		fclose(fp);
}

int main(void)
{
		fileopener();

		return (0);
}
