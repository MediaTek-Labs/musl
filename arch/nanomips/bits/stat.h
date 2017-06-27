struct stat {
	dev_t st_dev;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	unsigned long __pad;
	off_t st_size;
	blksize_t st_blksize;
	int __pad2;
	blkcnt_t st_blocks;
	struct timespec st_atim;
	struct timespec st_mtim;
	struct timespec st_ctim;
	unsigned __unused[2];
};

#define STATX_TYPE              0x00000001
#define STATX_MODE              0x00000002
#define STATX_NLINK             0x00000004
#define STATX_UID               0x00000008
#define STATX_GID               0x00000010
#define STATX_ATIME             0x00000020
#define STATX_MTIME             0x00000040
#define STATX_CTIME             0x00000080
#define STATX_INO               0x00000100
#define STATX_SIZE              0x00000200
#define STATX_BLOCKS            0x00000400
#define STATX_BASIC_STATS       0x000007ff
#define STATX_BTIME             0x00000800
#define STATX_ALL               0x00000fff
#define STATX__RESERVED         0x80000000