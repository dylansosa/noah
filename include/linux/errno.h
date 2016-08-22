#ifndef NOAH_LINUX_ERRNO_H
#define NOAH_LINUX_ERRNO_H

#define L_EPERM           1
#define L_ENOENT          2
#define L_ESRCH           3
#define L_EINTR           4
#define L_EIO             5
#define L_ENXIO           6
#define L_E2BIG           7
#define L_ENOEXEC         8
#define L_EBADF           9
#define L_ECHILD          10
#define L_EAGAIN          11
#define L_ENOMEM          12
#define L_EACCES          13
#define L_EFAULT          14
#define L_ENOTBLK         15
#define L_EBUSY           16
#define L_EEXIST          17
#define L_EXDEV           18
#define L_ENODEV          19
#define L_ENOTDIR         20
#define L_EISDIR          21
#define L_EINVAL          22
#define L_ENFILE          23
#define L_EMFILE          24
#define L_ENOTTY          25
#define L_ETXTBSY         26
#define L_EFBIG           27
#define L_ENOSPC          28
#define L_ESPIPE          29
#define L_EROFS           30
#define L_EMLINK          31
#define L_EPIPE           32
#define L_EDOM            33
#define L_ERANGE          34
#define L_EDEADLK         35
#define L_ENAMETOOLONG    36
#define L_ENOLCK          37
#define L_ENOSYS          38
#define L_ENOTEMPTY       39
#define L_ELOOP           40
#define L_EWOULDBLOCK     L_EAGAIN
#define L_ENOMSG          42
#define L_EIDRM           43
#define L_ECHRNG          44
#define L_EL2NSYNC        45
#define L_EL3HLT          46
#define L_EL3RST          47
#define L_ELNRNG          48
#define L_EUNATCH         49
#define L_ENOCSI          50
#define L_EL2HLT          51
#define L_EBADE           52
#define L_EBADR           53
#define L_EXFULL          54
#define L_ENOANO          55
#define L_EBADRQC         56
#define L_EBADSLT         57
#define L_EDEADLOCK       L_EDEADLK
#define L_EBFONT          59
#define L_ENOSTR          60
#define L_ENODATA         61
#define L_ETIME           62
#define L_ENOSR           63
#define L_ENONET          64
#define L_ENOPKG          65
#define L_EREMOTE         66
#define L_ENOLINK         67
#define L_EADV            68
#define L_ESRMNT          69
#define L_ECOMM           70
#define L_EPROTO          71
#define L_EMULTIHOP       72
#define L_EDOTDOT         73
#define L_EBADMSG         74
#define L_EOVERFLOW       75
#define L_ENOTUNIQ        76
#define L_EBADFD          77
#define L_EREMCHG         78
#define L_ELIBACC         79
#define L_ELIBBAD         80
#define L_ELIBSCN         81
#define L_ELIBMAX         82
#define L_ELIBEXEC        83
#define L_EILSEQ          84
#define L_ERESTART        85
#define L_ESTRPIPE        86
#define L_EUSERS          87
#define L_ENOTSOCK        88
#define L_EDESTADDRREQ    89
#define L_EMSGSIZE        90
#define L_EPROTOTYPE      91
#define L_ENOPROTOOPT     92
#define L_EPROTONOSUPPORT 93
#define L_ESOCKTNOSUPPORT 94
#define L_EOPNOTSUPP      95
#define L_ENOTSUP         L_EOPNOTSUPP
#define L_EPFNOSUPPORT    96
#define L_EAFNOSUPPORT    97
#define L_EADDRINUSE      98
#define L_EADDRNOTAVAIL   99
#define L_ENETDOWN        100
#define L_ENETUNREACH     101
#define L_ENETRESET       102
#define L_ECONNABORTED    103
#define L_ECONNRESET      104
#define L_ENOBUFS         105
#define L_EISCONN         106
#define L_ENOTCONN        107
#define L_ESHUTDOWN       108
#define L_ETOOMANYREFS    109
#define L_ETIMEDOUT       110
#define L_ECONNREFUSED    111
#define L_EHOSTDOWN       112
#define L_EHOSTUNREACH    113
#define L_EALREADY        114
#define L_EINPROGRESS     115
#define L_ESTALE          116
#define L_EUCLEAN         117
#define L_ENOTNAM         118
#define L_ENAVAIL         119
#define L_EISNAM          120
#define L_EREMOTEIO       121
#define L_EDQUOT          122
#define L_ENOMEDIUM       123
#define L_EMEDIUMTYPE     124
#define L_ECANCELED       125
#define L_ENOKEY          126
#define L_EKEYEXPIRED     127
#define L_EKEYREVOKED     128
#define L_EKEYREJECTED    129
#define L_EOWNERDEAD      130
#define L_ENOTRECOVERABLE 131
#define L_ERFKILL         132
#define L_EHWPOISON       133

#endif