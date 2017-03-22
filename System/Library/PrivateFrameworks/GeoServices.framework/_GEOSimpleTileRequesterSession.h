/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject, NSCache, NSString;

@interface _GEOSimpleTileRequesterSession : NSObject <NSURLSessionDelegate> {

	NSPointerArray* _requesters;
	NSObject*<OS_dispatch_queue> _isolation;
	NSCache* _sessionCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
-(void)dealloc;
-(id)init;
-(void)addTileRequester:(id)arg1 ;
-(void)removeTileRequester:(id)arg1 ;
-(id)sessionForAuditToken:(id)arg1 ;
-(id)_runningOperationForTask:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
@end

