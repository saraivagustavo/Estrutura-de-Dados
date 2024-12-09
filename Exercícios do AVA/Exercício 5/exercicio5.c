/*O objetivo desta atividade é implementar a função load_image_ppm do código base para ler imagens coloridas no formato PPM (Portable Pixel Map). Consulte este site para se familiarizar com o formato de imagens PPM no modo texto (P3) antes de prosseguir.
Instruções:
 Utilize o código disponível, o qual contém a estrutura básica.
 Altere apenas o corpo da função load_image_ppm. As etapas esperadas para a implementação estão fornecidas como comentários dentro da função.
 Altere apenas a implementação do corpo da função, mantendo inalterados a estrutura do código e o tipo proposto para armazenamento de imagens.*/

// For more information on PPM (P3) format, see https://paulbourke.net/dataformats/ppm/.
#include <stdio.h>
#include <stdlib.h>

// Struct to represent an image
struct image
{
    unsigned char ***data; // 3D matrix of unsigned char representing the image (height x width x 3 for RGB)
    int width;             // Width of the image
    int height;            // Height of the image
};

// Typedef the struct image to Image
typedef struct image Image;

/**
 * Loads an image from a (RGB+P3) PPM file.
 *
 * @param filename The path to the PPM file.
 * @param image    A pointer to the Image structure where the loaded image will be stored.
 */

void load_image_ppm(const char *filename, Image *image)
{
    //abre o arquivo para leitura
    FILE *file = fopen(filename, "r");
    if (!file) //verifica se o arquivo foi aberto com sucesso
    {
        printf("Erro ao abrir o arquivo para leitura: %s\n", filename);
        return; //retorna se não foi possível abrir o arquivo
    }

    //lkê o cabeçalho do arquivo PPM
    char magic_number[3];
    fscanf(file, "%2s", magic_number); //lê os dois primeiros caracteres (o número mágico)
    if (strcmp(magic_number, "P3") != 0) //verifica se o formato do arquivo é P3
    {
        printf("Formato de arquivo inválido (não é P3).\n");
        fclose(file); //fecha o arquivo antes de retornar
        return;
    }

    //lê a largura e a altura da imagem
    fscanf(file, "%d %d", &image->width, &image->height);

    //lê o valor máximo de cor e verifica se é 255
    int max_value;
    fscanf(file, "%d", &max_value);
    if (max_value != 255) //o programa só suporta arquivos PPM com valor máximo 255
    {
        printf("Valor máximo de cor inválido (deve ser 255).\n");
        fclose(file); //fecha o arquivo antes de retornar
        return;
    }

    //aloca memória dinamicamente para armazenar os dados da imagem (matriz 3D de RGB)
    image->data = (unsigned char ***)malloc(image->height * sizeof(unsigned char **));
    for (int i = 0; i < image->height; i++) //percorre cada linha da imagem
    {
        image->data[i] = (unsigned char **)malloc(image->width * sizeof(unsigned char *));
        for (int j = 0; j < image->width; j++) //percorre cada coluna da linha
        {
            //aloca memória para 3 valores (R, G e B) para cada pixel
            image->data[i][j] = (unsigned char *)malloc(3 * sizeof(unsigned char));
        }
    }

    //lê os dados da imagem (valores RGB de cada pixel)
    for (int i = 0; i < image->height; i++)
    {
        for (int j = 0; j < image->width; j++)
        {
            int r, g, b; //variáveis temporárias para armazenar os valores RGB
            fscanf(file, "%d %d %d", &r, &g, &b); // Lê os valores RGB do arquivo
            //armazena os valores lidos na estrutura de dados da imagem
            image->data[i][j][0] = (unsigned char)r;
            image->data[i][j][1] = (unsigned char)g;
            image->data[i][j][2] = (unsigned char)b;
        }
    }

    //fecha o arquivo após a leitura completa
    fclose(file);
}



/**
 * Writes the given image to a (RGB+P3) PPM file.
 *
 * @param filename The name of the PPM file to write.
 * @param image The image to write.
 */

void write_image_to_ppm(const char *filename, const Image *image)
{
    FILE *file = fopen(filename, "w");
    if (!file)
    {
        printf("Error opening file for writing: %s\n", filename);
        return;
    }

    // Write the PPM header
    fprintf(file, "P3\n");                                 // P3 is the magic number for PPM P3 format
    fprintf(file, "%d %d\n", image->width, image->height); // Write the width and height of the image
    fprintf(file, "255\n");                                // Write the maximum pixel value

    // Write the image data
    for (int i = 0; i < image->height; i++)
    {
        for (int j = 0; j < image->width; j++)
        {
            fprintf(file, "%d %d %d", image->data[i][j][0], image->data[i][j][1], image->data[i][j][2]);
            if (j < image->width - 1)
            {
                fprintf(file, " ");
            }
            else
            {
                fprintf(file, "\n");
            }
        }
    }

    // Close the file
    fclose(file);
}

int main()
{
    // Declare an image structure
    Image image;

    // Load the image from the file "input.ppm"
    // load_image_ppm("input.ppm", &image);

    // Write the image to the file "output.ppm"
    write_image_to_ppm("output.ppm", &image);

    return 0;
}