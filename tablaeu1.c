#include <stdio.h>


int main()
{
    int m;
    int classe1[13];
    int classe2[15];
    int tri[28];
    int i, j, N, moy,O=13;
    int c =0;
    int NBmin, NBmax;
do{
    printf ("pour sortir du programme entrer 0:\n");
    printf("donner le nombre de classe : ");
    scanf("%d", &N);
    switch (N)
    {
    case 1:
        printf(" entrer les notes pour la classe 1:\n");
        for (i = 0; i < 13; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &classe1[i]);
        }
        NBmax = classe1[0];
        NBmin = classe1[0];
    
        for (i = 1; i < 13; i++)
        {
            if (NBmax < classe1[i])
                NBmax = classe1[i];
        }
        for (i = 1; i < 13; i++)

        {
            if (classe1[i] < NBmin)
                NBmin = classe1[i];
        }
        for (i = 0; i < 13; i++)
                {if (classe1[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiant>=10 est:%d\n",c);
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n ", NBmax, NBmin);
        break;

    case 2:
        printf(" entrer les notes pour la classe 2:\n");
        for (i = 0; i < 15; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &classe2[i]);
        }
        NBmax = classe2[0];
        NBmin = classe2[0];
        for (i = 1; i < 15; i++)
        {
            if (NBmax < classe2[i])
                NBmax = classe2[i];
        }
        for (i = 1; i < 15; i++)
        {
            if (NBmin > classe2[i])
                NBmin = classe2[i];
        }
                for (i = 0; i < 15; i++)
                {if (classe2[i]>=10 ) {c++;}
                }
                printf ("le nombre d'etudiant>=10 est:%d\n",c);
        
        printf("la plus grand moyenne est:%d\nla plus petit moyenne est: %d\n", NBmax, NBmin);
        break;
    case 3:
        printf(" entrer les notes pour les deux classes :\n");
    for (i = 0; i < 13; i++)
    {
        tri[i]=classe1[i];
    }
    for (i = 0; i < 15; i++)
    {
         tri[O]=classe2[i];
         O++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (tri[i] > tri[j])
            {
                m = tri[i];
                tri[i] = tri[j];
                tri[j] = m;
            }
}
            printf ("les notes de deux classes par ordre croissant:");
            for (i = 0; i < 28; i++){
                printf("%d\t",tri[i]);
            }

    default:
        printf("entre  1 ou 2 ou 3");
    }
    }while(N!=0);
    }