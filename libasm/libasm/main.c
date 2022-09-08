/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 20:30:17 by mrubio            #+#    #+#             */
/*   Updated: 2021/09/10 00:18:47 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

//COLOR
void	green()
{
	printf("\033[0;32m");
}
void	red()
{
	printf("\033[0;31m");
}
void	yellow()
{
	printf("\033[0;33m");
}
void	end()
{
	printf("\033[0m");
}
//COLOR

// STRLEN
void	check_strlen(char *str)
{
	int n1;
	int n2;

	n1 = ft_strlen(str);
	n2 = strlen(str);
	if (n1 == n2)
	{
		green();
		printf("[OK]  ft_strlen:(%i) || strlen:(%i) --", n1, n2);
		printf(">> %s\n",str);
	}
	else
	{
		red();
		printf("[KO]   my:[%i] orig:[%i] >> %s", n1, n2, str);
	}

}
int		case_strlen(void)
{
	char *str;

	printf("---------- FT_STRLEN ----------\n\n");
	printf("Escriba una frase o presione ENTER (sin escribir) para pruebas por defecto\n");

	fflush(0);
	end();
	str = malloc(500);
	bzero(str, strlen(str));
	fgets(str, 500, stdin);
	
	if (strlen(str) >= 500)
	{
		printf("La frase no puede ser mayor de 500 carácteres\n");
		return;
	}

	if (str[0] >= 32 && str[0] <= 127)
		check_strlen(str);
	else
	{
		check_strlen("Holahola");
		check_strlen("");
		check_strlen("que tal como estas 42madrid, libasm es bien, el proyecto services es el demonio");
		check_strlen("1234%%&/(&$$$$$$&/(/&u567465345)");
		check_strlen("\"           \t\"\r");
	}
	sleep(1);
	free(str);
	return;
}

// STRCPY
void	check_strcpy(char *str)
{
	char *my;
	char *or;

	my = malloc(ft_strlen(str));
	or = malloc(ft_strlen(str));

	ft_strcpy(my, str);
	strcpy(or, str);

	if (strcmp(or, my) == 0)
	{
		green();
		fflush(0);
		printf("[OK]   >> %s\n", str);
	}
	else
	{
		red();
		fflush(0);
		printf("[KO]  original >> %s || copia >> %s\n", or, my);
	}
	free(my);
	free(or);
}
void	case_strcpy(void)
{
	printf("---------- FT_STRCPY ----------\n\n");
	printf("Escriba una frase o presione ENTER (sin escribir) para pruebas por defecto\n");

	fflush(0);
	end();
	fgets(str = malloc(500), 500, stdin);

	
	if (strlen(str) >= 500)
	{
		printf("La frase no puede ser mayor de 500 carácteres\n");
		return ;
	}

	if (str[0] >= 32 && str[0] <= 127)
		check_strcpy(str);
	else
	{
		check_strcpy("Holahola");
		check_strcpy("");
		check_strcpy("que tal como estas 42madrid, libasm es bien, el proyecto services es el demonio");
		check_strcpy("1234%%&(/&$$$$$$&//&u567465345)");
		check_strcpy("\"           \t\"\r");
	}
	printf("\n\n");
	sleep(1);
	return ;
}


// STRCMP
void	check_strcmp(char *s1, char *s2)
{
	int my;
	int or;

	my = ft_strcmp(s1, s2);
	or = strcmp(s1, s2);
	if (my == or)
	{
		green();
		fflush(stdout);
		printf("[OK]   [%i]  ||  arg1> [%s]   arg2> [%s]\n", my, s1, s2);
	}
	else
	{
		red();
		fflush(stdout);
		printf("[KO]   my[%i] or[%i]  ||  arg1> [%s]   arg2> [%s]\n", my, or, s1, s2);
	}
}
void	case_strcmp(void)
{
	printf("---------- FT_STRCMP ----------\n\n");
	printf("Escriba una frase o presione ENTER (sin escribir) para pruebas por defecto\n");

	str = malloc(500);

	fflush(0);
	end();
	fgets(str = malloc(500), 500, stdin);
	
	if (strlen(str) >= 500)
	{
		printf("La frase no puede ser mayor de 500 carácteres\n");
		break;
	}

	if (str[0] >= 32 && str[0] <= 127)
		check_strcmp(str, str);
	else
	{
		check_strcmp("Holahola", str);
		check_strcmp("", str);
		check_strcmp("que tal como estas 42madrid, libasm es bien, el proyecto services es el demonio", str);
		check_strcmp("1234%%&(/&$$$$$$&//&u567465345)", str);
		check_strcmp("\"           \t\"\r", str);
	}
	printf("\n\n");
	sleep(1);
	break;
}

// STRDUP
void	check_strdup(char *str)
{
	char *s1;
	char *s2;

	s1 = strdup(str);
	s2 = ft_strdup(str);
	if (*s1 == *s2)
	{
		green();
		printf("OK   || [%s]\n", str);
	}
	else
	{
		red();
		printf("KO   || my:[%s] or:[%s]\n", s2, s1);
	}
}


// READ
void	check_read(char *file)
{
	int fd;
	char *s1;
	char *s2;
	int ret_ft_read;
	int ret_read;
	s1 = malloc(25);
	s2 = malloc(25);
	fd = open(file, O_RDONLY);
	errno = 0;
	ret_read = read(fd, s1, 25);
	errno = 0;
	ret_ft_read = ft_read(fd, s2, 25);
	if (ret_ft_read == ret_read)
	{
		green();
		printf("OK errno:[%d] > [%i][%s]\n", errno, ret_ft_read, s2);
	}
	else
	{
		red();
		printf("KO > Orig:[%i][%i][%s]   My:[%i][%i][%s]\n", ret_read, errno, s1, ret_ft_read, errno, s2);
	}
	free(s1);
	free(s2);
	close(fd);
}

int		head(void)
{
	int n;

	yellow();
	printf("------------------------------\n");
	printf("------- LIBASM TESTER --------\n");
	printf("------------------------------\n\n");
	printf("Seleccione una de las siguientes opciones o pulse ENTER para probar todas:\n");
	printf("    [1] FT_STRLEN      [4] FT_STRDUP\n");
	printf("    [2] FT_STRCPY      [5] FT_WRITE\n");
	printf("    [3] FT_STRCMP      [6] FT_READ\n");

	scanf("%i", &n);

	if (n == 0)
		n = 9;
		
	return (n);
}

int		main(void)
{
	while (1)
	{
		int nb = head();

		switch (nb)
		{
			system("clear");
			case 0: // Todas
				
				
			case 1: // Strlen
				case_strlen();
				break;
				
			case 2: // Strcpy
				case_strcpy();
				break;

			case 3: // Strcmp
				case_strcmp();
				break;

			case 4: // Strdup

				break;
			case 5: // Write

				break;
			case 6: // Read

				break;
			default :
				printf("No es una opción correcta");
				sleep(30);
				break;
		}
	}


		yellow();
		printf("\nFT_STRCMP\n");
		check_strcmp("Holhola", "Quetal");
		check_strcmp("", "");
		check_strcmp("Holhola", "");
		check_strcmp("Holholb", "");
		check_strcmp("Holaholb", "Holhola");
		check_strcmp("", "Holholb");

		yellow();
		printf("\nFT_STRDUP\n");
		check_strdup("Hola");
		check_strdup("");
		check_strdup("Holadadsadnjefjl3fh3ufo3ef");

		yellow();
		printf("\nFT_WRITE\n");
		char *str = "Hola hola hola que tal estassss!;";
		char *path = "test.txt";
		int fd = open(path, O_WRONLY);
		write(fd, str, 33);
		close(fd);
		fd = open(path, O_WRONLY);
		ft_write(fd, str, 33);
		printf("%s", str);
		close(fd);

		yellow();
		printf("\nFT_READ\n");
		char *my = malloc(200);
		char *ori = malloc(200);
		fd = open(path, O_RDONLY);
		printf("My funct > [%lu] -> [%s] // errno: %i\n", ft_read(fd, my, 50), my, errno);
		close(fd);
		fd = open(path, O_RDONLY);
		printf("Original > [%lu] -> [%s] // errno: %i", read(fd, ori, 50), ori, errno);
		close(fd);

		end();
		return (0);
}