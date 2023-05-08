#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>

#define BUFF_SIZE 128

void print_error(char *message);
void print_elf_header(Elf64_Ehdr *header);


/**
 * main - main function
 * @argc: argment count
 * @argv: argment vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int fd;
	ssize_t nread;
	Elf64_Ehdr header;
	char *file = argv[1];

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	if ((fd = open(file, O_RDONLY)) < 0)
	{
		print_error("Error: Cannot open file");
	}
	if ((nread = read(fd, &header, sizeof(header))) != sizeof(header))
		print_error("Error: Cannot read ELF header");
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Error: Not an ELF file");
	print_elf_header(&header);
	if (close(fd) < 0)
		print_error("Error: Cannot close file");
	return (0);

}
/**
 * print_error - print error message
 * @message: error message to print
 */

void print_error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - return elf header
 * @header: header
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	    printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
	    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	    printf("  Type:                              %s\n", header->e_type == ET_NONE ? "NONE (No file type)" :
			    header->e_type == ET_REL ? "REL (Relocatable file)" :
			    header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			    header->e_type == ET_DYN ? "DYN (Shared object file)" :
			    header->e_type == ET_CORE ? "CORE (Core file)" :
			    "Unknown");
	    printf("  Entry point address:               0x%lx\n", header->e_entry);
	    printf("  Start of program headers:          %ld (bytes into file)\n", header->e_phoff);
	    printf("  Start of section headers:          %ld (bytes into file)\n", header->e_shoff);
	    printf("  Flags:                             0x%x\n", header->e_flags);
	    printf("  Size of this header:               %d (bytes)\n", header->e_ehsize);
	    printf("  Size of program headers:           %d (bytes)\n", header->e_phentsize);
	    printf("  Number of program headers:         %d\n", header->e_phentsize);
			    
}
