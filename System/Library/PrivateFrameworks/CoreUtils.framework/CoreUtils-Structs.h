/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CFBitVector* CFBitVectorRef;

typedef union {
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} SCD_Union_CU1;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	SCD_Union_CU1 __u6_addr;
} in6_addr;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef union {
	sockaddr sa;
	sockaddr_in v4;
	sockaddr_in6 v6;
} SCD_Union_CU7;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _NSZone* NSZoneRef;

