/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BKSHIDEventRouterManagerBase : NSObject {

	NSArray* _eventRouters;

}

@property (nonatomic,retain) NSArray * eventRouters;              //@synthesize eventRouters=_eventRouters - In the implementation block
-(void)setEventRouters:(NSArray *)arg1 ;
-(NSArray *)eventRouters;
-(long long)routerDestinationForDescriptor:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
