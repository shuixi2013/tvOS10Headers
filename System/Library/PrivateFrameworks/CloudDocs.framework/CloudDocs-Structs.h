/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned bounceNo : 1;
} SCD_Struct_BR1;

typedef struct __asl_object_s* asl_object_sRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct {
	unsigned downloadStatus : 2;
	unsigned uploadStatus : 2;
	unsigned itemStatus : 2;
	unsigned conflicted : 1;
	unsigned preCrashMarker : 1;
	unsigned isUploadActive : 1;
	unsigned isDownloadActive : 1;
	unsigned isDownloadRequested : 1;
	unsigned shareOptions : 3;
	unsigned isHiddenExt : 1;
	unsigned isBRAlias : 1;
	unsigned char BRQueryItemKind;
	unsigned char kind;
} SCD_Struct_BR4;

typedef union {
	SCD_Struct_BR4 field1;
	unsigned long long value;
} SCD_Union_BR5;

typedef struct __CFBundle* CFBundleRef;

typedef struct {
	unsigned long long first_max_num;
	unsigned long long first_max_ms;
	unsigned long long progress_max_num;
	unsigned long long progress_max_ms;
	unsigned long long update_max_num;
	unsigned long long update_max_ms;
} SCD_Struct_BR7;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	long long field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_BR9;

typedef const struct __CFString* CFStringRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_BR11;

