/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray;

@interface VMUVMRegionTracker : NSObject {

	unsigned _task;
	CSTypeRef _symbolicator;
	NSMutableArray* _regionInfoArray;

}
-(void)dealloc;
-(unsigned long long)_regionIndexForAddress:(unsigned long long)arg1 ;
-(id)initWithTask:(unsigned)arg1 stackLogReader:(id)arg2 ;
-(unsigned long long)handleStackLogEvent:(mach_stack_logging_record)arg1 ;
-(id)vmRegionRangeInfoForRange:(VMURange)arg1 ;
@end

