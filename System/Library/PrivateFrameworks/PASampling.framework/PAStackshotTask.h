/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class PAStackshot;

@interface PAStackshotTask : NSObject {

	task_snapshot* _task_snap;
	PAStackshot* _stackshot;
	long long _bytesUsedByThreads;
	long long _bytesAvailableForThreads;
	unsigned long long _bytesBeforeTask;
	void* _imageInfos;
	void* _mainBinary;
	int* _donationReceivingPids;

}

@property (readonly) int pid; 
@property (readonly) const char* name; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL isSuppressed; 
@property (readonly) BOOL isForeground; 
-(const char*)name;
-(BOOL)isForeground;
-(int)pid;
-(BOOL)isFromMicrostackshot;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3 ;
-(BOOL)isDarwinBG;
-(unsigned)powerstatsFlags;
-(BOOL)setBufferPosition:(const char*)arg1 withRemainingBytes:(unsigned long long)arg2 ;
-(unsigned long long)bytesUsedInBuffer;
-(unsigned long long)_bytesUsedByImageInfos;
-(unsigned long long)_bytesUsedByDonationReceivingPids;
-(BOOL)isSuppressed;
-(unsigned long long)bytesUsedByHeader;
-(void)iterateThreads:(/*^block*/id)arg1 ;
-(unsigned long long)bytesUsedByThreads;
-(id)initWithStackshot:(id)arg1 ;
-(unsigned long long)numImageInfos;
-(dyld_uuid_info_64)mainBinary;
-(id)copyImageInfos;
-(id)copyDonationReceivingPids;
-(const task_snapshot*)task_snap;
@end

