/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface asn1Token : NSObject {

	unsigned char mClass;
	unsigned long long mIdentifier;
	unsigned long long mLength;
	const char* mContent;

}

@property (readonly) unsigned char tokenClass; 
@property (readonly) unsigned long long identifier; 
@property (readonly) unsigned long long length; 
@property (readonly) const char* content; 
+(id)readTokenFromBuffer:(const char*)arg1 opaque:(BOOL)arg2 ;
+(id)readTokenFromBuffer:(const char*)arg1 ;
+(id)readOpaqueTokenFromBuffer:(const char*)arg1 ;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(unsigned char)tokenClass;
-(id)description;
-(unsigned long long)length;
-(unsigned long long)identifier;
-(const char*)content;
@end

