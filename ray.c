/*Ray Tracing Simulation*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

/* Function Prototypes*/
/** Source Functions **/
//double raya(x,y,z,Emag,n);
//double rayb(x,y,z,Emag,n);


/** End Source Functions **/


/* End Function Prototypes*/


/* Main Function */
int main() {
  /* Variable Declarations*/
  double x,y,z,t,Emag; // distance variables:x,y,z
  char menu; //menu selection
  double l_max=239.0, h_max=231.0, w_max=239.0; //Chamber parameters
  int T_max=100; //maximum periods to run the simulation
  double dmat=20.3; //material thickness (default 8"=20.3cm)
  double ds=40; //source antenna distance from source wall (40 cm default)
  double dt, dr; //path length, AUT distance from receiving wall
  double D=15; //Quiet Zone Diameter(15 cm default)
  double lambda=3.0; //wavelength (3 cm by default = 10 GHz);
  double k=2*M_PI/lambda;
  double f=(3*10^8)/lambda;
  double w=2*M_PI/f;
  double T=1/f;
  int n= 2*D/lambda;
  double efield[T_max][n][n][n];//efield[Time][y][z][Emagnitude]

  /* Main Menu*/
 MAINMENU: do {
    system("clear");
    printf("Ray Tracing Anechoic Chamber Simulation\n");
    printf("Main Menu\n");
    printf("1) Set Parameters\n");
    printf("2) Run Simulation\n");
    printf("3) Output Simulation Results\n");
    printf("x) Exit\n");
    printf("Command: ");
    menu = getchar();
  
    switch(menu) {
    case '1':
	//Goto Set Paramaters
	break; //end case '1'
    case '2':
      goto SIMULATION;//Goto Simulation Menu
      break;
    case '3':
      //Goto Output Menu
      break;
    case 'x' || 'X':
      goto EXIT;//Goto End of program
      break;    
    } //End of switch MAINMENU
  /* End Main Menu, except for while statement*/

  /* MENUS */
    
  /* PARAMETERS*/

  /* END PARAMETERS */
  
  /* SIMULATION */
    /* Set OVERALL VALUES */
  SIMULATION: printf("Beginning Simulation\n");
    dr=dmat+2*lambda+D/2;
    dt=l_max-ds-dr;
    /* Print Values used*/
    printf("ds=%f\n",ds);

    goto EXIT;

  /* END OF SIMULATION*/
  } while (menu != 'x'|| menu != 'X');//End While Loop
 EXIT:printf("\nGoodbye!\n");
  return 0; //END OF MAIN PROGRAM
} //End of int main()
/*End Main Program*/
  
/* Function Definitions */


/* End Function Definitions */
