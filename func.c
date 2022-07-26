#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "func.h"
//function that converts from the hexadecimal to binary
 void HexaToBin(char*hexa)
{
  int i=0;
    while(i< strlen(hexa))
    {
        switch(hexa[i])
        {
            case'0':
            strcat(binarynumber,"0000");
            break;
            case '1':
            strcat(binarynumber,"0001");
            break;
            case '2':
            strcat(binarynumber,"0010");
            break;
            case '3':
            strcat(binarynumber,"0011");
            break;
            case '4':
            strcat(binarynumber,"0100");
            break;
            case '5':
            strcat(binarynumber,"0101");
            break;
            case '6':
            strcat(binarynumber,"0110");
            break;
            case '7':
            strcat(binarynumber,"0111");
            break;
            case '8':
            strcat(binarynumber,"1000");
            break;
            case '9':
            strcat(binarynumber,"1001");
            break;
            case 'A':
            case 'a':
            strcat(binarynumber,"1010");
            break;
            case 'B':
            case 'b':
            strcat(binarynumber,"1011");
            break;
            case 'C':
            case 'c':
            strcat(binarynumber,"1100");
            break;
            case 'D':
            case 'd':
            strcat(binarynumber,"1101");
            break;
            case 'E':
            case 'e':
            strcat(binarynumber,"1110");
            break;
            case 'F':
            case 'f':
            strcat(binarynumber,"1111");
            break;
            default:
            printf("this hexa digit doesnt exist");
            }
            i++;
}
}
//Function indicating the presence of secondary bitmap
void Presence_Of_Secondary_Bitmap(char*bin)
{
    if (bin[0]=='0')
    { printf("\n the secondary bitmap is not present!");
      printf("\n"); }
   else { printf("\n the secondary bitmap is present!");
          printf("\n"); }
}

//function indicating the presence of each Data element
void Presence_Of_DE(char*bin)
{
  int j=1;
  Presence_Of_Secondary_Bitmap(bin);
  while(j<= strlen(bin))
    {
        if (bin[j]=='1')
        { printf("\n Data Element %d exist",j+1);
          printf("\t");
          Usage_Of_DE(j+1);
        }
        j++;
    }
}
void Usage_Of_DE (int k)
{
    switch (k)
    {
        case 2:
        printf("\"Primary account number (PAN)\"");
        printf("\n");
        break;
        case 3:
        printf("\"Processing Code\"");
        printf("\n");
        break;
        case 4:
        printf("\"amount transaction\"");
        printf("\n");
        break;
        case 5:
        printf("\"Amount, settlement\"");
        printf("\n");
        break;
        case 6:
        printf("\"Amount, cardholder billing\"");
        printf("\n");
        break;
        case 7:
        printf("\"Transmission date & time\"");
        printf("\n");
        break;
        case 8:
        printf("\"Amount, cardholder billing fee\"");
        printf("\n");
        break;
        case 9:
        printf("\"Conversion rate, settlement\"");
        printf("\n");
        break;
        case 10:
        printf("\"Conversion rate, cardholder billing\"");
        printf("\n");
        break;
        case 11:
        printf("\"System trace audit number (STAN)\"");
        printf("\n");
        break;
        case 12:
        printf("\"Local transaction time (hhmmss)\"");
        printf("\n");
        break;
        case 13:
        printf("\"Local transaction date (MMDD)\"");
        printf("\n");
        break;
        case 14:
        printf("\"Expiration date (YYMM)\"");
        printf("\n");
        break;
        case 15:
        printf("\"Settlement date\"");
        printf("\n");
        break;
        case 16:
        printf("\"Currency conversion date\"");
        printf("\n");
        break;
        case 17:
        printf("\"Capture date\"");
        printf("\n");
        break;
        case 18:
        printf("\"Merchant type, or merchant category code\"");
        printf("\n");
        break;
        case 19:
        printf("\"Acquiring institution (country code)\"");
        printf("\n");
        break;
        case 20:
        printf("\"PAN extended (country code)\"");
        printf("\n");
        break;
        case 21:
        printf("\"Forwarding institution (country code)\"");
        printf("\n");
        break;
        case 22:
        printf("\"Point of service entry mode\"");
        printf("\n");
        break;
        case 23:
        printf("\"Application PAN sequence number\"");
        printf("\n");
        break;
        case 24:
        printf("\"Function code (ISO 8583:1993), or network international identifier (NII)\"");
        printf("\n");
        break;
        case 25:
        printf("\"Point of service condition code\"");
        printf("\n");
        break;
        case 26:
        printf("\"Point of service capture code\"");
        printf("\n");
        break;
        case 27:
        printf("\"Authorizing identification response length\"");
        printf("\n");
        break;
        case 28:
        printf("\" Amount, transaction fee\"");
        printf("\n");
        break;
        case 29:
        printf("\"Amount, settlement fee\"");
        printf("\n");
        break;
        case 30:
        printf("\"Amount, transaction processing fee\"");
        printf("\n");
        break;
        case 31:
        printf("\"Amount, settlement processing fee\"");
        printf("\n");
        break;
        case 32:
        printf("\"Acquiring institution identification code\"");
        printf("\n");
        break;
        case 33:
        printf("\"Forwarding institution identification code\"");
        printf("\n");
        break;
        case 34:
        printf("\"Primary account number, extended\"");
        printf("\n");
        break;
        case 35:
        printf("\"Track 2 data\"");
        printf("\n");
        break;
        case 36:
        printf("\"Track 3 data\"");
        printf("\n");
        break;
        case 37:
        printf("\"Retrieval reference number\"");
        printf("\n");
        break;
        case 38:
        printf("\"Authorization identification response\"");
        printf("\n");
        break;
        case 39:
        printf("\"Response code\"");
        printf("\n");
        break;
        case 40:
        printf("\"Service restriction code\"");
        printf("\n");
        break;
        case 41:
        printf("\"Card acceptor terminal identification\"");
        printf("\n");
        break;
        case 42:
        printf("\"Card acceptor identification code\"");
        printf("\n");
        break;
        case 43:
        printf("\"Card acceptor name/location (1–23 street address, –36 city, –38 state, 39–40 country)\"");
        printf("\n");
        break;
        case 44:
        printf("\"Additional response data\"");
        printf("\n");
        break;
        case 45:
        printf("\"Track 1 data\"");
        printf("\n");
        break;
        case 46:
        printf("\"Additional data (ISO)\"");
        printf("\n");
        break;
        case 47:
        printf("\"Additional data (national)\"");
        printf("\n");
        break;
        case 48:
        printf("\"Additional data (private)\"");
        printf("\n");
        break;
        case 49:
        printf("\"Currency code, transaction\"");
        printf("\n");
        break;
        case 50:
        printf("\"Currency code, settlement\"");
        printf("\n");
        break;
        case 51:
        printf("\"Currency code, cardholder billing\"");
        printf("\n");
        break;
        case 52:
        printf("\"Personal identification number data\"");
        printf("\n");
        break;
        case 53:
        printf("\"Security related control information\"");
        printf("\n");
        break;
        case 54:
        printf("\"Additional amounts\"");
        printf("\n");
        break;
        case 55:
        printf("\"ICC data – EMV having multiple tags\"");
        printf("\n");
        break;
        case 56:
        printf("\"Reserved (ISO)\"");
        printf("\n");
        break;
        case 57:
        printf("\"Reserved (national)\"");
        printf("\n");
        break;
        case 58:
        printf("\"Reserved (national)\"");
        printf("\n");
        break;
        case 59:
        printf("\"Reserved (national)\"");
        printf("\n");
        break;
        case 60:
        printf("\"Reserved (national)\"");
        printf("\n");
        break;
        case 61:
        printf("\"Reserved (private)\"");
        printf("\n");
        break;
        case 62:
        printf("\"Reserved (private)\"");
        printf("\n");
        break;
        case 63:
        printf("\"Reserved (private)\"");
        printf("\n");
        break;
        case 64:
        printf("\"Message authentication code (MAC)\"");
        printf("\n");
        break;
        case 65:
        printf("\"Extended bitmap indicator\"");
        printf("\n");
        break;
        case 66:
        printf("\"Settlement code\"");
        printf("\n");
        break;
        case 67:
        printf("\"Extended payment code\"");
        printf("\n");
        break;
        case 68:
        printf("\"Receiving institution country code\"");
        printf("\n");
        break;
        case 69:
        printf("\"Settlement institution country code\"");
        printf("\n");
        break;
        case 70:
        printf("\"Network management information code\"");
        printf("\n");
        break;
        case 71:
        printf("\"Message number\"");
        printf("\n");
        break;
        case 72:
        printf("\"Last message's number\"");
        printf("\n");
        break;
        case 73:
        printf("\"Action date (YYMMDD)\"");
        printf("\n");
        break;
        case 74:
        printf("\"Number of credits\"");
        printf("\n");
        break;
        case 75:
        printf("\"Credits, reversal number\"");
        printf("\n");
        break;
        case 76:
        printf("\"Number of debits\"");
        printf("\n");
        break;
        case 77:
        printf("\"Debits, reversal number\"");
        printf("\n");
        break;
        case 78:
        printf("\"Transfer number\"");
        printf("\n");
        break;
        case 79:
        printf("\"Transfer, reversal number\"");
        printf("\n");
        break;
        case 80:
        printf("\"Number of inquiries\"");
        printf("\n");
        break;
        case 81:
        printf("\"Number of authorizations\"");
        printf("\n");
        break;
        case 82:
        printf("\"Credits, processing fee amount\"");
        printf("\n");
        break;
        case 83:
        printf("\"Credits, transaction fee amount\"");
        printf("\n");
        break;
        case 84:
        printf("\"Debits, processing fee amount\"");
        printf("\n");
        break;
        case 85:
        printf("\"Debits, transaction fee amount\"");
        printf("\n");
        break;
        case 86:
        printf("\"Total amount of credits\"");
        printf("\n");
        break;
        case 87:
        printf("\"Credits, reversal amount\"");
        printf("\n");
        break;
        case 88:
        printf("\"Total amount of debits\"");
        printf("\n");
        break;
        case 89:
        printf("\"Debits, reversal amount\"");
        printf("\n");
        break;
        case 90:
        printf("\"Original data elements\"");
        printf("\n");
        break;
        case 91:
        printf("\"File update code\"");
        printf("\n");
        break;
        case 92:
        printf("\"File security code\"");
        printf("\n");
        break;
        case 93:
        printf("\"Response indicator\"");
        printf("\n");
        break;
        case 94:
        printf("\"Service indicator\"");
        printf("\n");
        break;
        case 95:
        printf("\"Replacement amounts\"");
        printf("\n");
        break;
        case 96:
        printf("\"Message security code\"");
        printf("\n");
        break;
        case 97:
        printf("\"Net settlement amount\"");
        printf("\n");
        break;
        case 98:
        printf("\"Payee\"");
        printf("\n");
        break;
        case 99:
        printf("\"Settlement institution identification code\"");
        printf("\n");
        break;
        case 100:
        printf("\"Receiving institution identification code\"");
        printf("\n");
        break;
        case 101:
        printf("\"File name\"");
        printf("\n");
        break;
        case 102:
        printf("\"Account identification 1\"");
        printf("\n");
        break;
        case 103:
        printf("\"Account identification 2\"");
        printf("\n");
        break;
        case 104:
        printf("\"Transaction description\"");
        printf("\n");
        break;
        case 105:
        printf("\"Reserved for ISO use\"");
        printf("\n");
        break;
        case 106:
        printf("\"Reserved for ISO use\"");
        printf("\n");
        break;
        case 107:
        printf("\"Reserved for ISO use\"");
        printf("\n");
        break;
        case 108:
        printf("\"Reserved for ISO use\"");
        printf("\n");
        break;
        case 109:
        printf("\"Reserved for ISO use\"");
        printf("\n");
        break;
        case 110:
        printf("\"Reserved for ISO use\"");
        printf("\n");
        break;
        case 111:
        printf("\"Reserved for ISO use\"");
        printf("\n");
        break;
        case 112:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
         case 113:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
        case 114:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
        case 115:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
        case 116:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
        case 117:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
        case 118:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
        case 119:
        printf("\"Reserved for national use\"");
        printf("\n");
        break;
        case 120:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
        case 121:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
         case 122:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
        case 123:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
        case 124:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
        case 125:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
        case 126:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
        case 127:
        printf("\"Reserved for private use\"");
        printf("\n");
        break;
        case 128:
        printf("\"Message authentication code\"");
        printf("\n");
        break;
    }
}

