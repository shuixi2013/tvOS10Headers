/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface GEOMapRequestManager : NSObject {

	NSMutableSet* _requests;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)init;
-(void)trackRequest:(id)arg1 ;
-(void)requestComplete:(id)arg1 ;
@end

