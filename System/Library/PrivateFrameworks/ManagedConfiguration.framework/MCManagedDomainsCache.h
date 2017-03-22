/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MCManagedDomainsCache : NSObject {

	NSObject*<OS_dispatch_queue> _memberQueue;
	NSMutableArray* _memberQueueCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> memberQueue;              //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * memberQueueCache;                     //@synthesize memberQueueCache=_memberQueueCache - In the implementation block
+(id)sharedCache;
-(void)rereadCache;
-(void)memberQueueRereadCache;
-(NSMutableArray *)memberQueueCache;
-(void)setMemberQueueCache:(NSMutableArray *)arg1 ;
-(BOOL)isURLManaged:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)memberQueue;
-(void)setMemberQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

