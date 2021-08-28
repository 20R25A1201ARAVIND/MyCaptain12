void welcome()
{
                 system("color 4");
                 int i,y;
                  locate(26,5);
                  printf("           *** HELLO! ***");
                  locate(27,7);
                  printf("__*****************************__");
                  locate(27,9);
                  printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,2,2,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,3);
                  locate(27,11);
                  printf(" %c%c%c__WELCOME TO CRICKET SCORES__%c%c%c",2,3,2,2,3,2);
                  locate(27,13);
                  printf("  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3,3,3,3,3,3,2,2,3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,3);
                  locate(27,15);
                  printf("__*****************************__");
                  locate(27,17);
                  Sleep(550);
                  locate(27,19);
                  Sleep(250);
                  locate(27,21);
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
                  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_BLUE );
                  locate(27,23);
                  for(y=35;y<=58;y++)
                  {
                    {

                      locate(27,y);
                      Sleep(200);
                    }
                  }
                  printf("\n");

system("color ff");
            }





