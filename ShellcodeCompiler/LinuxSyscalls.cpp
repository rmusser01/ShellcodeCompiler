
#include "LinuxSyscalls.h"

// Table with all syscall from x86 and x64 from https://fedora.juszkiewicz.com.pl/syscalls.html

vector<LinuxSyscalls::Syscall> LinuxSyscalls::s_vSystemCallsTable {
	{"accept", -1, 43},
	{"semop", -1, 65},
	{"tuxcall", -1, 184},
	{"security", -1, 185},
	{"epoll_ctl_old", -1, 214},
	{"epoll_wait_old", -1, 215},
	{"semtimedop", -1, 220},
	{"newfstatat", -1, 262},
	{"kexec_file_load", -1, 320},
	{"restart_syscall", 0, 219},
	{"exit", 1, 60},
	{"fork", 2, 57},
	{"read", 3, 0},
	{"write", 4, 1},
	{"open", 5, 2},
	{"close", 6, 3},
	{"waitpid", 7, -1},
	{"creat", 8, 85},
	{"link", 9, 86},
	{"unlink", 10, 87},
	{"execve", 11, 59},
	{"chdir", 12, 80},
	{"time", 13, 201},
	{"mknod", 14, 133},
	{"chmod", 15, 90},
	{"lchown", 16, 94},
	{"break", 17, -1},
	{"oldstat", 18, -1},
	{"lseek", 19, 8},
	{"getpid", 20, 39},
	{"mount", 21, 165},
	{"umount", 22, -1},
	{"setuid", 23, 105},
	{"getuid", 24, 102},
	{"stime", 25, -1},
	{"ptrace", 26, 101},
	{"alarm", 27, 37},
	{"oldfstat", 28, -1},
	{"pause", 29, 34},
	{"utime", 30, 132},
	{"stty", 31, -1},
	{"gtty", 32, -1},
	{"access", 33, 21},
	{"nice", 34, -1},
	{"ftime", 35, -1},
	{"sync", 36, 162},
	{"kill", 37, 62},
	{"rename", 38, 82},
	{"mkdir", 39, 83},
	{"rmdir", 40, 84},
	{"dup", 41, 32},
	{"pipe", 42, 22},
	{"times", 43, 100},
	{"prof", 44, -1},
	{"brk", 45, 12},
	{"setgid", 46, 106},
	{"getgid", 47, 104},
	{"signal", 48, -1},
	{"geteuid", 49, 107},
	{"getegid", 50, 108},
	{"acct", 51, 163},
	{"umount2", 52, 166},
	{"lock", 53, -1},
	{"ioctl", 54, 16},
	{"fcntl", 55, 72},
	{"mpx", 56, -1},
	{"setpgid", 57, 109},
	{"ulimit", 58, -1},
	{"oldolduname", 59, -1},
	{"umask", 60, 95},
	{"chroot", 61, 161},
	{"ustat", 62, 136},
	{"dup2", 63, 33},
	{"getppid", 64, 110},
	{"getpgrp", 65, 111},
	{"setsid", 66, 112},
	{"sigaction", 67, -1},
	{"sgetmask", 68, -1},
	{"ssetmask", 69, -1},
	{"setreuid", 70, 113},
	{"setregid", 71, 114},
	{"sigsuspend", 72, -1},
	{"sigpending", 73, -1},
	{"sethostname", 74, 170},
	{"setrlimit", 75, 160},
	{"getrlimit", 76, 97},
	{"getrusage", 77, 98},
	{"gettimeofday", 78, 96},
	{"settimeofday", 79, 164},
	{"getgroups", 80, 115},
	{"setgroups", 81, 116},
	{"select", 82, 23},
	{"symlink", 83, 88},
	{"oldlstat", 84, -1},
	{"readlink", 85, 89},
	{"uselib", 86, 134},
	{"swapon", 87, 167},
	{"reboot", 88, 169},
	{"readdir", 89, -1},
	{"mmap", 90, 9},
	{"munmap", 91, 11},
	{"truncate", 92, 76},
	{"ftruncate", 93, 77},
	{"fchmod", 94, 91},
	{"fchown", 95, 93},
	{"getpriority", 96, 140},
	{"setpriority", 97, 141},
	{"profil", 98, -1},
	{"statfs", 99, 137},
	{"fstatfs", 100, 138},
	{"ioperm", 101, 173},
	{"socketcall", 102, -1},
	{"syslog", 103, 103},
	{"setitimer", 104, 38},
	{"getitimer", 105, 36},
	{"stat", 106, 4},
	{"lstat", 107, 6},
	{"fstat", 108, 5},
	{"olduname", 109, -1},
	{"iopl", 110, 172},
	{"vhangup", 111, 153},
	{"idle", 112, -1},
	{"vm86old", 113, -1},
	{"wait4", 114, 61},
	{"swapoff", 115, 168},
	{"sysinfo", 116, 99},
	{"ipc", 117, -1},
	{"fsync", 118, 74},
	{"sigreturn", 119, -1},
	{"clone", 120, 56},
	{"setdomainname", 121, 171},
	{"uname", 122, 63},
	{"modify_ldt", 123, 154},
	{"adjtimex", 124, 159},
	{"mprotect", 125, 10},
	{"sigprocmask", 126, -1},
	{"create_module", 127, 174},
	{"init_module", 128, 175},
	{"delete_module", 129, 176},
	{"get_kernel_syms", 130, 177},
	{"quotactl", 131, 179},
	{"getpgid", 132, 121},
	{"fchdir", 133, 81},
	{"bdflush", 134, -1},
	{"sysfs", 135, 139},
	{"personality", 136, 135},
	{"afs_syscall", 137, 183},
	{"setfsuid", 138, 122},
	{"setfsgid", 139, 123},
	{"_llseek", 140, -1},
	{"getdents", 141, 78},
	{"_newselect", 142, -1},
	{"flock", 143, 73},
	{"msync", 144, 26},
	{"readv", 145, 19},
	{"writev", 146, 20},
	{"getsid", 147, 124},
	{"fdatasync", 148, 75},
	{"_sysctl", 149, 156},
	{"mlock", 150, 149},
	{"munlock", 151, 150},
	{"mlockall", 152, 151},
	{"munlockall", 153, 152},
	{"sched_setparam", 154, 142},
	{"sched_getparam", 155, 143},
	{"sched_setscheduler", 156, 144},
	{"sched_getscheduler", 157, 145},
	{"sched_yield", 158, 24},
	{"sched_get_priority_max", 159, 146},
	{"sched_get_priority_min", 160, 147},
	{"sched_rr_get_interval", 161, 148},
	{"nanosleep", 162, 35},
	{"mremap", 163, 25},
	{"setresuid", 164, 117},
	{"getresuid", 165, 118},
	{"vm86", 166, -1},
	{"query_module", 167, 178},
	{"poll", 168, 7},
	{"nfsservctl", 169, 180},
	{"setresgid", 170, 119},
	{"getresgid", 171, 120},
	{"prctl", 172, 157},
	{"rt_sigreturn", 173, 15},
	{"rt_sigaction", 174, 13},
	{"rt_sigprocmask", 175, 14},
	{"rt_sigpending", 176, 127},
	{"rt_sigtimedwait", 177, 128},
	{"rt_sigqueueinfo", 178, 129},
	{"rt_sigsuspend", 179, 130},
	{"pread64", 180, 17},
	{"pwrite64", 181, 18},
	{"chown", 182, 92},
	{"getcwd", 183, 79},
	{"capget", 184, 125},
	{"capset", 185, 126},
	{"sigaltstack", 186, 131},
	{"sendfile", 187, 40},
	{"getpmsg", 188, 181},
	{"putpmsg", 189, 182},
	{"vfork", 190, 58},
	{"ugetrlimit", 191, -1},
	{"mmap2", 192, -1},
	{"truncate64", 193, -1},
	{"ftruncate64", 194, -1},
	{"stat64", 195, -1},
	{"lstat64", 196, -1},
	{"fstat64", 197, -1},
	{"lchown32", 198, -1},
	{"getuid32", 199, -1},
	{"getgid32", 200, -1},
	{"geteuid32", 201, -1},
	{"getegid32", 202, -1},
	{"setreuid32", 203, -1},
	{"setregid32", 204, -1},
	{"getgroups32", 205, -1},
	{"setgroups32", 206, -1},
	{"fchown32", 207, -1},
	{"setresuid32", 208, -1},
	{"getresuid32", 209, -1},
	{"setresgid32", 210, -1},
	{"getresgid32", 211, -1},
	{"chown32", 212, -1},
	{"setuid32", 213, -1},
	{"setgid32", 214, -1},
	{"setfsuid32", 215, -1},
	{"setfsgid32", 216, -1},
	{"pivot_root", 217, 155},
	{"mincore", 218, 27},
	{"madvise", 219, 28},
	{"getdents64", 220, 217},
	{"fcntl64", 221, -1},
	{"gettid", 224, 186},
	{"readahead", 225, 187},
	{"setxattr", 226, 188},
	{"lsetxattr", 227, 189},
	{"fsetxattr", 228, 190},
	{"getxattr", 229, 191},
	{"lgetxattr", 230, 192},
	{"fgetxattr", 231, 193},
	{"listxattr", 232, 194},
	{"llistxattr", 233, 195},
	{"flistxattr", 234, 196},
	{"removexattr", 235, 197},
	{"lremovexattr", 236, 198},
	{"fremovexattr", 237, 199},
	{"tkill", 238, 200},
	{"sendfile64", 239, -1},
	{"futex", 240, 202},
	{"sched_setaffinity", 241, 203},
	{"sched_getaffinity", 242, 204},
	{"set_thread_area", 243, 205},
	{"get_thread_area", 244, 211},
	{"io_setup", 245, 206},
	{"io_destroy", 246, 207},
	{"io_getevents", 247, 208},
	{"io_submit", 248, 209},
	{"io_cancel", 249, 210},
	{"fadvise64", 250, 221},
	{"exit_group", 252, 231},
	{"lookup_dcookie", 253, 212},
	{"epoll_create", 254, 213},
	{"epoll_ctl", 255, 233},
	{"epoll_wait", 256, 232},
	{"remap_file_pages", 257, 216},
	{"set_tid_address", 258, 218},
	{"timer_create", 259, 222},
	{"timer_settime", 260, 223},
	{"timer_gettime", 261, 224},
	{"timer_getoverrun", 262, 225},
	{"timer_delete", 263, 226},
	{"clock_settime", 264, 227},
	{"clock_gettime", 265, 228},
	{"clock_getres", 266, 229},
	{"clock_nanosleep", 267, 230},
	{"statfs64", 268, -1},
	{"fstatfs64", 269, -1},
	{"tgkill", 270, 234},
	{"utimes", 271, 235},
	{"fadvise64_64", 272, -1},
	{"vserver", 273, 236},
	{"mbind", 274, 237},
	{"get_mempolicy", 275, 239},
	{"set_mempolicy", 276, 238},
	{"mq_open", 277, 240},
	{"mq_unlink", 278, 241},
	{"mq_timedsend", 279, 242},
	{"mq_timedreceive", 280, 243},
	{"mq_notify", 281, 244},
	{"mq_getsetattr", 282, 245},
	{"kexec_load", 283, 246},
	{"waitid", 284, 247},
	{"add_key", 286, 248},
	{"request_key", 287, 249},
	{"keyctl", 288, 250},
	{"ioprio_set", 289, 251},
	{"ioprio_get", 290, 252},
	{"inotify_init", 291, 253},
	{"inotify_add_watch", 292, 254},
	{"inotify_rm_watch", 293, 255},
	{"migrate_pages", 294, 256},
	{"openat", 295, 257},
	{"mkdirat", 296, 258},
	{"mknodat", 297, 259},
	{"fchownat", 298, 260},
	{"futimesat", 299, 261},
	{"fstatat64", 300, -1},
	{"unlinkat", 301, 263},
	{"renameat", 302, 264},
	{"linkat", 303, 265},
	{"symlinkat", 304, 266},
	{"readlinkat", 305, 267},
	{"fchmodat", 306, 268},
	{"faccessat", 307, 269},
	{"pselect6", 308, 270},
	{"ppoll", 309, 271},
	{"unshare", 310, 272},
	{"set_robust_list", 311, 273},
	{"get_robust_list", 312, 274},
	{"splice", 313, 275},
	{"sync_file_range", 314, 277},
	{"tee", 315, 276},
	{"vmsplice", 316, 278},
	{"move_pages", 317, 279},
	{"getcpu", 318, 309},
	{"epoll_pwait", 319, 281},
	{"utimensat", 320, 280},
	{"signalfd", 321, 282},
	{"timerfd_create", 322, 283},
	{"eventfd", 323, 284},
	{"fallocate", 324, 285},
	{"timerfd_settime", 325, 286},
	{"timerfd_gettime", 326, 287},
	{"signalfd4", 327, 289},
	{"eventfd2", 328, 290},
	{"epoll_create1", 329, 291},
	{"dup3", 330, 292},
	{"pipe2", 331, 293},
	{"inotify_init1", 332, 294},
	{"preadv", 333, 295},
	{"pwritev", 334, 296},
	{"rt_tgsigqueueinfo", 335, 297},
	{"perf_event_open", 336, 298},
	{"recvmmsg", 337, 299},
	{"fanotify_init", 338, 300},
	{"fanotify_mark", 339, 301},
	{"prlimit64", 340, 302},
	{"name_to_handle_at", 341, 303},
	{"open_by_handle_at", 342, 304},
	{"clock_adjtime", 343, 305},
	{"syncfs", 344, 306},
	{"sendmmsg", 345, 307},
	{"setns", 346, 308},
	{"process_vm_readv", 347, 310},
	{"process_vm_writev", 348, 311},
	{"kcmp", 349, 312},
	{"finit_module", 350, 313},
	{"sched_setattr", 351, 314},
	{"sched_getattr", 352, 315},
	{"renameat2", 353, 316},
	{"seccomp", 354, 317},
	{"getrandom", 355, 318},
	{"memfd_create", 356, 319},
	{"bpf", 357, 321},
	{"execveat", 358, 322},
	{"socket", 359, 41},
	{"socketpair", 360, 53},
	{"bind", 361, 49},
	{"connect", 362, 42},
	{"listen", 363, 50},
	{"accept4", 364, 288},
	{"getsockopt", 365, 55},
	{"setsockopt", 366, 54},
	{"getsockname", 367, 51},
	{"getpeername", 368, 52},
	{"sendto", 369, 44},
	{"sendmsg", 370, 46},
	{"recvfrom", 371, 45},
	{"recvmsg", 372, 47},
	{"shutdown", 373, 48},
	{"userfaultfd", 374, 323},
	{"membarrier", 375, 324},
	{"mlock2", 376, 325},
	{"copy_file_range", 377, 326},
	{"preadv2", 378, 327},
	{"pwritev2", 379, 328},
	{"pkey_mprotect", 380, 329},
	{"pkey_alloc", 381, 330},
	{"pkey_free", 382, 331},
	{"statx", 383, 332},
	{"arch_prctl", 384, 158},
	{"io_pgetevents", 385, 333},
	{"rseq", 386, 334},
	{"semget", 393, 64},
	{"semctl", 394, 66},
	{"shmget", 395, 29},
	{"shmctl", 396, 31},
	{"shmat", 397, 30},
	{"shmdt", 398, 67},
	{"msgget", 399, 68},
	{"msgsnd", 400, 69},
	{"msgrcv", 401, 70},
	{"msgctl", 402, 71},
	{"clock_gettime64", 403, -1},
	{"clock_settime64", 404, -1},
	{"clock_adjtime64", 405, -1},
	{"clock_getres_time64", 406, -1},
	{"clock_nanosleep_time64", 407, -1},
	{"timer_gettime64", 408, -1},
	{"timer_settime64", 409, -1},
	{"timerfd_gettime64", 410, -1},
	{"timerfd_settime64", 411, -1},
	{"utimensat_time64", 412, -1},
	{"pselect6_time64", 413, -1},
	{"ppoll_time64", 414, -1},
	{"io_pgetevents_time64", 416, -1},
	{"recvmmsg_time64", 417, -1},
	{"mq_timedsend_time64", 418, -1},
	{"mq_timedreceive_time64", 419, -1},
	{"semtimedop_time64", 420, -1},
	{"rt_sigtimedwait_time64", 421, -1},
	{"futex_time64", 422, -1},
	{"sched_rr_get_interval_time64", 423, -1},
	{"pidfd_send_signal", 424, 424},
	{"io_uring_setup", 425, 425},
	{"io_uring_enter", 426, 426},
	{"io_uring_register", 427, 427},
	{"open_tree", 428, 428},
	{"move_mount", 429, 429},
	{"fsopen", 430, 430},
	{"fsconfig", 431, 431},
	{"fsmount", 432, 432},
	{"fspick", 433, 433}
};

// Get syscall number from name for x86 or x64

int LinuxSyscalls::GetSyscallNr(string p_sSyscallName)
{
	if (Platform::GetPlatform() == PLATFORM_TYPE_LINUX_X64) return GetSyscallNr_x64(p_sSyscallName);
	else return GetSyscallNr_x86(p_sSyscallName);
}

// Get syscall number from name for x86

int LinuxSyscalls::GetSyscallNr_x86(string p_sSyscallName)
{
	for (size_t i = 0; i < s_vSystemCallsTable.size(); i++)
		if (Utils::ToLower(p_sSyscallName).compare(s_vSystemCallsTable[i].Name) == 0) return s_vSystemCallsTable[i].x86;

	return LINUX_SYSCALL_UNKNOWN;
}

// Get syscall number from name for x64

int LinuxSyscalls::GetSyscallNr_x64(string p_sSyscallName)
{
	for (size_t i = 0; i < s_vSystemCallsTable.size(); i++)
		if (Utils::ToLower(p_sSyscallName).compare(s_vSystemCallsTable[i].Name) == 0) return s_vSystemCallsTable[i].x64;

	return LINUX_SYSCALL_UNKNOWN;
}

// Check if a system call exists

bool LinuxSyscalls::SyscallExists(string p_sSyscallName)
{
	if (Platform::GetPlatform() == PLATFORM_TYPE_LINUX_X64)
	{
		if (GetSyscallNr_x64(p_sSyscallName) == LINUX_SYSCALL_UNKNOWN) return false;
		else return true;
	}
	else
	{
		if (GetSyscallNr_x86(p_sSyscallName) == LINUX_SYSCALL_UNKNOWN) return false;
		else return true;
	}
}
