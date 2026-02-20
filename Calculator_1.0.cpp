#include <iostream>
#include <cmath>
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;

const double PI = 3.14159265358979323846;

int main(){


    cout<<"\n-----------Welcome to the C++ Calculator!-----------"<<"\n";
    Sleep(500);
    
    while(true){
        cout<<"\nEnter the number as per the following list:\n";
        Sleep(1500);
        cout<<"1. Addition\n"
            <<"2. Subtraction\n"
            <<"3. Multiplication\n"
            <<"4. Division\n"
            <<"\n"
            <<"5. Remainder\n"
            <<"6. Factorial\n"
            <<"7. Mod\n"
            <<"\n"
            <<"8. Round\n"
            <<"9. Floor\n"
            <<"10. Ceil\n"
            <<"11. Fractional Part\n"
            <<"\n"
            <<"12. Square\n"
            <<"13. Square Root\n"
            <<"14. Cube\n"
            <<"15. Cube Root\n"
            <<"16. Power\n"
            <<"17. nth root\n"
            <<"\n"
            <<"18. log base 10\n"
            <<"19. log base e\n"
            <<"20. log base b\n"
            <<"\n"
            <<"21. *2^n\n"
            <<"22. *10^n\n"
            <<"23. *e^n\n"
            <<"\n"
            <<"24. sin\n"
            <<"25. cos\n"
            <<"26. tan\n"
            <<"27. csc\n"
            <<"28. sec\n"
            <<"29. cot\n"
            <<"\n"
            <<"30. asin\n"
            <<"31. acos\n"
            <<"32. atan\n"
            <<"33. acsc\n"
            <<"34. asec\n"
            <<"35. acot\n"
            <<"\n"
            <<"0. Exit\n";

        int choice;
        cin>>choice;

        switch(choice) {
            case 0: {
                cout<<"\n----------Exiting the calculator. Goodbye!----------"<<"\n";
                return 0;
            }
            case 1: 
                cout << "Addition\n";
                break;
            case 2:
                cout << "Subtraction\n";
                break;
            case 3:
                cout << "Multiplication\n";
                break;
            case 4:
                cout << "Division\n";
                break;
            case 5:
                cout << "Remainder\n";
                break;
            case 6:
                cout << "Factorial\n";
                break;
            case 7:
                cout << "Mod\n";
                break;
            case 8:
                cout << "Round\n";
                break;
            case 9:
                cout << "Floor\n";
                break;
            case 10:   
                cout << "Ceil\n";
                break;
            case 11:
                cout << "Fractional Part\n";
                break;
            case 12:
                cout << "Square\n";
                break;
            case 13:
                cout << "Square Root\n";
                break;
            case 14:
                cout << "Cube\n";
                break;
            case 15:
                cout << "Cube Root\n";
                break;
            case 16:
                cout << "Power\n";
                break;
            case 17:
                cout << "nth root\n";
                break;
            case 18:
                cout << "log base 10\n";
                break;
            case 19:
                cout << "log base e\n";
                break;
            case 20:
                cout << "log base b\n";
                break;
            case 21:
                cout << "*2^n\n";
                break;
            case 22:
                cout << "*10^n\n";
                break;
            case 23:
                cout << "*e^n\n";
                break;
            case 24:
                cout << "sin\n";
                break;
            case 25:
                cout << "cos\n";
                break;
            case 26:
                cout << "tan\n";
                break;
            case 27:
                cout << "csc\n";
                break;
            case 28:
                cout << "sec\n";
                break;
            case 29:
                cout << "cot\n";
                break;
            case 30:
                cout << "asin\n";
                break;
            case 31:
                cout << "acos\n";
                break;
            case 32:
                cout << "atan\n";
                break;
            case 33:
                cout << "acsc\n";
                break;
            case 34:
                cout << "asec\n";
                break;
            case 35:
                cout << "acot\n";
                break;
        }

        cout<<"Enter the number: ";
        double n1;
        cin>>n1;

        switch(choice) {
            case 1: {
                cout<<"Enter the second number: ";
                double n2;
                cin>>n2;
                cout<<n1<<" + "<<n2<<" = "<<n1 + n2<<"\n";
                break;
            }
            case 2: {
                cout<<"Enter the second number: ";
                double n2;
                cin>>n2;
                cout<<n1<<" - "<<n2<<" = "<<n1 - n2<<"\n";
                break;
            }
            case 3: {
                cout<<"Enter the second number: ";
                double n2;
                cin>>n2;
                cout<<n1<<" * "<<n2<<" = "<<n1 * n2<<"\n";
                break;
            }
            case 4: {
                cout<<"Enter the second number: ";
                double n2;
                cin>>n2;
                if (n2 != 0) {
                    cout<<n1<<" / "<<n2<<" = "<<n1 / n2<<"\n";
                } else {
                    cout<<"Error: Division by zero is not allowed."<<"\n";
                }
                break;
            }
            case 5: {
                cout<<"Enter the second number: ";
                double n2;
                cin>>n2;
                if(n2 != 0) {
                    cout<<n1<<" = ("<<n2<<")"<<"*"<<"("<<floor(n1/n2)<<")"<<" + "<<n1 - floor(n1/n2) * n2<<"\n";
                } else {
                    cout<<"Error: Division by zero is not allowed."<<"\n";
                }
                break;
            }
            case 6: {
                if(n1!=floor(n1) || n1 < 0) {
                    cout<<"Error: Factorial is only defined for non-negative integers."<<"\n";
                    break;
                }
                else {
                    long double result = 1;
                    for(int i = 1; i <= n1; ++i) {
                        result *= i;
                    }
                    cout<<n1<<"! = "<<result<<"\n";
                }
                break;
            }
            case 7: {
                cout<<"|"<<n1<<"|"<<" = "<<fabs(n1)<<"\n";
                break;
            }
            case 8: {
                cout<<"round("<<n1<<") = "<<round(n1)<<"\n";
                break;
            }
            case 9: {
                cout<<"floor("<<n1<<") = "<<floor(n1)<<"\n";
                break;
            }
            case 10: {
                cout<<"ceil("<<n1<<") = "<<ceil(n1)<<"\n";
                break;
            }
            case 11: {
                cout<<n1<<" = "<<floor(n1)<<" + "<<n1 - floor(n1)<<"\n";
                break;
            }
            case 12: {
                cout<<n1<<"^2 = "<<n1 * n1<<"\n";
                break;
            }
            case 13: {
                if (n1 >= 0) {
                    cout<<"sqrt("<<n1<<") = "<<sqrt(n1)<<"\n";
                } else {
                    cout<<"sqrt("<<n1<<") = "<<sqrt(-n1)<<"i"<<"\n";
                }
                break;
            }
            case 14: {
                cout<<n1<<"^3 = "<<n1 * n1 * n1<<"\n";
                break;
            }
            case 15: {
                cout<<"cbrt("<<n1<<") = "<<cbrt(n1)<<"\n";
                break;
            }
            case 16: {
                cout<<"Enter the exponent: ";
                double n2;
                cin>>n2;
                cout<<n1<<"^"<<n2<<" = "<<pow(n1, n2)<<"\n";
                break;
            }
            case 17: {
                cout<<"Enter the root degree: ";
                double n2;
                cin>>n2;
                if (n2 != 0) {
                    cout<<"("<<n2<<")th root of "<<n1<<" = "<<pow(n1, 1.0 / n2)<<"\n";
                } else {
                    cout<<"Error: Root degree cannot be zero."<<"\n";
                }
                break;
            }
            case 18: {
                if (n1 > 0) {
                    cout<<"log10("<<n1<<") = "<<log10(n1)<<"\n";
                } else {
                    cout<<"Error: Logarithm is not defined for non-positive numbers."<<"\n";
                }
                break;
            }
            case 19: {
                if (n1 > 0) {
                    cout<<"ln("<<n1<<") = "<<log(n1)<<"\n";
                } else {
                    cout<<"Error: Logarithm is not defined for non-positive numbers."<<"\n";
                }
                break;
            }
            case 20: {
                cout<<"Enter the base: ";
                double n2;
                cin>>n2;
                if (n1 > 0 && n2 > 0 && n2 != 1) {
                    cout<<"log"<<n2<<"("<<n1<<") = "<<log(n1) / log(n2)<<"\n";
                } else {
                    cout<<"Error: Logarithm is not defined for non-positive numbers, and base cannot be non-positive or 1."<<"\n";
                }
                break;
            }
            case 21: {
                cout<<"Enter n: ";
                double n2;
                cin>>n2;
                cout<<n1<<" * 2^"<<n2<<" = "<<n1 * pow(2, n2)<<"\n";
                break;
            }
            case 22: {
                cout<<"Enter n: ";
                double n2;
                cin>>n2;
                cout<<n1<<" * 10^"<<n2<<" = "<<n1 * pow(10, n2)<<"\n";
                break;
            }
            case 23: {
                cout<<"Enter n: ";
                double n2;
                cin>>n2;
                cout<<n1<<" * e^"<<n2<<" = "<<n1 * exp(n2)<<"\n";
                break;
            }
            case 24: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        n1 = n1 * PI / 180.0;
                        cout<<"sin("<<n1 * 180.0 / PI<<" deg) = "<<sin(n1)<<"\n";
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        cout<<"sin("<<n1<<" rad) = "<<sin(n1)<<"\n";
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 25: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        n1 = n1 * PI / 180.0;
                        cout<<"cos("<<n1 * 180.0 / PI<<" deg) = "<<cos(n1)<<"\n";
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        cout<<"cos("<<n1<<" rad) = "<<cos(n1)<<"\n";
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 26: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        n1 = n1 * PI / 180.0;
                        cout<<"tan("<<n1 * 180.0 / PI<<" deg) = "<<tan(n1)<<"\n";
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        cout<<"tan("<<n1<<" rad) = "<<tan(n1)<<"\n";
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 27: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1:
                        cout<<"Degrees"<<"\n";
                        n1 = n1 * PI / 180.0;
                        if (fabs(sin(n1)) < 1e-12) {
                            cout<<"csc("<<n1 * 180.0 / PI<<" deg) = UNDEFINED"<<"\n";
                            break;
                        }
                        else {
                            cout<<"csc("<<n1 * 180.0 / PI<<" deg) = "<<1/sin(n1)<<"\n";
                        }
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        if (fabs(sin(n1)) < 1e-12) {
                            cout<<"csc("<<n1<<" rad) = UNDEFINED"<<"\n";
                            break;
                        }
                        else {
                            cout<<"csc("<<n1<<" rad) = "<<1/sin(n1)<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 28: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        n1 = n1 * PI / 180.0;
                        if (fabs(cos(n1)) < 1e-12) {
                            cout<<"sec("<<n1 * 180.0 / PI<<" deg) = UNDEFINED"<<"\n";
                            break;
                        }
                        else {
                            cout<<"sec("<<n1 * 180.0 / PI<<" deg) = "<<1/cos(n1)<<"\n";
                        }
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        if (fabs(cos(n1)) < 1e-12) {
                            cout<<"sec("<<n1<<" rad) = UNDEFINED"<<"\n";
                            break;
                        }
                        else {
                            cout<<"sec("<<n1<<" rad) = "<<1/cos(n1)<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 29: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        n1 = n1 * PI / 180.0;
                        if (fabs(tan(n1)) < 1e-12) {
                            cout<<"cot("<<n1 * 180.0 / PI<<" deg) = UNDEFINED"<<"\n";
                            break;
                        }
                        else {
                            cout<<"cot("<<n1 * 180.0 / PI<<" deg) = "<<1/tan(n1)<<"\n";
                        }
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        if (fabs(tan(n1)) < 1e-12) {
                            cout<<"cot("<<n1<<" rad) = UNDEFINED"<<"\n";
                            break;
                        }
                        else {
                            cout<<"cot("<<n1<<" rad) = "<<1/tan(n1)<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 30: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        if (n1 >= -1 && n1 <= 1) {
                            cout<<"asin("<<n1<<") = "<<asin(n1) * 180.0 / PI<<" deg"<<"\n";
                        } else {
                            cout<<"Error: Arcsine is only defined for numbers in the range [-1, 1]."<<"\n";
                        }
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        if (n1 >= -1 && n1 <= 1) {
                            cout<<"asin("<<n1<<") = "<<asin(n1)<<" rad"<<"\n";
                        } else {
                            cout<<"Error: Arcsine is only defined for numbers in the range [-1, 1]."<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 31: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        if (n1 >= -1 && n1 <= 1) {
                            cout<<"acos("<<n1<<") = "<<acos(n1) * 180.0 / PI<<" deg"<<"\n";
                        } else {
                            cout<<"Error: Arccosine is only defined for numbers in the range [-1, 1]."<<"\n";
                        }
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        if (n1 >= -1 && n1 <= 1) {
                            cout<<"acos("<<n1<<") = "<<acos(n1)<<"\n";
                        } else {
                            cout<<"Error: Arccosine is only defined for numbers in the range [-1, 1]."<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 32: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n"
                            <<"atan("<<n1<<") = "<<atan(n1) * 180.0 / PI<<" deg"<<"\n";
                        break;
                    case 2:
                        cout<<"Radians"<<"\n"
                            <<"atan("<<n1<<") = "<<atan(n1)<<" rad"<<"\n";
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 33: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        if (n1 <= -1 || n1 >= 1) {
                            cout<<"acsc("<<n1<<") = "<<asin(1 / n1) * 180.0 / PI<<" deg"<<"\n";
                        } else {
                            cout<<"Error: Arccosecant is not defined for numbers in the range (-1, 1)."<<"\n";
                        }
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        if (n1 <= -1 || n1 >= 1) {
                            cout<<"acsc("<<n1<<") = "<<asin(1 / n1)<<"\n";
                        } else {
                            cout<<"Error: Arccosecant is only defined for numbers in the range (-1, 1)."<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 34: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        if (n1 <= -1 || n1 >= 1) {
                            cout<<"asec("<<n1<<") = "<<acos(1 / n1) * 180.0 / PI<<" deg"<<"\n";
                        } else {
                            cout<<"Error: Arcsecant is not defined for numbers in the range (-1, 1)."<<"\n";
                        }
                        break;
                    case 2:
                        cout<<"Radians"<<"\n";
                        if (n1 <= -1 || n1 >= 1) {
                            cout<<"asec("<<n1<<") = "<<acos(1 / n1)<<" rad"<<"\n";
                        } else {
                            cout<<"Error: Arcsecant is only defined for numbers in the range (-1, 1)."<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            case 35: {
                cout<<"Enter 1 for degrees and 2 for radians: ";
                int angleUnit;
                cin>>angleUnit;
                switch(angleUnit) {
                    case 1: 
                        cout<<"Degrees"<<"\n";
                        if(n1==0) {
                            cout<<"acot("<<n1<<") = 90 deg"<<"\n";
                            break;
                        }
                        else {
                            cout<<"acot("<<n1<<") = "<<atan(1 / n1) * 180.0 / PI<<" deg"<<"\n";
                            break;
                        }
                    case 2:
                        cout<<"Radians"<<"\n";
                        if(n1==0) {
                            cout<<"acot("<<n1<<") = "<<PI/2<<" rad"<<"\n";
                            break;
                        }
                        else {
                            cout<<"acot("<<n1<<") = "<<atan(1 / n1)<<" rad"<<"\n";
                        }
                        break;
                    default:
                        cout<<"Error: Invalid input. Please enter 1 for degrees or 2 for radians."<<"\n";
                        break;
                }
                break;
            }
            default: {
                cout<<"THERE WERE 35 CHOICES! BUT YOU CHOSE A WRONG ONE!\n"
                    <<"Error: Invalid choice. Please select a number from the list."<<"\n";
                break;
            }
        }
        Sleep(2000);
    }
    return 0;
}
