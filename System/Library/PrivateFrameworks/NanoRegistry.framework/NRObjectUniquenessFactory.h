/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface NRObjectUniquenessFactory : NSObject {

	NSMutableDictionary* _uniqueObjects;
	NSObject*<OS_dispatch_queue> _uniqueObjectsQueue;

}
+(id)sharedInstance;
-(id)init;
-(id)getUniqueObject:(id)arg1 ;
-(void)deallocObject:(id)arg1 ;
@end

