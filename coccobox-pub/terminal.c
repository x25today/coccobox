/* Output from p2c, the Pascal-to-C translator */
/* p2c: terminal.pas, line 5: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 6: 
 * Warning: Unrecognized character 015 in file [247] */
/* From input file "terminal.pas" */


/*
Fornisco il mio tentativo di illustrare il maniacale funzionamento della porta
seriale di un PC. Per fare questo preferisco seguire un sorgente pascal,
interamente scritto da me :)
*/

#include <p2c/p2c.h>
/* p2c: terminal.pas, line 7: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 8: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 9: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 10: 
 * Warning: Could not find module SCRNSAVR [271] */


#include "scrnsavr.h"
/* p2c: terminal.pas, line 10: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 11: 
 * Warning: Unrecognized character 015 in file [247] */


#define IMAGEDATA_WIDTH  80
/* p2c: terminal.pas, line 12: 
 * Warning: Unrecognized character 015 in file [247] */
#define IMAGEDATA_DEPTH  25
/* p2c: terminal.pas, line 13: 
 * Warning: Unrecognized character 015 in file [247] */
#define IMAGEDATA_LENGTH  2000
/* p2c: terminal.pas, line 14: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 15: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 16: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 17: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 18: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 19: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 20: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 21: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 22: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 23: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 24: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 25: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 25: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 25: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 26: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 27: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 28: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 29: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 29: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 30: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 30: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 31: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 32: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 33: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 34: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 34: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 35: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 35: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 36: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 37: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 38: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 39: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 39: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 39: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 40: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 41: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 42: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 43: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 43: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 44: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 44: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 45: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 46: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 47: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 48: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 48: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 49: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 49: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 50: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 51: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 52: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 53: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 53: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 53: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 54: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 55: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 56: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 57: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 58: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 58: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 58: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 59: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 60: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 61: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 62: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 62: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 63: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 63: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 64: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 65: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 66: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 67: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 67: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 67: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 68: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 69: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 70: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 71: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 72: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 72: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 72: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 73: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 74: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 75: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 76: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 76: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 77: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 77: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 78: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 79: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 80: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 81: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 81: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 82: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 82: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 83: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 84: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 85: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 86: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 86: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 86: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 87: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 88: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 89: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 90: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 90: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 91: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 91: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 92: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 93: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 94: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 95: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 95: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 96: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 96: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 97: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 98: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 99: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 100: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 100: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 100: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 101: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 102: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 103: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 104: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 105: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 105: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 105: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 106: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 107: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 108: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 109: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 109: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 110: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 110: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 111: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 112: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 113: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 114: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 114: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 115: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 115: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 116: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 117: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 118: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 119: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 119: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 119: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 119: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 119: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 119: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 119: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 120: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 121: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 122: 
 * Warning: Unrecognized character 015 in file [247] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 123: Note: Character >= 128 encountered [281] */
/* p2c: terminal.pas, line 1