/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface PROReadWriteLock : NSObject <NSLocking> {

	opaque_pthread_rwlock_t lock;

}
-(void)lockForReading;
-(void)lockForWriting;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
@end

