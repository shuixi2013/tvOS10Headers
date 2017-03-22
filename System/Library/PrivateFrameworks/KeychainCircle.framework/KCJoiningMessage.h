/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface KCJoiningMessage : NSObject {

	int _type;
	NSData* _firstData;
	NSData* _secondData;
	NSData* _der;

}

@property (readonly) int type;                         //@synthesize type=_type - In the implementation block
@property (readonly) NSData * firstData;               //@synthesize firstData=_firstData - In the implementation block
@property (readonly) NSData * secondData;              //@synthesize secondData=_secondData - In the implementation block
@property (readonly) NSData * der;                     //@synthesize der=_der - In the implementation block
+(id)messageWithType:(int)arg1 data:(id)arg2 error:(id*)arg3 ;
+(id)messageWithDER:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)encodedSizeType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
+(id)encodeToDERType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
+(id)messageWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(int)type;
-(NSData *)der;
-(NSData *)firstData;
-(NSData *)secondData;
-(id)initWithDER:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(BOOL)inflatePartsOfEncoding:(id*)arg1 ;
@end

