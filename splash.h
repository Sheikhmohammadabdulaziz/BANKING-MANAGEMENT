

 void splash_screen(void)

{

           printf   ("                       ######     #    #     # #    #      #       ######    ###   \n");
           printf   ("                       #     #   # #   ##    # #   #       #    #  #     #  #   #  \n");
           printf   ("                       #     #  #   #  # #   # #  #        #    #        # #     # \n");
           printf   ("                       ######  ####### #  #  # ####        ######  ######  #     # \n");
           printf   ("                       #     # #     # #   # # #   #            #  #        #   #  \n");
           printf   ("                       ######  #     # #    ## #    #           #  #######   ###   \n");
           printf   ("\n\n");


           printf (  "                         #    # ###### #       ####   ####  #    # ######          \n");
           printf (  "                         #    # #      #      #    # #    # ##  ## #               \n");
           printf (  "                         #  # # #####  #      #      #    # # ## # #####           \n");
           printf (  "                         ##  ## #      #      #      #    # #    # #               \n");
           printf (  "                         #    # ###### ######  ####   ####  #    # ######          \n");
           printf ("\n\n");
           printf("\t<INTRODUCING BANK 420, THE ULTIMATE MANAGEMENT SOFTWARE FOR STREAMLINED OPERATIONS AND UNMATCHED PERFORMANCE>");


}
void delay(int number_of_seconds)

   {
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);


   }


