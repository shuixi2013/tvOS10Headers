/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	BOOL field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	BOOL field5;
	double field6;
	int field7;
} SCD_Struct_MF5;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	id field1;
	id field2;
	id field3;
} SCD_Struct_MF8;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFSet* CFSetRef;

typedef struct __CFSocket* CFSocketRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

