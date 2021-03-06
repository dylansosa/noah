#include <stdint.h>

#define SYSCALLS                                \
  SYSCALL(0, read)                              \
  SYSCALL(1, write)                             \
  SYSCALL(2, open)                              \
  SYSCALL(3, close)                             \
  SYSCALL(4, stat)                              \
  SYSCALL(5, fstat)                             \
  SYSCALL(6, lstat)                             \
  SYSCALL(7, poll)                              \
  SYSCALL(8, lseek)                             \
  SYSCALL(9, mmap)                              \
  SYSCALL(10, mprotect)                         \
  SYSCALL(11, munmap)                           \
  SYSCALL(12, brk)                              \
  SYSCALL(13, rt_sigaction)                     \
  SYSCALL(14, rt_sigprocmask)                   \
  SYSCALL(15, rt_sigreturn)                     \
  SYSCALL(16, ioctl)                            \
  SYSCALL(17, pread64)                          \
  SYSCALL(18, pwrite64)                         \
  SYSCALL(19, readv)                            \
  SYSCALL(20, writev)                           \
  SYSCALL(21, access)                           \
  SYSCALL(22, pipe)                             \
  SYSCALL(23, select)                           \
  SYSCALL(24, sched_yield)                      \
  SYSCALL(25, mremap)                           \
  SYSCALL(26, msync)                            \
  SYSCALL(27, unimplemented)                    \
  SYSCALL(28, madvise)                          \
  SYSCALL(29, shmget)                           \
  SYSCALL(30, shmat)                            \
  SYSCALL(31, shmctl)                           \
  SYSCALL(32, dup)                              \
  SYSCALL(33, dup2)                             \
  SYSCALL(34, unimplemented)                    \
  SYSCALL(35, nanosleep)                        \
  SYSCALL(36, unimplemented)                    \
  SYSCALL(37, alarm)                            \
  SYSCALL(38, unimplemented)                    \
  SYSCALL(39, getpid)                           \
  SYSCALL(40, unimplemented)                    \
  SYSCALL(41, socket)                           \
  SYSCALL(42, connect)                          \
  SYSCALL(43, accept)                           \
  SYSCALL(44, sendto)                           \
  SYSCALL(45, recvfrom)                         \
  SYSCALL(46, sendmsg)                          \
  SYSCALL(47, recvmsg)                          \
  SYSCALL(48, shutdown)                         \
  SYSCALL(49, bind)                             \
  SYSCALL(50, listen)                           \
  SYSCALL(51, getsockname)                      \
  SYSCALL(52, getpeername)                      \
  SYSCALL(53, socketpair)                       \
  SYSCALL(54, setsockopt)                       \
  SYSCALL(55, getsockopt)                       \
  SYSCALL(56, clone)                            \
  SYSCALL(57, fork)                             \
  SYSCALL(58, vfork)                            \
  SYSCALL(59, execve)                           \
  SYSCALL(60, exit)                             \
  SYSCALL(61, wait4)                            \
  SYSCALL(62, kill)                             \
  SYSCALL(63, uname)                            \
  SYSCALL(64, semget)                           \
  SYSCALL(65, semop)                            \
  SYSCALL(66, semctl)                           \
  SYSCALL(67, unimplemented)                    \
  SYSCALL(68, unimplemented)                    \
  SYSCALL(69, unimplemented)                    \
  SYSCALL(70, unimplemented)                    \
  SYSCALL(71, unimplemented)                    \
  SYSCALL(72, fcntl)                            \
  SYSCALL(73, flock)                            \
  SYSCALL(74, fsync)                            \
  SYSCALL(75, fdatasync)                        \
  SYSCALL(76, unimplemented)                    \
  SYSCALL(77, ftruncate)                        \
  SYSCALL(78, getdents)                         \
  SYSCALL(79, getcwd)                           \
  SYSCALL(80, chdir)                            \
  SYSCALL(81, fchdir)                           \
  SYSCALL(82, rename)                           \
  SYSCALL(83, mkdir)                            \
  SYSCALL(84, rmdir)                            \
  SYSCALL(85, creat)                            \
  SYSCALL(86, link)                             \
  SYSCALL(87, unlink)                           \
  SYSCALL(88, symlink)                          \
  SYSCALL(89, readlink)                         \
  SYSCALL(90, chmod)                            \
  SYSCALL(91, fchmod)                           \
  SYSCALL(92, chown)                            \
  SYSCALL(93, fchown)                           \
  SYSCALL(94, lchown)                           \
  SYSCALL(95, umask)                            \
  SYSCALL(96, gettimeofday)                     \
  SYSCALL(97, getrlimit)                        \
  SYSCALL(98, getrusage)                        \
  SYSCALL(99, sysinfo)                          \
  SYSCALL(100, unimplemented)                   \
  SYSCALL(101, ptrace)                          \
  SYSCALL(102, getuid)                          \
  SYSCALL(103, unimplemented)                   \
  SYSCALL(104, getgid)                          \
  SYSCALL(105, setuid)                          \
  SYSCALL(106, setgid)                          \
  SYSCALL(107, geteuid)                         \
  SYSCALL(108, getegid)                         \
  SYSCALL(109, setpgid)                         \
  SYSCALL(110, getppid)                         \
  SYSCALL(111, getpgrp)                         \
  SYSCALL(112, setsid)                          \
  SYSCALL(113, unimplemented)                   \
  SYSCALL(114, unimplemented)                   \
  SYSCALL(115, getgroups)                       \
  SYSCALL(116, setgroups)                       \
  SYSCALL(117, setresuid)                       \
  SYSCALL(118, getresuid)                       \
  SYSCALL(119, setresgid)                       \
  SYSCALL(120, getresgid)                       \
  SYSCALL(121, getpgid)                         \
  SYSCALL(122, unimplemented)                   \
  SYSCALL(123, unimplemented)                   \
  SYSCALL(124, getsid)                          \
  SYSCALL(125, capget)                          \
  SYSCALL(126, unimplemented)                   \
  SYSCALL(127, rt_sigpending)                   \
  SYSCALL(128, unimplemented)                   \
  SYSCALL(129, unimplemented)                   \
  SYSCALL(130, rt_sigsuspend)                   \
  SYSCALL(131, sigaltstack)                     \
  SYSCALL(132, utime)                           \
  SYSCALL(133, unimplemented)                   \
  SYSCALL(134, uselib)                          \
  SYSCALL(135, unimplemented)                   \
  SYSCALL(136, unimplemented)                   \
  SYSCALL(137, statfs)                          \
  SYSCALL(138, fstatfs)                         \
  SYSCALL(139, unimplemented)                   \
  SYSCALL(140, getpriority)                     \
  SYSCALL(141, setpriority)                     \
  SYSCALL(142, unimplemented)                   \
  SYSCALL(143, unimplemented)                   \
  SYSCALL(144, unimplemented)                   \
  SYSCALL(145, unimplemented)                   \
  SYSCALL(146, unimplemented)                   \
  SYSCALL(147, unimplemented)                   \
  SYSCALL(148, unimplemented)                   \
  SYSCALL(149, mlock)                           \
  SYSCALL(150, munlock)                         \
  SYSCALL(151, unimplemented)                   \
  SYSCALL(152, unimplemented)                   \
  SYSCALL(153, unimplemented)                   \
  SYSCALL(154, unimplemented)                   \
  SYSCALL(155, unimplemented)                   \
  SYSCALL(156, unimplemented)                   \
  SYSCALL(157, prctl)                           \
  SYSCALL(158, arch_prctl)                      \
  SYSCALL(159, unimplemented)                   \
  SYSCALL(160, setrlimit)                       \
  SYSCALL(161, chroot)                          \
  SYSCALL(162, sync)                            \
  SYSCALL(163, unimplemented)                   \
  SYSCALL(164, unimplemented)                   \
  SYSCALL(165, unimplemented)                   \
  SYSCALL(166, unimplemented)                   \
  SYSCALL(167, unimplemented)                   \
  SYSCALL(168, unimplemented)                   \
  SYSCALL(169, unimplemented)                   \
  SYSCALL(170, unimplemented)                   \
  SYSCALL(171, unimplemented)                   \
  SYSCALL(172, unimplemented)                   \
  SYSCALL(173, unimplemented)                   \
  SYSCALL(174, unimplemented)                   \
  SYSCALL(175, unimplemented)                   \
  SYSCALL(176, unimplemented)                   \
  SYSCALL(177, unimplemented)                   \
  SYSCALL(178, unimplemented)                   \
  SYSCALL(179, unimplemented)                   \
  SYSCALL(180, nfsservctl)                      \
  SYSCALL(181, getpmsg)                         \
  SYSCALL(182, putpmsg)                         \
  SYSCALL(183, afs_syscall)                     \
  SYSCALL(184, tuxcall)                         \
  SYSCALL(185, security)                        \
  SYSCALL(186, gettid)                          \
  SYSCALL(187, unimplemented)                   \
  SYSCALL(188, setxattr)                        \
  SYSCALL(189, unimplemented)                   \
  SYSCALL(190, fsetxattr)                       \
  SYSCALL(191, getxattr)                        \
  SYSCALL(192, unimplemented)                   \
  SYSCALL(193, fgetxattr)                       \
  SYSCALL(194, unimplemented)                   \
  SYSCALL(195, unimplemented)                   \
  SYSCALL(196, flistxattr)                      \
  SYSCALL(197, unimplemented)                   \
  SYSCALL(198, unimplemented)                   \
  SYSCALL(199, unimplemented)                   \
  SYSCALL(200, unimplemented)                   \
  SYSCALL(201, time)                            \
  SYSCALL(202, futex)                           \
  SYSCALL(203, unimplemented)                   \
  SYSCALL(204, sched_getaffinity)               \
  SYSCALL(205, set_thread_area)                 \
  SYSCALL(206, unimplemented)                   \
  SYSCALL(207, unimplemented)                   \
  SYSCALL(208, unimplemented)                   \
  SYSCALL(209, unimplemented)                   \
  SYSCALL(210, unimplemented)                   \
  SYSCALL(211, get_thread_area)                 \
  SYSCALL(212, unimplemented)                   \
  SYSCALL(213, unimplemented)                   \
  SYSCALL(214, epoll_ctl_old)                   \
  SYSCALL(215, epoll_wait_old)                  \
  SYSCALL(216, unimplemented)                   \
  SYSCALL(217, getdents64)                      \
  SYSCALL(218, set_tid_address)                 \
  SYSCALL(219, unimplemented)                   \
  SYSCALL(220, unimplemented)                   \
  SYSCALL(221, fadvise64)                       \
  SYSCALL(222, unimplemented)                   \
  SYSCALL(223, unimplemented)                   \
  SYSCALL(224, unimplemented)                   \
  SYSCALL(225, unimplemented)                   \
  SYSCALL(226, unimplemented)                   \
  SYSCALL(227, unimplemented)                   \
  SYSCALL(228, clock_gettime)                   \
  SYSCALL(229, clock_getres)                    \
  SYSCALL(230, unimplemented)                   \
  SYSCALL(231, exit_group)                      \
  SYSCALL(232, unimplemented)                   \
  SYSCALL(233, unimplemented)                   \
  SYSCALL(234, tgkill)                          \
  SYSCALL(235, utimes)                          \
  SYSCALL(236, vserver)                         \
  SYSCALL(237, unimplemented)                   \
  SYSCALL(238, unimplemented)                   \
  SYSCALL(239, get_mempolicy)                   \
  SYSCALL(240, unimplemented)                   \
  SYSCALL(241, unimplemented)                   \
  SYSCALL(242, unimplemented)                   \
  SYSCALL(243, unimplemented)                   \
  SYSCALL(244, unimplemented)                   \
  SYSCALL(245, unimplemented)                   \
  SYSCALL(246, unimplemented)                   \
  SYSCALL(247, unimplemented)                   \
  SYSCALL(248, unimplemented)                   \
  SYSCALL(249, unimplemented)                   \
  SYSCALL(250, unimplemented)                   \
  SYSCALL(251, unimplemented)                   \
  SYSCALL(252, unimplemented)                   \
  SYSCALL(253, unimplemented)                   \
  SYSCALL(254, unimplemented)                   \
  SYSCALL(255, unimplemented)                   \
  SYSCALL(256, unimplemented)                   \
  SYSCALL(257, openat)                          \
  SYSCALL(258, mkdirat)                         \
  SYSCALL(259, unimplemented)                   \
  SYSCALL(260, fchownat)                        \
  SYSCALL(261, unimplemented)                   \
  SYSCALL(262, newfstatat)                      \
  SYSCALL(263, unlinkat)                        \
  SYSCALL(264, renameat)                        \
  SYSCALL(265, linkat)                          \
  SYSCALL(266, symlinkat)                       \
  SYSCALL(267, readlinkat)                      \
  SYSCALL(268, fchmodat)                        \
  SYSCALL(269, faccessat)                       \
  SYSCALL(270, pselect6)                        \
  SYSCALL(271, unimplemented)                   \
  SYSCALL(272, unimplemented)                   \
  SYSCALL(273, set_robust_list)                 \
  SYSCALL(274, unimplemented)                   \
  SYSCALL(275, unimplemented)                   \
  SYSCALL(276, unimplemented)                   \
  SYSCALL(277, unimplemented)                   \
  SYSCALL(278, unimplemented)                   \
  SYSCALL(279, unimplemented)                   \
  SYSCALL(280, utimensat)                       \
  SYSCALL(281, unimplemented)                   \
  SYSCALL(282, unimplemented)                   \
  SYSCALL(283, unimplemented)                   \
  SYSCALL(284, unimplemented)                   \
  SYSCALL(285, fallocate)                       \
  SYSCALL(286, unimplemented)                   \
  SYSCALL(287, unimplemented)                   \
  SYSCALL(288, unimplemented)                   \
  SYSCALL(289, unimplemented)                   \
  SYSCALL(290, unimplemented)                   \
  SYSCALL(291, unimplemented)                   \
  SYSCALL(292, dup3)                            \
  SYSCALL(293, pipe2)                           \
  SYSCALL(294, unimplemented)                   \
  SYSCALL(295, unimplemented)                   \
  SYSCALL(296, unimplemented)                   \
  SYSCALL(297, unimplemented)                   \
  SYSCALL(298, unimplemented)                   \
  SYSCALL(299, unimplemented)                   \
  SYSCALL(300, unimplemented)                   \
  SYSCALL(301, unimplemented)                   \
  SYSCALL(302, unimplemented)                   \
  SYSCALL(303, unimplemented)                   \
  SYSCALL(304, unimplemented)                   \
  SYSCALL(305, unimplemented)                   \
  SYSCALL(306, unimplemented)                   \
  SYSCALL(307, sendmmsg)                        \
  SYSCALL(308, unimplemented)                   \
  SYSCALL(309, unimplemented)                   \
  SYSCALL(310, unimplemented)                   \
  SYSCALL(311, unimplemented)                   \
  SYSCALL(312, unimplemented)                   \
  SYSCALL(313, unimplemented)                   \
  SYSCALL(314, unimplemented)                   \
  SYSCALL(315, unimplemented)                   \
  SYSCALL(316, unimplemented)                   \
  SYSCALL(317, unimplemented)                   \
  SYSCALL(318, getrandom)                       \
  SYSCALL(319, unimplemented)                   \
  SYSCALL(320, unimplemented)                   \
  SYSCALL(321, unimplemented)                   \
  SYSCALL(322, unimplemented)                   \
  SYSCALL(323, unimplemented)                   \
  SYSCALL(324, unimplemented)                   \
  SYSCALL(325, unimplemented)                   \
  SYSCALL(326, unimplemented)                   \
  SYSCALL(327, unimplemented)                   \
  SYSCALL(328, unimplemented)

#define NR_SYSCALLS 329

typedef uint64_t (*sc_handler_t)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);

extern sc_handler_t sc_handler_table[NR_SYSCALLS];
extern char *sc_name_table[NR_SYSCALLS];
