/*
    l0l - The Exploit Development Kit
    Authors:roissy
    Greetz:B3mB4m
*/

do{
    string scmd, controller;
    char *str2, *str3;

    rlutil::setColor(9);
    cout << "l0l";
    rlutil::setColor(8);
    cout << ":";
    // Set White Color
    rlutil::setColor(7);
    cout << "shellcode(";
    // Set Red Color
    rlutil::setColor(12);
    cout << usetxt;
    // Set White Color
    rlutil::setColor(7);
    cout << ")";
    rlutil::setColor(9);
    printf(" > ");
    // Set White Color
    rlutil::setColor(7);

    getline( cin, scmd );
    //char *usecmd = &scmd[0u];
    //char *usecmd2 = &scmd[0u];
    //char *usecmd3 = &scmd[0u];

    char* usecmd = strdup(scmd.c_str());
    char* usecmd2 = strdup(scmd.c_str());
    char* usecmd3 = strdup(scmd.c_str());


    strcpy(usecmd2,usecmd);

    strtok(usecmd2, " ");

    string modulen = str;

    if (cin.eof()) {
        closeApp();
    }

    if (strlen(usecmd) == 0 || usecmd[0] == '\r' || usecmd[0] == '\n');

    // Shellcode Commands

    else if(strcmp(usecmd, "back") == 0){
        goto mainConsole;
    }
    else if(strcmp(usecmd, "help") == 0){
        shellcodeHelp();
    }
    else if (strcmp(usecmd,"exit") == 0){
        closeApp();
    }
    else if(strcmp(usecmd2,"os") == 0){

        // Set White Color
        rlutil::setColor(15);

        str2 =  shorter(usecmd,3);

        if(usecmd[3] == '\0'){
            osCommand();
        }else{
            printf("\n");
            system(str2);
        }
        printf("\n");

    }
    else if(strcmp(usecmd, "clear") == 0){
        clear();
    }
    else if(strcmp(usecmd, "show options") == 0){

        rlutil::setColor(2);
        cout <<
                "\n\tModule options (" << modulen << "):\n\n"
                "\t\tName\t" << "\tDescription" << "\t\tCurrent Setting\n"
                "\t\t----\t" "\t-----------\t" << "\t---------------\n";

       if(opti == "exec"){
            cout <<
                    "\t\tcommand\t" <<  "\tCommand to execute\t" << args1 << "\n\n";
       }
       else if(opti == "download&exec" || opti == "downloadandexecute"){
            cout <<
                    "\t\tlink\t" <<  "\tSource to download exe\t" << args1 << "\n\n";
       }
       else if(opti == "read" || opti == "chmod"){
            cout <<
                    "\t\tfile\t" <<  "\tFile name&path\t\t" << args1 << "\n\n";
       }
       else if(opti == "tcp_bind"){
            cout <<
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args1 << "\n\n";
       }
       else if(opti == "reverse_tcp" || opti == "reverse_tcp2"){
            cout <<
                    "\t\thost\t" <<  "\tConnect HOST\t\t" << args1 << "\n"
                    "\t\tport\t" <<  "\tConnect PORT\t\t" << args2 << "\n\n";
       }
       else if(opti == "messagebox"){
            cout <<
                    "\t\tmessage\t" <<  "\tMessage Box Text\t" << args1 << "\n\n";
       }
       else{
            cout <<
                    "\t\tNo option. Just use generate.\n\n";

       }

    }
    else if(strcmp(usecmd2, "set") == 0){

        str2 = shorter(usecmd2,4);

        if(opti == "exec"){

            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' && str2[7] == ' ' ){
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\ncommand => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "download&exec" || opti == "downloadandexecute"){

            if( str2[0] == 'l' && str2[1] == 'i' && str2[2] == 'n' && str2[3] == 'k' && str2[4] == ' ' ){
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nlink => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "read" || opti == "chmod"){

            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' && str2[4] == ' ' ){
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nfile => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "tcp_bind"){

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nport => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }
        else if(opti == "reverse_tcp" || opti == "reverse_tcp2"){

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' && str2[4] == ' ' ){
                str3 = shorter(str2,5);
                args1 = str3;
                cout << "\nhost => " << str3 << "\n\n";
            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' && str2[4] == ' '){
                str3 = shorter(str2,5);
                args2 = str3;
                cout << "\nport => " << str3 << "\n\n";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "messagebox"){

            if( str2[0] == 'm' && str2[1] == 'e' && str2[2] == 's' && str2[3] == 's' && str2[4] == 'a' && str2[5] == 'g' && str2[6] == 'e' && str2[7] == ' ' ){
                str3 = shorter(str2,8);
                args1 = str3;
                cout << "\nmessage => " << str3 << "\n\n";

            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

       }

    }
    else if(strcmp(usecmd2, "unset") == 0){

        str2 = shorter(usecmd2,6);

        if(opti == "exec"){

            if( str2[0] == 'c' && str2[1] == 'o' && str2[2] == 'm' && str2[3] == 'm' && str2[4] == 'a' && str2[5] == 'n' && str2[6] == 'd' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "download&exec" || opti == "downloadandexecute"){

            if( str2[0] == 'l' && str2[1] == 'i' && str2[2] == 'n' && str2[3] == 'k' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "read" || opti == "chmod"){

            if( str2[0] == 'f' && str2[1] == 'i' && str2[2] == 'l' && str2[3] == 'e' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "tcp_bind"){

            if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }
        }
        else if(opti == "reverse_tcp" || opti == "reverse_tcp2"){

            if( str2[0] == 'h' && str2[1] == 'o' && str2[2] == 's' && str2[3] == 't' ) {
                args1 = "None";
            }
            else if(str2[0] == 'p' && str2[1] == 'o' && str2[2] == 'r' && str2[3] == 't' ){
                args2 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }
        else if(opti == "messagebox"){

            if( str2[0] == 'm' && str2[1] == 'e' && str2[2] == 's' && str2[3] == 's' && str2[4] == 'a' && str2[5] == 'g' && str2[6] == 'e' ){
                args1 = "None";
            }
            else{
                rlutil::setColor(12);
                cout << "This option is not available.\n";
            }

        }

    }
    else if(strcmp(usecmd, "generate") == 0){

        if(sjsj == 1){
            if(args1 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(sjsj, oskaka, opti, args1, args2); }
        }
        else if(sjsj == 2){
            if(args1 == "None" || args2 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(sjsj, oskaka, opti, args1, args2); }
        }
        else if(sjsj == 3){
            if(args1 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(sjsj, oskaka, opti, args1, args2); }
        }
        else if(sjsj == 4){ genshellcode(sjsj, oskaka, opti, args1, args2); }
        else if(sjsj == 5){
            if(args1 == "None" || args2 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
            else{ genshellcode(2, oskaka, opti, args2, args1); }
        }

    }
    else if(strcmp(usecmd2, "output") == 0){

        str2 = shorter(usecmd2,7);
        controller = str2;

        if(str2[0] == '\0'){
            outputCommand();
        }else{

            if(controller == "exe" || controller == "c" || controller == "cpp" || controller == "txt" || controller == "raw" || controller == "py" ){

                if(sjsj == 1){
                    if(args1 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
                    else{

                        if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                            output(sjsj, "exe", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == '\0')
                            output(sjsj, "c", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                            output(sjsj, "cpp", oskaka, opti, args1, args2);
                        else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                            output(sjsj, "txt", oskaka, opti, args1, args2);
                        else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                            output(sjsj, "raw", oskaka, opti, args1, args2);
                        else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                            output(sjsj, "py", oskaka, opti, args1, args2);

                    }

                }
                else if(sjsj == 2){
                    if(args1 == "None" || args2 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
                    else{

                        if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                            output(sjsj, "exe", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == '\0')
                            output(sjsj, "c", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                            output(sjsj, "cpp", oskaka, opti, args1, args2);
                        else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                            output(sjsj, "txt", oskaka, opti, args1, args2);
                        else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                            output(sjsj, "raw", oskaka, opti, args1, args2);
                        else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                            output(sjsj, "py", oskaka, opti, args1, args2);

                    }

                }
                else if(sjsj == 3){
                    if(args1 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
                    else{

                        if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                            output(sjsj, "exe", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == '\0')
                            output(sjsj, "c", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                            output(sjsj, "cpp", oskaka, opti, args1, args2);
                        else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                            output(sjsj, "txt", oskaka, opti, args1, args2);
                        else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                            output(sjsj, "raw", oskaka, opti, args1, args2);
                        else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                            output(sjsj, "py", oskaka, opti, args1, args2);

                     }
                }
                else if(sjsj == 4){

                        if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                            output(sjsj, "exe", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == '\0')
                            output(sjsj, "c", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                            output(sjsj, "cpp", oskaka, opti, args1, args2);
                        else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                            output(sjsj, "txt", oskaka, opti, args1, args2);
                        else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                            output(sjsj, "raw", oskaka, opti, args1, args2);
                        else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                            output(sjsj, "py", oskaka, opti, args1, args2);

                }
                else if(sjsj == 5){
                    if(args1 == "None" || args2 == "None"){ cout << "\nSet option before generate shellcode.\n\n"; }
                    else{

                        if(str2[0] == 'e' && str2[1] == 'x' && str2[2] == 'e' && str2[3] == '\0')
                            output(sjsj, "exe", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == '\0')
                            output(sjsj, "c", oskaka, opti, args1, args2);
                        else if(str2[0] == 'c' && str2[1] == 'p' && str2[2] == 'p' && str2[3] == '\0')
                            output(sjsj, "cpp", oskaka, opti, args1, args2);
                        else if(str2[0] == 't' && str2[1] == 'x' && str2[2] == 't' && str2[3] == '\0')
                            output(sjsj, "txt", oskaka, opti, args1, args2);
                        else if(str2[0] == 'r' && str2[1] == 'a' && str2[2] == 'w' && str2[3] == '\0')
                            output(sjsj, "raw", oskaka, opti, args1, args2);
                        else if(str2[0] == 'p' && str2[1] == 'y' && str2[2] == '\0')
                            output(sjsj, "py", oskaka, opti, args1, args2);

                    }

                }

            }

        }

    }

    else{
        // Set Red Color
        rlutil::setColor(12);
        printf("[-] Unknown command: %s\n", usecmd);
    }

}while(1);
