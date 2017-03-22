/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOPhoneNumberResolving, OS_dispatch_queue;
@class NSObject;

@interface GEOPhoneNumberResolver : NSObject {

	id<GEOPhoneNumberResolving> _resolver;
	NSObject*<OS_dispatch_queue> _workQueue;

}
+(void)useLocalResolver;
-(void)dealloc;
-(id)init;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_alePackResolution:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
@end

