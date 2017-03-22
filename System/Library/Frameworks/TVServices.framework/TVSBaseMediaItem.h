/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:57 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVSMediaItem.h>

@class NSMutableDictionary, NSString;

@interface TVSBaseMediaItem : NSObject <TVSMediaItem> {

	NSMutableDictionary* _metadataDictionary;
	NSMutableDictionary* _transactionDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(id)mediaItemURL;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1 ;
-(id)reportingDelegate;
-(void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1 ;
-(void)_setMetadata:(id)arg1 forProperty:(id)arg2 postNotification:(BOOL)arg3 ;
-(void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1 ;
-(void)removeMediaItemMetadataForProperty:(id)arg1 ;
@end
