/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject {

	CUTWeakReference* _contextWeakReference;
	NSDate* _firstOccurrence;
	unsigned long long _count;

}

@property (assign,nonatomic,__weak) id context; 
@property (readonly) NSDate * firstOccurrence;                      //@synthesize firstOccurrence=_firstOccurrence - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(id)init;
-(id)context;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setContext:(id)arg1 ;
-(NSDate *)firstOccurrence;
-(BOOL)shouldJettison:(id*)arg1 ;
@end

