/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSConditionLock.h>

@interface _MFLazyCacheConditionLock : NSConditionLock {

	long long _waiterCount;

}

@property (readonly) long long waiterCount; 
-(long long)waiterCount;
-(void)incrementWaiterCount;
-(void)decrementWaiterCount;
@end

