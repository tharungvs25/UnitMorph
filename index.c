#include<stdio.h>
int main()
{
    int a,b;
    float c,d,e,f,g,h,i;
    printf("Enter which converter you want=\n");
    printf("1. length\n 2.weight\n 3.Temperature\n 4.Angles\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Enter length in \n1.Centimeters\n 2.Millimetrs \n3.Kilometer \n4.Inch \n5.Foot \n6.Mile\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1:
            printf("Enter length in Centimeters= ");
            scanf("%f",&c);
            d=c*10;                          //mm//
            e=c/100000;                      //km//
            f=c*0.39370079;                  //inch//
            g=c*0.0328;                       //foot//
            h=c/160934.4;                    //mile//
            printf("%f Millimeter \n %f Kilometer\n %f Inch\n %f Foot\n %f Mile\n",d,e,f,g,h);
            break;
            
            case 2:
            printf("Enter length in Millimeters= ");
            scanf("%f",&c);
            d=c/10;                          //cm//
            e=c/1000000;                      //km//
            f=c*0.039370079;                  //inch//
            g=c*0.00328;                       //foot//
            h=c/1609344;                    //mile//
            printf("%f  Centimeter \n %f Kilometer\n %f Inch\n %f Foot\n %f Mile\n",d,e,f,g,h);
            break;
            
            case 3:
            printf("Enter length in Kilometers= ");
            scanf("%f",&c);
            d=c*1000000;                          //mm//
            e=c*100000;                      //cm//
            f=c*39370.1;                  //inch//
            g=c* 3280.84;                       //foot//
            h=c*0.62137119;                    //mile//
            printf("%f Millimeter \n %f Centimeter\n %f Inch\n %f Foot\n %f Mile\n",d,e,f,g,h);
            break;
            
            case 4:
            printf("Enter length in Inch= ");
            scanf("%f",&c);
            d=c*25.4;                          //mm//
            e=c*2.54;                      //cm//
            f=c/39370;                  //km//
            g=c/12;                       //foot//
            h=c*0.000015783;                    //mile//
            printf("%f Millimeter \n %f  Centimeter\n %f Kilometers\n %f Foot\n %f Mile\n",d,e,f,g,h);
            break;
            
            case 5:
            printf("Enter length in Foot= ");
            scanf("%f",&c);
            d=c*304.8;                          //mm//
            e=c*30.48;                      //cm//
            f=c/3280.83989;                  //km//
            g=c*12;                       //inch//
            h=c*0.0001894;                    //mile//
            printf("%f Millimeter \n %f  Centimeter\n %f Kilometers\n %f Inch\n %f Mile\n",d,e,f,g,h);
            break;
            
            case 6:
            printf("Enter length in Mile= ");
            scanf("%f",&c);
            d=c*1609344;                          //mm//
            e=c*160934.4;                      //cm//
            f=c*1.60934;                  //km//
            g=c*63360;                       //inch//
            h=c*5280;                    //foot//
            printf("%f Millimeter \n %f  Centimeter\n %f Kilometers\n %f Inch\n %f Foot\n",d,e,f,g,h);
            break;
            
            default:
            printf("Invaild input");
            break;
        }
        
        case 2:
        printf("Enter the weight in \n1.Milligram \n2.Gram \n3.Kilogram \n4.Metric ton \n5.Ounce \n6.Pound\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1:
            printf("Enter the weight in Milli Gram=");
            scanf("%f",&c);
            d=c/1000;                //gram//
            e=c/1000000;             //kg//
            f=c/1000000000;          //ton//
            g=c/28350;               //ounce//
            h=c/453600;              //Pound//
            printf("%f Grams\n %f Kilograms \n %f Tons \n %f Ounces \n %f Pounds",d,e,f,g,h);
            break;
            
            case 2:
            printf("Enter the weight in Gram=");
            scanf("%f",&c);
            d=c*1000;                //milligram//
            e=c/1000;             //kg//
            f=c/1000000;          //ton//
            g=c/28.350;               //ounce//
            h=c/453.600;              //Pound//
            printf("%f Milli Grams\n %f Kilograms \n %f Tons \n %f Ounces \n %f Pounds",d,e,f,g,h);
            break;
            
            case 3:
            printf("Enter the weight in Kilo Gram=");
            scanf("%f",&c);
            d=c*1000000;                //milligram//
            e=c*1000;             //gram//
            f=c/1000;          //ton//
            g=c*35.274;               //ounce//
            h=c*2.205;              //Pound//
            printf("%f Milli Grams\n %f Grams \n %f Tons \n %f Ounces \n %f Pounds",d,e,f,g,h);
            break;
            
            case 4:
            printf("Enter the weight in Tons=");
            scanf("%f",&c);
            d=c*1000000000;                //milligram//
            e=c*1000000;             //gram//
            f=c*1000;          //kilogram//
            g=c*35274;               //ounce//
            h=c*2205;              //Pound//
            printf("%f Milli Grams\n %f Grams \n %f kilograms\n %f Ounces \n %f Pounds",d,e,f,g,h);
            break;
            
            case 5:
            printf("Enter the weight in Ounces=");
            scanf("%f",&c);
            d=c*28350;                //milligram//
            e=c*28.35;             //gram//
            f=c/35.274;          //kilogram//
            g=c/35274;               //tons//
            h=c/16;              //Pound//
            printf("%f Milli Grams\n %f Grams \n %f kilogram\n %f Tons\n %f Pounds",d,e,f,g,h);
            break;
            
             case 6:
            printf("Enter the weight in Pounds=");
            scanf("%f",&c);
            d=c*453600;                //milligram//
            e=c*453.6;             //gram//
            f=c/2.205;          //kilogram//
            g=c/2205;               //tons//
            h=c*16;              //ounces//
            printf("%f Milli Grams\n %f Grams \n %f kilogram\n %f Tons\n %f Ounces",d,e,f,g,h);
            break;
            
            default:
            printf("Invaild input");
            break;
            
        }
        case 3:
        printf("Enter the temperature in \n1.Celsius\n2.Fahrenheit\n3.Kelvin\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1:
            printf("Enter the Temperature in Celsius =");
            scanf("%f",&c);
            d=(c*9/5)+32;                  //Fahrenheit//
            e=c+273.15;                      //kelvin//
            printf("%f Fahrenheit\n %f Kelvin",d,e);
            break;
            
            case 2:
            printf("Enter the Temperature in Fahrenheit =");
            scanf("%f",&c);
            d=(c-32)*5/9;                  //Celsius//
            e=d+273.15;                      //kelvin//
            printf("%f Fahrenheit\n %f Kelvin",d,e);
            break;
            
             case 3:
            printf("Enter the Temperature in Kelvin =");
            scanf("%f",&c);
            d=(c-273.15);                  //Celsius//
            e=(d*9/5)+32;                      //Fahrenheit//
            printf("%f Fahrenheit\n %f Celsius",e,d);
            break;
            
            default:
            printf("Invaild input");
            break;
        }
        case 4:
        printf("Enter the angle in \n1.Gradian \n2.Degree \n3.Radian\n");
        scanf("%d",&b);
        switch(b)
        {
            case 1:
            printf("Enter the angle in Grade=");
            scanf("%f",&c);
            d=c*180/200;              //degree//
            e=c*3.14159/200;             //Radian//
            printf("%f Degrees\n %f Radian",d,e);
            break;
            
            case 2:
            printf("Enter the angle in Degrees=");
            scanf("%f",&c);
            d=c*200/180;              //Gradian//
            e=c*3.14159/180;             //Radian//
            printf("%f Gradian\n %f Radian",d,e);
            break;
            
            case 3:
            printf("Enter the angle in Radian=");
            scanf("%f",&c);
            d=c*200/3.14159;              //Gradian//
            e=c*180/3.14159;             //Degree//
            printf("%f Gradian\n %f Degree",d,e);
            break;
            
            default:
            printf("Invaild input");
            break;
        }
        default:
        printf("Invaild input");
        break;
    }
}
