#ifndef ERROR_H
#define ERROR_H

#define chkerr(expr, fail) { int err = expr; if (err) { fail; return err; } }

#endif
