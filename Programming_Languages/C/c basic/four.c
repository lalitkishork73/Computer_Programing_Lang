#include<stdio.h>
int main()
{   
    char input;
    float kmstomiles=0.621,incestofoot=0.083,cmstoinches=0.393,poundtokgs=0.453,inchestometers=0.025,i;

    while (1)
    {   
        printf("enter the input character\n 1.kmstomiles\n 2.incestofoot\n 3.cmstoinches\n 4.poundtokgs\n 5.inchestometers\n");
        scanf("%c",&input);

        switch (input)
        {
        case 'q':
        printf("Quitting the program...");
        goto end;
        break;

        case '1':
            scanf("%f km",&i);
            printf("kms to miles is=%f miles",(kmstomiles)*(i));
            break;
        case '2':
            scanf("%f inch",&i);
            printf("inches to foot is=%f feet",(incestofoot)*(i));
            break;
        case '3':
            scanf("%f cm",&i);
            printf("cms to inches is=%f inch",(cmstoinches)*(i));
            break;
        case '4':
            scanf("%f pound",&i);
            printf("pound to kgs is=%f kg",(poundtokgs)*(i));
            break;
        case '5':
            scanf("%f inch",&i);
            printf("inch to meters is=%f meter",(inchestometers)*(i));
            break;
        
        default:
            printf("NOT VALID OPTION");
            break;
        }
    }
    end:
    return 0;
}