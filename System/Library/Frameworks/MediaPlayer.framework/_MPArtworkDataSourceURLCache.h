/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <CFNetwork/NSURLCache.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface _MPArtworkDataSourceURLCache : NSURLCache {

	NSMapTable* _requestSizeMap;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
-(id)init;
-(void)setRepresentationSize:(CGSize)arg1 forRequest:(id)arg2 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
@end

