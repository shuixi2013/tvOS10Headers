/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _CFURLAuthChallenge* CFURLAuthChallengeRef;

typedef struct _CFHSTSPolicy* CFHSTSPolicyRef;

typedef struct _CFURLRequest* CFURLRequestRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _CFURLResponse* CFURLResponseRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct _CFURLCredential* CFURLCredentialRef;

typedef struct CFURLProtocolClient {
	long long version;
	void client;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
	/*function pointer*/void* wasRedirected;
	/*function pointer*/void* cacheResponseIsValid;
	/*function pointer*/void* didReceiveResponse;
	/*function pointer*/void* didLoadData;
	/*function pointer*/void* didFinishLoading;
	/*function pointer*/void* didFail;
	/*function pointer*/void* didReceiveAuthenticationChallenge;
} CFURLProtocolClient;

typedef struct _CFURLProtectionSpace* CFURLProtectionSpaceRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct _CFURLProtocol* CFURLProtocolRef;

typedef struct weak_ptr<__CFURLCache> {
	__CFURLCache __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<__CFURLCache>;

typedef struct shared_ptr<TCPIO_EstablishBase> {
	TCPIO_EstablishBase __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<TCPIO_EstablishBase>;

typedef struct shared_ptr<TCPIOConnectionObjCPP> {
	TCPIOConnectionObjCPP __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<TCPIOConnectionObjCPP>;

typedef struct {
	long long field1;
	int field2;
} SCD_Struct_NS19;

typedef struct OpaqueCFHTTPCookie* OpaqueCFHTTPCookieRef;

typedef struct __CFArray* CFArrayRef;

typedef struct timespec {
	long long tv_sec;
	long long tv_nsec;
} timespec;

typedef struct stat {
	int st_dev;
	unsigned short st_mode;
	unsigned short st_nlink;
	unsigned long long st_ino;
	unsigned st_uid;
	unsigned st_gid;
	int st_rdev;
	timespec st_atimespec;
	timespec st_mtimespec;
	timespec st_ctimespec;
	timespec st_birthtimespec;
	long long st_size;
	long long st_blocks;
	int st_blksize;
	unsigned st_flags;
	unsigned st_gen;
	int st_lspare;
	long long st_qspare[2];
} stat;

typedef struct __CFNetService* CFNetServiceRef;

typedef struct __CFNetServiceBrowser* CFNetServiceBrowserRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_NS26;

typedef struct {
	SCD_Struct_NS26 field1;
	SCD_Struct_NS26 field2;
} SCD_Struct_NS27;

typedef struct _CFURLCredentialStorage* CFURLCredentialStorageRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct OpaqueCFHTTPCookieStorage* OpaqueCFHTTPCookieStorageRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct __CFWriteStream* CFWriteStreamRef;

typedef struct {
	long long domain;
	int error;
} SCD_Struct_NS33;

typedef struct _CFURLConnection* CFURLConnectionRef;

typedef struct _CFURLDownload* CFURLDownloadRef;

typedef struct __CFURL* CFURLRef;

typedef struct __CFError* CFErrorRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct __PerformanceTiming* PerformanceTimingRef;

typedef struct _CFURLCache* CFURLCacheRef;

typedef struct __CFURLStorageSession* CFURLStorageSessionRef;

typedef struct __CFSet* CFSetRef;

typedef struct SmartBlockWithArgs<NSURLSessionTaskMetrics *> {
	BlockHolderVar<NSURLSessionTaskMetrics *> __ptr_;
	__shared_weak_count __cntrl_;
} SmartBlockWithArgs<NSURLSessionTaskMetrics *>;

typedef struct SmartBlockWithArgs<bool> {
	BlockHolderVar<bool> __ptr_;
	__shared_weak_count __cntrl_;
} SmartBlockWithArgs<bool>;

