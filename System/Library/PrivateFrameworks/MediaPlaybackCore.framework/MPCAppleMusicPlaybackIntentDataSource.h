/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPCPlaybackIntentDataSource.h>

@class NSOperationQueue, NSString;

@interface MPCAppleMusicPlaybackIntentDataSource : NSObject <MPCPlaybackIntentDataSource> {

	NSOperationQueue* _operationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)configureContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)populateContainer:(id)arg1 forPlaybackIntent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)populateRepresentationsForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

