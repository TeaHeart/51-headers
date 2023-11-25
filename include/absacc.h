#ifndef ABSACC_H
#define ABSACC_H

#define DBYTE ((unsigned char volatile __data  *) 0)
#define XBYTE ((unsigned char volatile __xdata *) 0)
#define PBYTE ((unsigned char volatile __pdata *) 0)
#define CBYTE ((unsigned char volatile __code  *) 0)

#define DWORD ((unsigned int volatile  __data  *) 0)
#define XWORD ((unsigned int volatile  __xdata *) 0)
#define PWORD ((unsigned int volatile  __pdata *) 0)
#define CWORD ((unsigned int volatile  __code  *) 0)

#endif //ABSACC_H
