#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*      Crie uma lista encadeada em C para representar os planetas do sistema solar, com informações como nome, massa, distância do sol e o que mais desejar.   */

typedef struct Moon{
    char moon[50];
}moon;

typedef struct SystemSolar{
    char planet[50];
    double planetMass;
    moon* moons; // Apenas um satelite natural, se houver mais, introduzi-los
    double temperature;
    int daysOnThePlanet;
    double distanceSun;
    struct SystemSolar *prox;
}systemSolar;

// Realiza a limpeza do buffer de entrada
void clearBuffer(){
    char clear;
    while((clear = getchar()) != '\n' && clear != EOF){}
}

// Realiza alocação de memória para as luas
void allocatesMoonsLinearly(int numberMoons, systemSolar *p){

    p->moons = (moon*)malloc(numberMoons * sizeof(moon));

    for(int i = 0; i < numberMoons; i++){
        printf("Name of Moon %d: ", i + 1);
        fgets(p->moons[i].moon, 50, stdin);
    }
}

// Inicializa a estrutura com o valor NULL
systemSolar *structureList = NULL;

// Realiza alocação dos dados dos planetas dinamicamente
systemSolar* allocatesDataDynamically(){
    int numberMoons = 0;
    systemSolar *p = (systemSolar*)malloc(sizeof(systemSolar));
    p->prox = NULL;

    printf("\nName planet: ");
    fgets(p->planet, 50, stdin);
    printf("Mass of the planet(kg): ");
    scanf("%lf", &p->planetMass);
    // Verifica quantidade de Luas do planeta
    printf("Number of Moons on planet: ");
    scanf("%d", &numberMoons);
    clearBuffer();
    allocatesMoonsLinearly(numberMoons, p);

    printf("Planet temperature(C): ");
    scanf("%lf", &p->temperature);
    printf("Days on the planet: ");
    scanf("%d", &p->daysOnThePlanet);
    printf("Distance from the Sun(km): ");
    scanf("%lf", &p->distanceSun);

    return p;
}

void insertNode(systemSolar *newNode){
    newNode->prox = structureList;
    structureList = newNode;
}

// Realiza limpeza dos dados alocados dinamicamente
void clearMemoryAllocation(){

    while(structureList != NULL){
        systemSolar *temp = structureList;
        structureList = structureList->prox;
        free(temp->moons);
        free(temp);
    }
}

int main(){
    char endProgram;

    do{
        // Realiza alocação dos dados para o planeta desejado
        printf("\n\t\t\tPlanetary data recording\n");
        systemSolar *planetData = allocatesDataDynamically();
        insertNode(planetData);

        printf("\nDo you want to enter data from another planet? ");
        do{
            clearBuffer();
            scanf("%c", &endProgram);
            endProgram = tolower(endProgram);

            if(endProgram != 'y' && endProgram != 'n'){
                printf("Invalid entry, type Yes(y) or No(n): ");
            }

        }while(endProgram != 'y' && endProgram != 'n');
        
        clearBuffer();

    }while(endProgram == 'y');

    // Realiza a liberação da memória alocada dinamicamente
    clearMemoryAllocation();

    return 0;
}